#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    double num1;
    double num2;
    char opr;

    printf("num\n");
    scanf("%lf %lf", &num1 ,&num2);

    printf("opr\n");
    scanf(" %c", &opr);

    

    switch (opr)
    {
    case  '+'  :     
        printf("%lf", num1 + num2);
        break;

    case '-' :
        printf("%lf", num1 - num2);
        break;

    case '*' :
        printf("%lf", num1 * num2);
        break;

    case '/' :
        printf("%lf", num1 / num2);
        break;
    default:
        printf("invalid opr");
        break;
    }
    return 0;
}