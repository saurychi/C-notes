#include <stdio.h>

int main(){

    int subjectNum = 0, examNum = 0, currentNum = 0;
    int examScore = 0, highestSubject = 1, lowestSubject = 1;
    int highestScore = 0, lowestScore = 0, totalNum = 0;


    printf("Input number of Subjects: ");
    scanf("%d", &subjectNum);

    printf("Input number of Exams: ");
    scanf("%d", &examNum);

    int counter = 0;
    int start = 0;
    for(int i = 1; i <= subjectNum; i++){
        for(int j = 1; j <= examNum; j++){
            printf("Input Grade for Subject %d - Exam %d : ", i, j);
            scanf("%d", &examScore);
            currentNum += examScore;
            totalNum += examScore;
            counter++;
        }
        if(start == 0){
            highestScore = currentNum;
            lowestScore = currentNum;
        }
        if(highestScore < currentNum){
            highestScore = currentNum;
            highestSubject = i;
        }

        if(lowestScore > currentNum){
            lowestScore = currentNum;
            lowestSubject = i;
        }
        currentNum = 0;
        start++;
    }

    int average = totalNum / counter;

    printf("\n\nAverage Grade for %d Exams : %d\n", counter, average);

    (totalNum != 0)? printf("\nBest Subject: Subject %d", highestSubject) : printf("\nNo Best Subject");
    printf("\nWorst Subject: Subject %d\n", lowestSubject);

    (average > 75)? printf("\nPassed this Semester") : printf("\nFailed this Semester");

    return 0;
}
