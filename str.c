#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 5000
int main(void)
{
    struct student
    {
        char name[50];
        int age;
        char grade;
        char hobby[50];
    };

    struct student student1;
    {
        strcpy(student1.name, "julius munyao");
        student1.age = 17;
        student1.grade = 'B';
        strcpy(student1.hobby,"swimming"); 
    };

    printf("%s",student1.name);
    return 0;
}