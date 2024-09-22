#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
	int month;
	int day;
	int year;
} Date;

typedef struct{
	char fName[20];
	char MI;
	char lName[20];
} Name;

typedef struct{
	int grade;
	char subject[20];
} Grade;

typedef struct{
	int idNum;
	Name studentName;
	Date birthdate;
	Grade studentGrades[3];
	int year;
} Student;

typedef struct{
	Student* student;
	int len;
} Record;

typedef struct {
	Record* classRecord;
	Record* passed;
	Record* graduated;
} List;

void populateClassList(Record*, int);
void addStudentAny(Record*, int);
void addStudentFirst(Record*, int);
void addStudentLast(Record*, int);
void displayRecord(Record*, int);

int main(){

	List schoolList;
	int len;

	printf("Enter how many students in the school: ");
	scanf("%d", &len);

	populateClassList(schoolList.classRecord, len);

	return 0;
}

void populateClassList(Record* class, int len){
	class->student = malloc(len * sizeof(Student));
	Name name;
	Date date;

	for(int i = 0; i < len; i++){
		printf("Enter Student's First Name: ");
		scanf(" %s", name.fName);
		printf("Enter Student's Middle Initial: ");
		scanf(" %c", &(name.MI));
		printf("Enter Student's First Name: ");
		scanf(" %s", name.lName);
		class->student[i].studentName = name;

		printf("Enter Student's Birthdate (m/d/y): ");
		scanf("%d/%d/%d", &(date.month), &(date.day), &(date.year));
		class->student[i].birthdate = date;

		printf("\nStudents Grades");
		for(int j = 0; j < 3; j++){
			printf("Enter subject: ");
			scanf(" %s", class->student[i].studentGrades[j].subject);
			printf("Enter grade: ");
			scanf("%d", &(class->student[i].studentGrades[j].grade));
		}

		printf("Enter Student's ID Number: ");
		scanf("%d",&(class->student[i].idNum));
		printf("Enter Student's year: ");
		scanf("%d", &(class->student[i].year));


	}
}
