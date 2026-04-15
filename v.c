#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double num1;
    double num2;
    char opr;
     
    printf("no.1\n");
    scanf ("%lf",&num1);

 
    printf("no.2\n");
    scanf("%lf",&num2);

    printf("opr\n");
    scanf(" %c",&opr);


    if (opr=='+')
    {
     printf("%f", num1 + num2);
    }
    else if (opr=='-')
    {
      printf("%f",num1- num2) ; 
    }
     else if (opr=='*')
    {
      printf("%f",num1 * num2)  ;
    }
     else if (opr=='/')
    {
      printf("%f",num1 / num2) ; 
    }
    else{
        printf("invalid opr");
    }
    return 0;


}