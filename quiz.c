#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int ans2, ans1, ans4, ans5;
    char name[50];
    int point1, point3, point2, point4, point5;
    char choice;
    printf("welcome to our new game\n");
    printf("whats your name?\n");
    fgets(name, 50, stdin);
    printf("hi %s welcome to todays game\n", name);

    printf("type y to continue\n type z to end\n");
    scanf("%c", &choice);

    switch (choice)
    {
     case 'y':
        printf("lets begin\n");
        
        printf("how any teeth does a mature human have?\n");
         scanf(" %d", &ans2);
        switch (ans2)
        {
          case 32:
           point1 = 5; 
           printf("correct you have scored %d in quiz one", point1);
           break;

           case 50 : 
           point2 = 0;
           printf("you have wronged you score is %d ", point2);
          break;

          default:
          printf("invalid char");
          
        }
       case 'z':
        printf("sad to see you leave\n");
        break;
       default:
        printf("invalid choice\n");
        break;
      }

    system("pause")  ;

    return 0;
}