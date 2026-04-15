#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare and initialize a 2D array
    char numbers[3][4] = {
        {'j','r','r','r'},
        {'h', 'k','h','h'},
        {'j','h','h','h'}
    };

    // Access elements using nested loops
    printf("2D Array elements:\n");
    for (int i = 0; i < 3; i++) // Loop through rows
    {
        for (int j = 0; j < 4; j++) // Loop through columns
        {
            printf(" %c "  ,*(*( numbers+i)+j));
        }
        printf("\n");
    }

    return 0;
}