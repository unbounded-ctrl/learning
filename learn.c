#include <stdio.h>
#include <stdlib.h>

int cube(double n);

int main(void)
{ 
    double num;
    int result;
    printf("whats your number?\n");
    scanf("%lf",&num);
    result=cube(num);
    printf("the cube of %.2f is %d", num ,result);
    return 0;
}


int cube(double n)
{
    
return n*n*n;

}
