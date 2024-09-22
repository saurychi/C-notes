/**
 * INSTRUCTIONS:
 * THIS IS A FILE COMPLEMENTING THE "Masterlist.h" FILE.
 *
 * THIS FILE CONTAINS THE FOLLOWING:
 * - Implementations for the functions defined in the "Masterlist.h" file
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Masterlist.h"

/* BEFORE YOU BEGIN: Add your implementations from tasks 2-4 here */


/** FUNCTION 29
 * Initializes the old list by setting the count field to 0.
 */
void initOldList(oldListType *oldList){
	
}

/** FUNCTION 30
 * Initializes the new list by setting the count field to 0.
 */
void initNewList(newListType *newList){
	
}

/** FUNCTION 31
 * Opens a CSV file with the given file name (file format included) 
 * then populates the information into an oldListType list in memory. 
 * After populating the list, the file shall be closed and the resulting 
 * list shall be returned to the calling function.
 *
 * IMPORTANT!!!
 *  - In this file, the delimiter is semicolon (;) because the comma 
 *    is being used in the full names.
 * To ensure this opens correctly in Excel Workbooks, visit this link:
 * https://www.ablebits.com/office-addins-blog/change-excel-csv-delimiter/
 * 
 */
void importOldList(char fileName[], oldListType *oldList){
	
}

/** FUNCTION 32
 * Invokes all the data cleaning functions (name, program and year, and grade)
 * by passing in information from the old list and storing the results into
 * the given new list.
 */
void cleanData(oldListType oldList, newListType *newList){
	
}

/** FUNCTION 33
 * Sorts the given new list by increasing alphabetical order of last name. I
 * If the last names are the same, then compare using the first names.
 */
void sortListByLastName(newListType *newList){
	
}

/** FUNCTION 34
 * Display the count of students that passed and failed the Programming 
 * 1 subject, as well as the percentage of students passed (based on the
 * total number of students, using the format below.
 * Display format:
 * Passed students: 50 (50%)
 * Failed students: 50 (50%)
 */
void displayGradeStatusCounts(newListType newList){
	
}

/** FUNCTION 35
 * Identifies the students that PASSED programming 1 based on the grade 
 * status and copies them into a new list to be returned to the calling 
 * function.
 */
newListType getPassedStudentsFromList(newListType List){
	
}

/** FUNCTION 36
 * Creates a new CSV file with the indicated file name (file format included) 
 * and populates all the information from the newList (cleaned data) 
 * into the file. 
 * 
 * Columns (8):
 * - ID, Last Name, First Name, MI, Program, Year Level, Grade, Status 
 *
 * Format specifications:
 * - Program: Refer to the comments in the data structure definition.
 * - Grade: Output 1 decimal place only.
 * - Status: Refer to the comments in the data structure definition.
 *
 * Note: This function can be called by passing either the complete list of
 *       students or the list of students that passed programming 1, or the
 *       list created in getPassedStudentsFromList().
 * 
 * Note: You may use comma (,) as delimiters here, unlike in importOldList(). 
 */
void addStudentsToFile(char fileName[], newListType List){
	
}
