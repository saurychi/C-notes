/**************************************
 **************************************
 *  THE MONOPOLY GAME 2.0 - NUMBER 1  *
 **************************************
 **************************************/

/* Include libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Data structure definition */
// None

/* Function prototypes */
int length(char ID[]);
void swap(char ID1[], char ID2[]);
int compare(char ID1[], char ID2[]);
void sortIDs(char *IDs[], int IDcount);
void displayIDs(char *IDs[], int IDcount);
int hasDuplicates(char *IDs[], int IDcount);
void removeDuplicates(char *IDs[], int *IDcount);

/* Main function */
int main()
{
	// Variable declarations
	char IDs[20][60] = {
		"623948763",
		"136478915381726",
		"136478915381726",
		"81725325",
		"8273487230587236872189469278582",
		"8172423563417127389263583495290",
		"182782348589034749768276349023572",
		"7836478235763613512663",
		"7836478237458623978183",
		"8716482364893452",
		"1786278626382",
		"8935934586045876405389678256275125641276362356394",
		"712656423623745",
		"142513245142535641515675",
		"78565378463453",
		"513453445321432325412324232151089993",
		"0",
		"72634238463459834",
		"1325625783849507234533986",
		"444444444444444444444444444444444444444444"};
	int numIDs = 20;

	// 1
	printf("%d", length(IDs[16]));

	// 2
	// printf("ID 0: %s\n", IDs[0]);
	// printf("ID 1: %s\n", IDs[1]);
	swap(IDs[0], IDs[1]);
	printf("ID 0: %s\n", IDs[0]);
	printf("ID 1: %s\n", IDs[1]);

	// 3
	int diff = compare(IDs[0], IDs[1]);
	// printf("%d", diff);

	//4




}

/** FUNCTION 1
 * Returns the number of characters found in the given string representing a
 * student ID. Example: "12345" returns 5.
 */
int length(char ID[])
{
	int counter = 0;
	for (int i = 0; ID[i] != '\0'; i++)
	{
		counter++;
	}

	return counter;
}

/** FUNCTION 2
 * Swaps the two string contents provided i.e. ID1 will contain ID2 and ID2 will
 * contain ID1 after the function completes its execution.
 */
void swap(char ID1[], char ID2[])
{
	char *temp = malloc(100 * sizeof(char));

	strcpy(temp, ID1);
	strcpy(ID1, ID2);
	strcpy(ID2, temp);

	free(temp);
	temp = NULL;
}

/** FUNCTION 3
 * Compares which of the given ID strings are greater based on the equivalent
 * integer value. Returns 1 if the second value is greater, -1 if the first value
 * is greater, and 0 if the two values are equal. This function must invoke length().
 */
int compare(char ID1[], char ID2[])
{
	return (length(ID1) == length(ID2))? 0 : (length(ID1) > length(ID2))? -1 : 1;
}

/** FUNCTION 4
 * Swaps the two string contents provided i.e. ID1 will contain ID2 and ID2
 * will contain ID1 after the function completes its execution. The number of
 * IDs contained in the array can be found in the IDcount variable.
 * This function must invoke compare() and swap().
 */
void sortIDs(char *IDs[], int IDcount)
{
	
}

/** FUNCTION 5
 * Display the list of IDs one by one. Each ID is printed in a single line.
 * When called after the sortIDs(), the IDs displayed should be in sorted order.
 * The number of IDs contained in the array can be found in the IDcount variable.
 */
void displayIDs(char *IDs[], int IDcount)
{
}

/** FUNCTION 6
 * Checks whether the list has duplicate entries.
 * Return 1 if there are duplicates and 0 if there are none.
 * The number of IDs contained in the array can be found in the IDcount variable.
 */
int hasDuplicates(char *IDs[], int IDcount)
{
}

/** FUNCTION 7
 * Removes all duplicate ID entries from the list and shifts the rest
 * of the elements to their lower indices. The IDcount shall be modified
 * accordingly based on the number of items removed from the array.
 */
void removeDuplicates(char *IDs[], int *IDcount)
{
}
