#include <stdio.h>

int main(){

    // you could use the name of the files as an argument when the file being read is in the same directory as the c file
    // put "r" as second argument if you want to read the said file
    // FILE *pF = fopen("poem.txt", "r");

    // or put the literal address from the foler of the file being read, and don't forget to use double backslash "\\"
    FILE *pF = fopen("C:\\Users\\walter\\Desktop\\code-sample\\c_tutorial\\file_handling\\reading_a_file\\poem.txt", "r");

    // check if file being read exists
    if(pF == NULL){
        printf("Unable to open file!\n");
        return 1;
    } else {
        return 0;
    }


    char str_arr[255];

    fgets(str_arr, 255, pF);
    printf("%s\n", str_arr); // prints only one line of characters including whitespace

    while(fgets(str_arr, 255, pF) != NULL){ // this keeps printing untill fgets doesnt encounter any strings
        printf("\n%s", str_arr);
    }


    fclose(pF); // do not put a pointer in it

    return 0;
}
