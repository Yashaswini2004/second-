#include<stdio.h>
void academics();
void scholarship();
void fees_structure();
void library();

void main()
{
    int choice;
    printf("Welcome to CIT official website\n");
    printf("HI......... USER\n");
    printf("Enter 1 for academic information\n");
    printf("Enter 2 for scholarship information\n");
    printf("Enter 3 for fees structure\n");
    printf("enter 4 for library information");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: academics();
        case 2:  scholarship();
        case 3: fees_structure();
        case 4:  library();
    }
   academics()
   {
       int USN[10],i;
       char c;
       printf("Enter your USN number\n");
       for(i=0;i<11;i++)
        scanf("%d",&USN);
        printf("Enter your branch name first letter\n");
        scanf("%c",&c);
        switch(c)
        {
            case 'c': printf("You have 7 subjects\n");
            case 'i': printf("You have 5 subject\n");
            case 'e': printf("You have 6 subject\n");
            case 'a':printf("You have 7 subjects\n");
        }



   }

}


