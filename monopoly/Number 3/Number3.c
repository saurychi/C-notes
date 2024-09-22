/**************************************
 **************************************
 *  THE MONOPOLY GAME 2.0 - NUMBER 3  *
 **************************************
 **************************************/

/* Include libraries */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/* Data structure definition */
typedef enum{
 // Constants - Display format on screen
	BSCS, 	 // BS Computer Science 
	BSIT, 	 // BS Information Technology
	BSIS  	 // BS Information Systems
}program;

typedef struct{
	program prog;
	int year;
}progYearType;


/* Function prototypes */
int getValueFromString(char string[]);
program getProgram(char string[]);
progYearType getProgYear(char string[]);
void editProgYear(progYearType *item, program prog, int year);
void displayProgYear(progYearType item);
void displayProgYearFromArray(progYearType items[], int count);


/* Main function */
int main(){
	// Variable declarations
	char getFromValueStringTest[10][50] = {
		"He110 W0r1d",
		"123123",
		"He1p111",
		"idk what 123 to do 456",
		"Wa1ne Ma23hew A. Da4a5a",
		"hahahaha 99 L0LLLLLL 456",
		"4mb0T N1M0",
		"6a6s6d6f6g6h",
		"A r739andom str917ing",
		"If9you8get7this6right5you4are3smart2hihi1"
	};
	char progYears[50][80] = {
		"Computer Science - 1",
		"BS Computer Science 2",
		"BS Comp Sci 3"
		"BS COMPUTER SCIENCE 4",
		"bs computer science 1",
		"BSCS2",
		"BSCS 3",
		"BSCS-4",
		"BS CS 1",
		"BS CS-2",
		"CS-3",
		"CS4",
		"3 Computer Science",
		"Information Technology - 1",
		"BS Information Technology 2",
		"BS Info Tech 3"
		"BS INFORMATION TECHNOLOGY 4",
		"bs information technology 1",
		"BSIT2",
		"BSIT 3",
		"BSIT-4",
		"BS IT 1",
		"BS IT-2",
		"IT-3",
		"IT4",
		"3 Information Technology",
		"Information Systems - 1",
		"BS Information Systems 2",
		"BS Info Sys 3"
		"BS INFORMATION SYSTEMS 4",
		"bs information systems 1",
		"BSIS2",
		"BSIS 3",
		"BSIS-4",
		"BS IS 1",
		"BS IS-2",
		"IS-3",
		"IS4",
		"3 Information Systems",
		"Information Systems - 3rd year",
		"Information Technology - 1st year",
		"Computer Science - 4th year",
		"Computer Science 2nd year",
		"IT 3rd year",
		"CS 2nd year",
		"IS 4th year",
		"Computer Science Year 2",
		"Information Technology Year 3",
		"Information Systems Year 1",
		"BS CS Year 4"
	};
	int numGetFromValueStringTestItems = 10;
	int numProgYears = 50;
	// Create your own function calls to test your implementations :)
}


/** FUNCTION 16
 * Extracts the digits from the given string to form an integer to be returned
 * to the calling function. 
 * Example: 
 * Given: "Wa1ne Ma23hew A. Da4a5a"
 * Value to return: 12345
 */
int getValueFromString(char string[]){
	
}

/** FUNCTION 17
 * Identifies the program in a given string (formats provided above) to be
 * returned to the calling function. 
 * Note: Use the constants, not the equivalent integer of the constants
 */
program getProgram(char string[]){
	
}

/** FUNCTION 18
 * Returns a progYearType structure containing the program and year. 
 * This function must invoke getValueFromString() to get the year level and
 * getProgram() to get the program.
 */
progYearType getProgYear(char string[]){
	
}

/** FUNCTION 19
 * Modifies a given progYearType item by assigning the prog and year variables
 * to the structure's appropriate fields.  
 */
void editProgYear(progYearType *item, program prog, int year){
	
}

/** FUNCTION 20
 * Displays the program and year level from the given program and year information.
 * Example:
 * Given values: BSCS, 3 
 * Display: "BS Computer Science - 3"
 */
void displayProgYear(progYearType item){
	
}

/** FUNCTION 21
 * Displays a list of program and year level information by invoking 
 * displayProgYear() per entry in the given array. 
 * Each program and year info is printed in a single line. 
 * The number of items in the array is given by count.
 */
void displayProgYearFromArray(progYearType items[], int count){
	
}

