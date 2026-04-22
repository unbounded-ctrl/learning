#include<stdio.h>
#include<stdlib.h>

void Welcome();
int Operation(int a,char op,int b);
void quiz();

int main ()
{
   Welcome();
 printf("Welcome to our game of mathematics ");
 printf("you will start by learning simple math operations");
 int num1=2;
 int num2=4;
 printf( "%d + %d =%d",num1,num2,num1+num2 );
 printf( "%d - %d =%d",num2,num1,num2-num1 );
 printf( "%d * %d =%d",num1,num2,num1*num2 );
 printf( "%d / %d =%d",num2,num1,num2/num1 );
 printf("NB. ANY NO DIVIDED BY 0 IS EQUAL 0");
 printf("Now try your own ");
  quiz();
}
void Welcome()
{
  printf("Welcome to our learning platform\n");
  char ans;
  printf("to continue press y to stop press n\n");
  scanf("%c",&ans);
  if(ans == 'y'){printf("Welcome to game\n");}
  else if (ans == 'n'){printf("Thank you for being part of us"); exit (0); }
  else{printf("invalid choice");for(int i=0;i<3;i++){Welcome();i++;exit (0);}} 
}
void quiz()
{
  int a;
  int b;
  int j = 0;
  char opr;
  while (j<4)
  {
     printf("enter first number\n");scanf("%i",&a);
     printf("operator\n");scanf (" %c",&opr);
     printf ("second number\n");scanf("%i",&b );
     int result=Operation(a,b,opr);
     printf("%d",result);
     j++;
  }
 
}
int Operation(int a,char op,int b)
{
  switch(op)
  {
  case '+':
   return(a+b);
  
  case '-':
  return(a-b);

  case '/':
  return(a/b);

  case '*':
  return(a*b);
  
  default:
   printf("invalid syntax");
    return 0;
  }
}