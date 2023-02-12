#include<stdio.h>
#include<conio.h>
int ticketbooking(int);
main()
{
    int i,t,n;
    printf("------WELCOME TO TICKET BOOKING SECTION-------\n");
    printf("Enter the SI no of ticket\n");
    scanf("%d",&n);
    t=ticketbooking(n);
    printf("%d SI no of ticket is booked\n",n);
    printf("%d tickets are booked\n",t);

}
ticketbooking(n)
{
    int count,i;
    if(n<=10)
        for(i=0;i<10;i++)
        {
            scanf("%d",&count);
            return(count);
        }
        else
        {
            printf("Tickets are soldout!!!\n");
        }
}




