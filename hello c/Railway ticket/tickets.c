#include<stdio.h>
#include<conio.h>
void ticketbooking(void);
void ticketcancellation(void);
main()
{
    int choice;
    clrscr();
    printf("press 1 for the ticket booking\n");
    scanf("%d",&choice);
    printf("press 2 for the ticket cancellation");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:

            ticketbooking( );
    case 2:

            ticketcancellation( );
        }
}

ticketbooking( )
{
    int n;
    printf("Enter the ticket number\n");
    scanf("%d",&n);
    printf("YOUR TICKET IS BOOKED");
}
ticketcancellation( )
{
    int n;
    printf("Enter the ticket number\n");
    scanf("%d",&n);
    printf("YOUR TICKET IS CANCELLED\n");
}
