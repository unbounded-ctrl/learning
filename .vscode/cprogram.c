#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n;
    while (true)
    {
        n = printf("whats n?");
        scanf("%d", &n);
        if (n >= 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; n++)
    {
        printf("meow\n");
    }
    return 0;
}