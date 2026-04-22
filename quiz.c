#include<stdio.h>
#include<stdlib.h>

void Welcome();
void Operation(int,char,int);
void quiz();

int main ()
{
  void Welcome();
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
}
void Welcome()
{
  printf("Welcome to our learning platform");
  char ans;
  printf("to continue press y to stop press n");
  scanf("%c",ans);
  if(ans == 'y'){printf("Welcome to game");return 0;}
  else if (ans == 'n'){printf("Thank you for being part of us"); break; }
  else( ){printf("invalid choice")for(int i=0;i<3;i++){void Welcome(i);break;}} 
}
void quiz()
{
  int a;
  int b;
  int j = 0;
  char opr;
  while (j<4)
  {
     printf("enter first number");printf("operator"); printf ("second number");
     scanf("%i",a);scanf ("%c",opr); scanf("%   i",b );
     void Operation(a,b,opr,);
     j++;
  }
 
}
void Operation(int,char,int)
{
  switch(char)
  {
  case '+':
   return(int + int);
  
  case '-':
  return(int-int);

  case '/':
  return(int/int);

  case '*':
  return(int*int);
  
  default:
   printf("invalid syntax");
    return 0;
  }
}