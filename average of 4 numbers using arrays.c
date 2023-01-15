#include<stdio.h>
void main()
{
int avg=0,sum=0,x=0,num[4];

printf("Enter 4 numbers to get their average:\n");

  for(x=0;x<4;x++)
   {
    printf("enter the number %d \n",(x+1));
    scanf("%d",&num[x]);
   }

  for(x=0;x<4;x++)
   {
   sum=sum+num[x];
   }

  avg=sum/4;

  printf("Average of numbers is: %d",avg);

}
