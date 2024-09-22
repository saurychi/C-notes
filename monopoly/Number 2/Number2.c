/**************************************
 **************************************
 *  THE MONOPOLY GAME 2.0 - NUMBER 2  *
 **************************************
 **************************************/

/* Include libraries */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Data structure definition */
typedef struct{
	char firstName[50];
	char lastName[50];
	char MI;
}nameType;

/* Function prototypes */
int checkNameFormat(char name[]);
char getMiddleInitial(char name[]);
nameType getNamesLNFirst(char name[]);
nameType getNamesFNFirst(char name[]);
nameType getNameInfo(char name[]);
nameType* getNameInfoFromArray(char *name[], int count);
void displayName(nameType name, int format);
void displayNamesFromArray(nameType names[], int format, int count);


/* Main function */
int main(){
	// Variable declarations
	char names[35][80] = {
		"Sabrinah, What Happened A.",
		"James B. Clarit",
		"Roska, Natalie C.",
		"Gabriel D. Dela Cruz",
		"Junio, Jacques",
		"Lyan Jover",
		"Tangcay, Maria E.",
		"Eloisa F. Garcia",
		"Barita, Shane G.",
		"Galve, Hannah Angelica H.",
		"Jerson Paul I. Leones",
		"Ondiano, Franz J.",
		"Janciel K. Pedrano",
		"Kyne Patrick Sia",
		"Torrejas, John Anthony",
		"Erwin L. Nazareno",
		"Perez, William Caleb M.",
		"Christopher N. Drape",
		"Garot, Jan Michael O.",
		"Nhemuel P. Robles",
		"Tezon, Maurice Q.",
		"Roque Gelacio",
		"Christine R. Ihalad",
		"Tagpuno, Noel S.",
		"Dela Paz, Khentintin T.",
		"Ponze, Zyver Jade U.",
		"Kent Joseph V. Riconalla",
		"Christian Carl W. Regacho",
		"Ivan Ric X. Woogue",
		"Marc Nathaniel Valeros",
		"Robert Michael Lim",
		"Moo, Noo Poo Lee",
		"Moo, Noo Poo L.",
		"Moo Noo P. Lee",
		"Moo Noo Poo Lee"
	};
	int numNames = 35;
	// Create your own function calls to test your implementations :)
}


/** FUNCTION 8
 * Checks if the given full name is written in last name first format or 
 * first name first format. Return 1 if the name is written starting with 
 * the last name, and 2 if the name is written starting with the first name.
 */
int checkNameFormat(char name[]){
	
}

/** FUNCTION 9
 * Retrieves the middle initial of a given full name. 
 * If there is no middle initial, return a null character.
 */
char getMiddleInitial(char name[]){
	
}

/** FUNCTION 10
 * Extracts the first name, middle initial, and last name of a given full name 
 * written in last name first format and places them accordingly in a nameType 
 * structure variable to be returned to the calling function. 
 * This function must invoke getMiddleInitial().
 * Note: Do consider that first names and last names can have more than one word!
 * Example: 
 * Full name: Dela Paz, Heinz Lex Florenz P.
 * Extracted first name: "Heinz Lex Florenz"
 * Extracted last name: "Dela Paz"
 * Extracted middle initial: 'P'
 */
nameType getNamesLNFirst(char name[]){
	
}

/** FUNCTION 11
 * Extracts the first name, middle initial, and last name of a given full name 
 * written in first name first format and places them accordingly in a nameType 
 * structure variable to be returned to the calling function. This function must 
 * invoke getMiddleInitial().
 * Note: If there is no middle initial, place the last word as the last name and the rest of the words as the first name.
 * Example:
 * Full name: Heinz Lex Florenz Dela Paz
 * Extracted first name: "Paz"
 * Extracted last name: "Heinz Lex Florenz Dela"
 * Extracted middle initial: (none)
 */
nameType getNamesFNFirst(char name[]){
	
}

/** FUNCTION 12
 * Determines the format of a given name using checkNameFormat() and calls 
 * the appropriate getName___() function to extract the names. 
 * Return the nameType structure variable obtained from either function to 
 * the calling function.
 */
nameType getNameInfo(char name[]){
	
}

/** FUNCTION 13
 * Creates an returns an array (from the heap memory) of extracted name 
 * information from a given array of full names with mixed name formats. 
 * The number of full names is given in the count parameter. This function 
 * must invoke getNameInfo().
 */
nameType* getNameInfoFromArray(char *name[], int count){
	
}

/** FUNCTION 14
 * Display on screen the full name from the given information in the name 
 * variable using the given format (1 - Last name first, 2 - First name first).
 * Example:
 * Last name first: Dayata, Wayne Matthew A.
 * First name first: Wayne Matthew A. Dayata
 * NOTE: If there is no MI, do not print an extra period.
 */
void displayName(nameType name, int format){
	
}

/** FUNCTION 15
 * Display on screen a list of full names from the given array of name 
 * information using the given format. This function must invoke displayName(). 
 * Each full name is printed in a single line. 
 * The number of names in the array is given by count.
 */
void displayNamesFromArray (nameType names[], int format, int count){
	
}


