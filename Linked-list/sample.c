#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Student structure
typedef struct
{
    char name[50];
    int age;
    float totalMarks;
} Student;

// Define the Node structure for the linked list
typedef struct Node
{
    Student data;
    struct Node *next;
} Node;

// Define the LinkedList structure
typedef struct
{
    Node *head;
} LinkedList;

// Function prototypes
void initializeLinkedList(LinkedList *list);
void insertAtBeginning(LinkedList *list, Student student);
void insertAtEnd(LinkedList *list, Student student);
void insertAtPosition(LinkedList *list, Student student, int position);
void deleteFromBeginning(LinkedList *list);
void deleteFromEnd(LinkedList *list);
void deleteByName(LinkedList *list, const char *name);
int searchByName(LinkedList *list, const char *name);
void traverse(LinkedList *list);

int main()
{
    // Create an empty linked list
    LinkedList myList;
    initializeLinkedList(&myList);

    // Test insertion operations
    Student student1 = {"John", 20, 85.5};
    Student student2 = {"Alice", 22, 90.0};
    Student student3 = {"Bob", 21, 78.3};

    insertAtBeginning(&myList, student1);
    insertAtEnd(&myList, student2);
    insertAtPosition(&myList, student3, 1); // Insert Bob at position 1

    // Test traversal
    traverse(&myList); // Output: John 20 85.5 -> Bob 21 78.3 -> Alice 22 90.0

    // Test deletion operations
    deleteFromBeginning(&myList);
    deleteFromEnd(&myList);
    deleteByName(&myList, "Bob");

    // Test search operation
    int position = searchByName(&myList, "John");
    printf("Position of John: %d\n", position); // Output: 0

    // Test traversal after deletions
    traverse(&myList); // Output: Alice 22 90.0

    for (Node *curr = myList.head; curr != NULL; curr = curr->next)
    {
        free(curr);
    }

    return 0;
}

void initializeLinkedList(LinkedList *list)
{
    int len;
    printf("Enter number of students: ");
    scanf("%d", &len);

    Node *curr;
    if (len < 1)
    {
        list->head = NULL;
    }
    else
    {
        list->head = malloc(sizeof(Node));
        curr = list->head;
    }
    for (int i = 0; i < len; i++)
    {

        printf("Enter name of student: ");
        scanf(" %[^\n]", curr->data.name);
        printf("Enter age: ");
        scanf("%d", &(curr->data.age));
        printf("Enter total marks: ");
        scanf("%f", &(curr->data.totalMarks));
        if (i == len - 1)
        {
            curr->next = NULL;
        }
        else
        {
            curr->next = malloc(sizeof(Node));
            curr = curr->next;
        }
    }
}

void insertAtBeginning(LinkedList *list, Student student)
{
    Node *next_root = list->head;
    list->head = malloc(sizeof(Node));
    Node *curr = list->head;
    curr->data = student;
    list->head->next = next_root;
}

void insertAtEnd(LinkedList *list, Student student)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->data = student;
    new_node->next = NULL;
    Node *curr;
    for (curr = list->head; curr->next != NULL; curr = curr->next)
        ;
    curr->next = new_node;
}

void insertAtPosition(LinkedList *list, Student student, int position)
{
    Node *new_node = malloc(sizeof(Node));
    new_node->data = student;
    Node *temp;

    Node *curr = list->head;
    if (position == 1)
    {
        temp = list->head;
        list->head = new_node;
        list->head->next = temp;
    }
    else
    {
        for (int i = 2; i < position; i++)
        {
            curr = curr->next;
            if (curr == NULL)
            {
                printf("\n*Number exceeds amount of nodes*\n\n");
                return;
            }
        }
        temp = curr->next;
        curr->next = new_node;
        curr->next->next = temp;
    }
}

void deleteFromBeginning(LinkedList *list)
{
    Node *temp;
    temp = list->head;
    list->head = list->head->next;
    free(temp);
}

void deleteFromEnd(LinkedList *list)
{
    Node *curr;
    for (curr = list->head; curr->next->next != NULL; curr = curr->next)
        ;
    free(curr->next);
    curr->next = NULL;
}

void deleteByName(LinkedList *list, const char *name)
{
    Node *curr = list->head;
    if (strcmp(curr->data.name, name) == 0)
    {
        Node *temp = curr->next;
        free(curr);
        list->head = temp;
    }
    else
    {
        for (curr = list->head; curr->next->data.name == name; curr = curr->next)
            ;
        Node *temp = curr->next->next;
        free(curr->next);
        curr->next = temp;
    }
}

int searchByName(LinkedList *list, const char *name)
{
    int pos = 0;
    for (Node *curr = list->head; curr != NULL; curr = curr->next)
    {
        pos++;
    }
    return pos;
}

void traverse(LinkedList *list)
{
    printf("Student List\n");
    for (Node *curr = list->head; curr != NULL; curr = curr->next)
    {
        printf("\nStudent name: %s\n", curr->data.name);
        printf("Student age: %d\n", curr->data.age);
        printf("Total Marks: %.2f\n", curr->data.totalMarks);
    }
}
