/**
 * INSTRUCTIONS:
 * THIS IS A HEADER (.h) FILE.
 * THIS FILE CONTAINS THE FOLLOWING:
 * - Data structure definitions
 * - Function prototypes
 * 
 * Note: Impelementations for the functions defined below are
 *       found in the "Masterlist.c" file.        
 */
 

#ifndef MASTERLIST_H
#define MASTERLIST_H

/* Macro definition */
#define SIZE 2024

/* Data structure definition */
typedef struct{
	char firstName[50];
	char lastName[50];
	char MI;
}nameType;

typedef enum{
 // Constants - Format in new CSV file
	BSCS, 	 // BS Computer Science 
	BSIT, 	 // BS Information Technology
	BSIS  	 // BS Information Systems
}program;

typedef struct{
	program prog;
	int year;
}progYearType;

typedef enum{
 // Constants - Format in new CSV file
	PASSED,  // PASSED
	FAILED   // FAILED
}status;

typedef struct{
	float grade; // In new CSV file - format to 1 decimal place only
	status gradeStatus;
}gradeType;

typedef struct{
	char ID[50];
	char name[200];
	char programAndYear[100];
	char grade[10];	
}oldListItem;

typedef struct{
	oldListItem students[SIZE];
	int count; // Indicates the number of active elements
	           // If empty, count is 0
}oldListType;

typedef struct{
	char ID[50];
	nameType name;
	progYearType progYear;
	gradeType grade;
}newListItem;

typedef struct{
	newListItem students[SIZE];
	int count; // Indicates the number of active elements
	           // if empty, count is 0
}newListType;

/* Function prototypes - Number 2 */
int checkNameFormat(char name[]);
char getMiddleInitial(char name[]);
nameType getNamesLNFirst(char name[]);
nameType getNamesFNFirst(char name[]);
nameType getNameInfo(char name[]);
nameType* getNameInfoFromArray(char *name[], int count);
void displayName(nameType name, int format);
void displayNamesFromArray(nameType names[], int format, int count);

/* Function prototypes - Number 3 */
int getValueFromString(char string[]);
program getProgram(char string[]);
progYearType getProgYear(char string[]);
void editProgYear(progYearType *item, program prog, int year);
void displayProgYear(progYearType item);
void displayProgYearFromArray(progYearType items[], int count);

/* Function prototypes - Number 4 */
int isNumeric(char grade[]);
float convertToFloat(char value[]);
float convertGrade(char grade[]); 
status getStatus(float grade);
gradeType getGradeType(char grade[]);
void displayGradeType(gradeType grade);
void displayGradeTypeFromArray(gradeType items[], int count);

/* Function prototypes - Number 5 */
void initOldList(oldListType *oldList);
void initNewList(newListType *newList);
void importOldList(char fileName[], oldListType *oldList);
void cleanData(oldListType oldList, newListType *newList);
void sortListByLastName(newListType *newList);
void displayGradeStatusCounts(newListType newList);
newListType getPassedStudentsFromList(newListType List);
void addStudentsToFile(char fileName[], newListType List);

#endif
