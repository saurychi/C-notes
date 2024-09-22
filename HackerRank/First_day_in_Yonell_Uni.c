#include <stdio.h>

int main() {

    int num, n, r, nr, result;

    scanf("%d", &num);

    int sum = 0;

    for(int i = 1; i < num; i++){
        sum += i;
    }

    printf("%d", sum);

    return 0;
}

// #include <stdio.h>

// int get_factorial(int num){
//     int result = 1;
//     for(int i = num; i > 0; i--){
//         result *= i;
//     }
//     return result;
// }

// int main() {

//     int num, n, r, nr, result;

//     scanf("%d", &num);

//     n = get_factorial(num);
//     r = get_factorial(2);
//     nr = get_factorial(num - 2);

//     result = (nr * r) / n;

//     printf("%d", result);

//     return 0;
// }
