#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, len = 0;
    int *numArr = calloc(len ,sizeof(int));

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        len++;
        numArr = realloc(numArr, len * sizeof(int));
        numArr[len - 1] = num % 10;
        num /= 10;
    }

    printf("Foundation Codes: ");
    for(int i = 0; i < len; i++){
        printf("%d ", numArr[i]);
    }
    printf("\n");

    int temp = 0;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - 1; j++){
            if(numArr[j] > numArr[j + 1]){
                temp = numArr[j];
                numArr[j] = numArr[j + 1];
                numArr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Codes: ");
    for(int i = 0; i < len; i++){
        printf("%d ", numArr[i]);
    }

    printf("\n");

    printf("Lacking: ");


    // needs to be sorted in increasing order
    for(int i = 1; i <= numArr[len - 1]; i++){
      int counter = 0;
      for(int j = 0; j < len; j++){
          if(numArr[j] == i){ // 1, 2, 4, 4, 4, 7
              counter++;
          }
      }
      if(counter < 1){
          printf("%d ", i);
      }
  }


    free(numArr);

    return 0;
}
