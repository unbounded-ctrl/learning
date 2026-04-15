#include <stdio.h>

int main(void)
{
    int n = 5; // Number of rows for the pyramid
    for (int row = 0; row < n; row++)
    {
        // Print spaces for alignment
        for (int space = 0; space < n - row - 1; space++)
        {
            printf("-");
        }

        // Print the pyramid pattern
        for (int col = 0; col < (2 * row + 1); col++)
        {
            printf("$");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}