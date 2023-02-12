#include<stdio.h>
int factorial(int);
int main()
{
    int choice1,choice2;
    printf("press 1 if you got first class\n");
    printf("press 2 if you got second class\n");
    printf("press 3 if you got third class\n");
    scanf("%d",&choice1);
    printf("press 4 if you failed in greater than 3 sub\n");
    printf("press 5 if you failed in greater than 2 sub\n");
    printf("press 6 if you failed in greater than 1 sub\n");
    scanf("%d",&choice2);
    switch(choice1)
    {
    case 1:
        if(choice2==4)
            printf("grace is of 0 marks");
            else
                printf("grace is of 5 marks");
                break;
    case 2:
        if(choice2==5)
        printf("grace is of 0 marks");
        else
            printf("grace is of 4 marks");
        break;
        case 3:
        if(choice2==6)
            printf("grace is of 0 marks");
        else
            printf("grace is of 5 marks");
        break;
    }



    }









