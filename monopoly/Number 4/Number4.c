/**************************************
 **************************************
 *  THE MONOPOLY GAME 2.0 - NUMBER 4  *
 **************************************
 **************************************/

/* Include libraries */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


/* Data structure definition */
typedef enum{
 // Constants - Display format on screen
	PASSED,  // PASSED
	FAILED   // FAILED
}status;

typedef struct{
	float grade;
	status gradeStatus;
}gradeType;

/* Function prototypes */
int isNumeric(char grade[]);
float convertToFloat(char value[]);
float convertGrade(char grade[]); 
status getStatus(float grade);
gradeType getGradeType(char grade[]);
void displayGradeType(gradeType grade);
void displayGradeTypeFromArray(gradeType items[], int count);


/* Main function */
int main(){
	// Variable declarations
	char grades[45][5] = {
		"1.0", "1.1", "1.2", "1.3", "1.4",
		"1.5", "1.6", "1.7", "1.8", "1.9",
		"2.0", "2.1", "2.2", "2.3", "2.4",
		"2.5", "2.6", "2.7", "2.8", "2.9",
		"3.0", "3.1", "3.2", "3.3", "3.4",
		"3.5", "3.6", "3.7", "3.8", "3.9",
		"4.0", "4.1", "4.2", "4.3", "4.4",
		"4.5", "4.6", "4.7", "4.8", "4.9",
		"5.0", "INC", "NC", "NG", "W"
	};
	int numGrades = 45;
	// Create your own function calls to test your implementations :)
}


/** FUNCTION 22
 * Determines the kind of grade given and return 1 if the given grade is in numeric 
 * format and 0 if otherwise (such as "NG", "NC, "INC").
 */
int isNumeric(char grade[]){
	
}

/** FUNCTION 23
 * Converts a decimal number from string format to float and returns the result 
 * to the calling function.
 * Example: "2.5" returns 2.5, "4.56" returns 4.56. 
 * Assume that all the inputs are in valid format.
 */
float convertToFloat(char value[]){
	
}

/** FUNCTION 24
 * Converts a given grade in string to its equivalent float value following the
 * specifications given in the problem (convert 3.1-4.9 and letter grades to 5.0
 * and the rest as is). Assume that all the inputs are in their valid ranges
 * (no grade beyond the ranges 1.0 and 5.0 can exist). 
 * This function must invoke isNumeric() and convertToFloat().
 */
float convertGrade(char grade[]){
	
}

/** FUNCTION 25
 * Determines and returns the status of a given numeric grade as either 
 * PASSED or FAILED.  
 */
status getStatus(float grade){
	
}

/** FUNCTION 26
 * Creates and returns a gradeType variable populated with appropriate 
 * values in the fields by invoking convertGrade() and getStatus().
 */
gradeType getGradeType(char grade[]){
	
}

/** FUNCTION 27
 * Displays the grade and status from the given gradeType information.
 * Example values: 3.0, PASSED
 * Display: "3.0 - PASSED"
 */
void displayGradeType(gradeType grade){
	
}

/** FUNCTION 28
 * Displays a list of grade and status information by invoking 
 * displayGradetype() per entry in the given array. 
 * Each grade and status info is printed in a single line. 
 * The number of items in the array is given by count.
 */
void displayGradeTypeFromArray(gradeType items[],int count){
	
}
