#include <stdio.h>
#include <string.h>

void censor(char str[], int len, char *data[]);

int main()
{

    char swearWords[5][2] = {"fk", "ct", "st"};

    char swearStr[100];

    printf("Enter a string: ");
    fgets(swearStr, 100, stdin);

    int len = strlen(swearStr);

    censor(swearStr, len, swearWords);

    return 0;
}

void censor(char str[], int len, char *data[])
{
    char curr_str[100] = "";
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            curr_str[j] = str[i];
        }
        else
        {
            for (int k = 0; k < 5; k++)
            {
                if (curr_str[1] == data[i][0] && curr_str[2] == data[i][1])
                {
                }
            }
        }
    }
}
