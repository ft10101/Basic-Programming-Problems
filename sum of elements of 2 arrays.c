#include<stdio.h>
void main()
{
int i, j, a[4], b[5], sum1=0, sum2=0, sum=0;

printf("Enter 4 numbers of  first array:\n");

for(i=0;i<4;i++)
  {
    scanf("%d",&a[i]);
  }

printf("Enter 5 numbers of second array:\n");

for(j=0;j<5;j++)
  {
    scanf("%d",&b[j]);
  }

for(i=0;i<4;i++)
  {
   sum1+=a[i];
  }

for(j=0;j<5;j++)
   {
     sum2+=b[j];
    }

sum=sum+(sum1+sum2);

printf("Sum of elements from both arrays is :\t%d \n", sum);
}
