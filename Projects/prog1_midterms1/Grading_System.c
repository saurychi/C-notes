#include <stdio.h>
#include <stdlib.h>

int main(){

    int subjectNum = 0, examNum, sum = 0, counter = 0, lowest = 0, lowest_subject = 0,
        highest, highest_subject = 0, current_sum = 0;
    int **exams = malloc(sizeof(int *) * subjectNum);

    printf("Input number of Subjects: ");
    scanf("%d", &subjectNum);
    exams = realloc(exams, subjectNum * sizeof(int *));

    printf("Input number of Exams: ");
    scanf("%d", &examNum);

    for(int i = 0; i < subjectNum; i++){
        exams[i] = calloc(examNum, sizeof(int));
        for(int j = 0; j < examNum; j++){
            printf("Input Grade for Subject %d - Exam %d : ", i + 1, j + 1);
            scanf("%d", &exams[i][j]);

            sum += exams[i][j];
            counter++;
        }
        for(int j = 0; j < examNum; j++){
            current_sum += exams[i][j];
        }
        if(i == 0){
            highest = current_sum;
        }
        if(highest < current_sum){
            highest = current_sum;
            highest_subject = i+1;
        }
        if(lowest > current_sum){
            lowest = current_sum;
            lowest_subject = i+1;
        }
    }

    int average = sum / counter;

    printf("\n\nAverage Grade for %d Exams : %d\n", counter, average);

    if(average <= 0){
        printf("\nNo Best Subject\n");
    } else {
        printf("\nBest Subject: Subject %d\n", highest_subject);
    }
    printf("Worst Subject: Subject %d\n", lowest_subject);

    if(average > 75){
        printf("\nPassed this semester");
    } else {
        printf("\nFailed this semester");
    }



    free(exams);

   return 0;
}
