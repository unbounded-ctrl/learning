#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
void variables_and_data_types();
void conditionals();
void loops();
void arrays();
void pointers();
void functions();
void structures();
void file_handling();

int main()
{
    printf("Learning C Programming - Tutorial\n\n");

    // Call different sections
    variables_and_data_types();
    conditionals();
    loops();
    arrays();
    pointers();
    functions();
    structures();
    file_handling();

    return 0;
}

// 1. Variables and Data Types
void variables_and_data_types()
{
    printf("\n1. Variables and Data Types:\n");

    int age = 25;          // Integer
    float height = 5.9;    // Float
    char grade = 'A';      // Character
    char name[] = "Alice"; // String

    printf("Name: %s, Age: %d, Height: %.1f, Grade: %c\n", name, age, height, grade);
}

// 2. Conditional Statements
void conditionals()
{
    printf("\n2. Conditional Statements:\n");

    int age = 20;

    if (age >= 18)
    {
        printf("You are an adult.\n");
    }
    else
    {
        printf("You are a minor.\n");
    }

    // Switch statement
    char grade = 'B';
    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good job!\n");
        break;
    default:
        printf("Keep trying!\n");
    }
}

// 3. Loops
void loops()
{
    printf("\n3. Loops:\n");

    printf("For loop:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("i = %d\n", i);
    }

    printf("While loop:\n");
    int count = 0;
    while (count < 3)
    {
        printf("count = %d\n", count);
        count++;
    }

    printf("Do-while loop:\n");
    int num = 0;
    do
    {
        printf("num = %d\n", num);
        num++;
    } while (num < 2);
}

// 4. Arrays
void arrays()
{
    printf("\n4. Arrays:\n");

    int numbers[] = {10, 20, 30, 40, 50};
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
}
// 5. Pointers
void pointers()
{
    printf("\n5. Pointers:\n");

    int x = 10;
    int *p = &x; // Pointer to x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of p (address of x): %p\n", p);
    printf("Value pointed to by p: %d\n", *p);

    *p = 20; // Modify x using the pointer
    printf("New value of x (modified via pointer): %d\n", x);
}

// 6. Functions
int add(int a, int b)
{
    return a + b;
}

void functions()
{
    printf("\n6. Functions:\n");

    int result = add(5, 3);
    printf("Sum of 5 and 3: %d\n", result);
}

// 7. Structures
struct Person
{
    char name[50];
    int age;
    float height;
};

void structures()
{
    printf("\n7. Structures:\n");

    struct Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 25;
    person1.height = 5.6;

    printf("Name: %s, Age: %d, Height: %.1f\n", person1.name, person1.age, person1.height);
}

// 8. File Handling
void file_handling()
{
    printf("\n8. File Handling:\n");

    // Write to a file
    FILE *file = fopen("example.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "Hello, this is a file example.\n");
    fclose(file);

    // Read from a file
    file = fopen("example.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }
    char line[100];
    while (fgets(line, sizeof(line), file))
    {
        printf("File content: %s", line);
    }
    fclose(file);
}