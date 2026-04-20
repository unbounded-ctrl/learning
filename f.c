#include <stdio.h>
#include <stdlib.h>

void pointer_c();
void lists_e();
void datatypes_();
void arrays_();

int main(void)
{    
     pointer_c();
     lists_e();
     datatypes_();
     arrays_();
    return 0;
}
void pointer_c()
{
    int x = 78;
    int *p = &x;
    printf("%p", p);  // address
    printf("%p\n", &x); // addres
    printf("%d", x);  // value
    printf("%d\n", *p); // value
    *p = 20;
    printf("%d\n", x); // variable change
}
void lists_e()
{
    char *lst[] = {"mary", "fred", "junior", "mwendwa", "alex"};
     
    for (int i = 0; i < 5; i++)
    {
    
        printf("%s\n", *(lst + i));
    }
}
void datatypes_()
{
    int x = 56;
    char grade = 'g';
    char greet[] = "hello";
    float t = 7.54;
    printf("%d %c %s %f\n", x, grade, greet, t);
}
void arrays_()
{
    int numbers [3][4] =
        {
            {4, 5, 7, 88},
            {55, 65, 89, 70},
            {57, 76, 86, 96}};
        
     for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\n", *(numbers[i] + j));
        }
    }
}