#include<stdio.h>
int main()
{
    int n,stair,i,j;
    stair=n-1;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
    for(j=0;j<n;j++)
    {
        if(j>=stair)
        {
            printf("#");
        }
        else
        {
            printf(" ");
        }
    }
    stair--;
    printf("\n");
    }
}

