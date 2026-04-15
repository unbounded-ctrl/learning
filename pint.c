#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void basic_pointer_example();
void pointer_arithmetic_example();
void pointers_and_arrays();
void pointers_and_2d_arrays();
void pointers_to_functions();

int main()
{
    printf("Pointers in C - Tutorial\n\n");

    // Call different examples
    basic_pointer_example();
    pointer_arithmetic_example();
    pointers_and_arrays();
    pointers_and_2d_arrays();
    pointers_to_functions();

    return 0;
}

// 1. Basic Pointer Example
void basic_pointer_example()
{
    printf("\n1. Basic Pointer Example:\n");

    int x = 10;
    int *p = &x; // Pointer to x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value of p (address of x): %p\n", p);
    printf("Value pointed to by p: %d\n", *p);

    *p = 20; // Modify x using the pointer
    printf("New value of x (modified via pointer): %d\n", x);
}

// 2. Pointer Arithmetic Example
void pointer_arithmetic_example()
{
    printf("\n2. Pointer Arithmetic Example:\n");

    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr; // Pointer to the first element of the array

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d (Address: %p)\n", i, *(p + i), (p + i));
    }
}

// 3. Pointers and Arrays
void pointers_and_arrays()
{
    printf("\n3. Pointers and Arrays:\n");

    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr; // Pointer to the first element of the array

    printf("Accessing array elements using pointers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d (using pointer: %d)\n", i, arr[i], *(p + i));
    }
}

// 4. Pointers and 2D Arrays
void pointers_and_2d_arrays()
{
    printf("\n4. Pointers and 2D Arrays:\n");

    int numbers[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},                           
        {90, 100, 110, 120}
    };

    printf("Accessing 2D array elements using pointers:\n");
    for (int i = 0; i < 3; i++) // Loop through rows
    {
        for (int j = 0; j < 4; j++) // Loop through columns
        {
            printf("numbers[%d][%d] = %d (using pointer: %d)\n", i, j, numbers[i][j], *(*(numbers + i) + j));
        }
    }
}

// 5. Pointers to Functions
void pointers_to_functions()
{
    printf("\n5. Pointers to Functions:\n");

    // Function pointer declaration
    int (*operation)(int, int);

    // Define two simple functions
    int add(int a, int b) { return a + b; }
    int multiply(int a, int b) { return a * b; }

    // Assign function pointers
    operation = add;
    printf("Addition: %d + %d = %d\n", 5, 3, operation(5, 3));

    operation = multiply;
    printf("Multiplication: %d * %d = %d\n", 5, 3, operation(5, 3));
}