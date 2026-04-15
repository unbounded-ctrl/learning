#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 50000 // Define the maximum number of students

struct student
{
    char name[50];
    int age;
    char grade;
    char hobby[50];
};

int main(void)
{
    struct student students[MAX_STUDENTS]; // Array of 5000 students
    int n; // Number of students to input

    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    if (n > MAX_STUDENTS)
    {
        printf("Error: Cannot exceed %d students.\n", MAX_STUDENTS);
        return 1;
    }

    // Input student details
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Grade: ");
        scanf(" %c", &students[i].grade);
        printf("Hobby: ");
        scanf(" %[^\n]", students[i].hobby);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Grade: %c\n", students[i].grade);
        printf("Hobby: %s\n", students[i].hobby);
    }

    return 0;
}