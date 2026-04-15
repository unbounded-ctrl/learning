#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare and initialize a 2D array
    int numbers[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    // Access elements using pointers
    printf("2D Array elements using pointers:\n");
    for (int i = 0; i < 3; i++) // Loop through rows
    {
        for (int j = 0; j < 4; j++) // Loop through columns
        {
            // Access elements using pointer arithmetic
            printf("numbers[%d][%d] = %d\n", i, j, *(*(numbers + i) + j));
        }
    }

    return 0;
}