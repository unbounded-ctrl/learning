#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char colour[50];
    char name[50];
    int age;
    
    printf("whats your colour \n");
    fgets(colour,50,stdin);

    printf("whats your name ");
    fgets(name,50,stdin);

    printf("whats your age \n");
    scanf("%d",&age);

    printf("hey am %s and am %d years old and my favorite colour is %s",name,age,colour);
    return 0;
} 