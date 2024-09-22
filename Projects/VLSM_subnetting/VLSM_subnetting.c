#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_REF 27

typedef struct
{
    int first_octet;
    int second_octet;
    int third_octet;
    int fourth_octet;
} Address;

typedef struct
{
    int borrowed_bits;
    double range;
    int subnet_notation;
    Address subnet_mask;
} reference_table;

reference_table ref_table[MAX_REF] = {
    {2, 4, 30, {255, 255, 255, 252}},
    {3, 8, 29, {255, 255, 255, 248}},
    {4, 16, 28, {255, 255, 255, 240}},
    {5, 32, 27, {255, 255, 255, 224}},
    {6, 64, 26, {255, 255, 255, 192}},
    {7, 128, 25, {255, 255, 255, 128}},
    {8, 256, 24, {255, 255, 255, 0}},
    {10, 512, 22, {255, 255, 252, 0}},
    {11, 1024, 21, {255, 255, 248, 0}},
    {12, 2048, 20, {255, 255, 240, 0}},
    {13, 4096, 19, {255, 255, 224, 0}},
    {14, 8192, 18, {255, 255, 192, 0}},
    {15, 16384, 17, {255, 255, 128, 0}},
    {16, 32768, 16, {255, 255, 0, 0}},
    {18, 65536, 14, {255, 252, 0, 0}},
    {19, 131072, 13, {255, 248, 0, 0}},
    {20, 262144, 12, {255, 240, 0, 0}},
    {21, 524288, 11, {255, 224, 0, 0}},
    {22, 1048576, 10, {255, 192, 0, 0}},
    {23, 2097152, 9, {255, 128, 0, 0}},
    {24, 4194304, 7, {255, 0, 0, 0}},
    {25, 8388608, 6, {252, 0, 0, 0}},
    {26, 16777216, 5, {248, 0, 0, 0}},
    {27, 33554432, 4, {255, 0, 0, 0}},
    {28, 67108864, 3, {255, 0, 0, 0}},
    {29, 134217728, 2, {255, 0, 0, 0}},
    {30, 268435456, 1, {128, 0, 0, 0}}};

typedef struct
{
    int host;
    int borrowed_bits;
    int range;
    int subnet_notation;
    Address subnetmask;
    Address ntwrk_addrs;
    Address start_ip;
    Address end_ip;
    Address brdcst_ip;
    int waste;
} subnet_table;

subnet_table *populateSubnets(int len);

void computeNewAddress(Address *address, int subnet);
void displaySubnets(subnet_table arr[], int len);
void computeRange(subnet_table arr[], int len);
void computeAddresses(subnet_table arr[], int len, Address curr_address);

int main()
{

    int len, old_subnet;
    Address starting_IP_addrs;

    printf("Enter Starting IP Address(NNN.NNN.NNN.NNN): ");
    scanf("%d.%d.%d.%d", &starting_IP_addrs.first_octet, &starting_IP_addrs.second_octet, &starting_IP_addrs.third_octet, &starting_IP_addrs.fourth_octet);
    printf("Enter subnet: /");
    scanf("%d", &old_subnet);
    computeNewAddress(&starting_IP_addrs, old_subnet);

    // printf("%d.%d.%d.%d\n", starting_IP_addrs.first_octet, starting_IP_addrs.second_octet, starting_IP_addrs.third_octet, starting_IP_addrs.fourth_octet);
    printf("Enter subnets in the network: ");
    scanf("%d", &len);

    subnet_table *subnetsArr = populateSubnets(len);

    computeRange(subnetsArr, len);
    computeAddresses(subnetsArr, len, starting_IP_addrs);

    displaySubnets(subnetsArr, len);

    free(subnetsArr);
    subnetsArr = NULL;

    return 0;
}

void computeNewAddress(Address *address, int subnet)
{
    int new_subnet;
    for (int i = 0; i < MAX_REF; i++)
    {
        if (subnet == ref_table[i].subnet_notation)
        {
            address->first_octet = address->first_octet & ref_table[i].subnet_mask.first_octet;
            address->second_octet = address->second_octet & ref_table[i].subnet_mask.second_octet;
            address->third_octet = address->third_octet & ref_table[i].subnet_mask.third_octet;
            address->fourth_octet = address->fourth_octet & ref_table[i].subnet_mask.fourth_octet;
        }
    }
}

subnet_table *populateSubnets(int len)
{
    subnet_table *subnets = malloc(len * sizeof(subnet_table));
    for (int i = 0; i < len; i++)
    {
        printf("Enter number of hosts on subnet %d: ", i + 1);
        scanf("%d", &subnets[i].host);
    }
    // insertion sort
    int key, temp;
    for (int i = 0; i < len; i++)
    {
        key = i;
        for (int j = i; j < len; j++)
        {
            if (subnets[j].host > subnets[key].host)
            {
                key = j;
            }
        }
        temp = subnets[i].host;
        subnets[i].host = subnets[key].host;
        subnets[key].host = temp;
    }
    return subnets;
}

void computeRange(subnet_table arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < MAX_REF; j++)
        {
            if (arr[i].host <= ref_table[j].range)
            {
                arr[i].borrowed_bits = ref_table[j].borrowed_bits;
                arr[i].range = ref_table[j].range;
                arr[i].subnet_notation = ref_table[j].subnet_notation;
                arr[i].subnetmask.first_octet = ref_table[j].subnet_mask.first_octet;
                arr[i].subnetmask.third_octet = ref_table[j].subnet_mask.third_octet;
                arr[i].subnetmask.second_octet = ref_table[j].subnet_mask.second_octet;
                arr[i].subnetmask.fourth_octet = ref_table[j].subnet_mask.fourth_octet;
                break;
            }
        }
    }
}
void computeAddresses(subnet_table arr[], int len, Address curr_address)
{
    int sum;
    for (int i = 0; i < len; i++)
    {
        arr[i].ntwrk_addrs = curr_address;
        arr[i].start_ip = curr_address;
        arr[i].end_ip = curr_address;
        arr[i].brdcst_ip = curr_address;

        arr[i].start_ip.fourth_octet++;
        arr[i].end_ip.fourth_octet += (arr[i].range - 2);
        arr[i].brdcst_ip.fourth_octet += (arr[i].range - 1);
        curr_address.fourth_octet += arr[i].range;
        arr[i].waste = (arr[i].range - arr[i].host) - 2;
        if (curr_address.fourth_octet > 255)
        {
            curr_address.third_octet++;
            curr_address.fourth_octet = 0;
        }
        if(curr_address.third_octet > 255){
            curr_address.second_octet++;
            curr_address.third_octet = 0;
        }
        if(curr_address.second_octet > 255){
            curr_address.first_octet++;
            curr_address.second_octet = 0;
        }
        if(curr_address.first_octet > 255){
            printf("Address Full!\n");
            exit;
        }
    }
}

void displaySubnets(subnet_table arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%-3d  ", arr[i].host);
        printf("%-3d  ", arr[i].borrowed_bits);
        printf("%-3d  ", arr[i].range);
        printf("/%2d  ", arr[i].subnet_notation);
        printf("%3d.%-3d.%-3d.%-3d  ", arr[i].subnetmask.first_octet, arr[i].subnetmask.second_octet, arr[i].subnetmask.third_octet, arr[i].subnetmask.fourth_octet);
        printf("%3d.%-3d.%-3d.%-3d  ", arr[i].ntwrk_addrs.first_octet, arr[i].ntwrk_addrs.second_octet, arr[i].ntwrk_addrs.third_octet, arr[i].ntwrk_addrs.fourth_octet);
        printf("%3d.%-3d.%-3d.%-3d  ", arr[i].start_ip.first_octet, arr[i].start_ip.second_octet, arr[i].start_ip.third_octet, arr[i].start_ip.fourth_octet);
        printf("%3d.%-3d.%-3d.%-3d  ", arr[i].end_ip.first_octet, arr[i].end_ip.second_octet, arr[i].end_ip.third_octet, arr[i].end_ip.fourth_octet);
        printf("%3d.%-3d.%-3d.%-3d  ", arr[i].brdcst_ip.first_octet, arr[i].brdcst_ip.second_octet, arr[i].brdcst_ip.third_octet, arr[i].brdcst_ip.fourth_octet);
        printf("%d\n", arr[i].waste);
    }
}
