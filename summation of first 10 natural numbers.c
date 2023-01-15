#include <stdio.h>
void main()
{
 int i, sum=0;

printf("Ten natural numbers are: \n");
for(int j=1;j<=10;j++)
printf("%d\t",j);

printf("\n");

  for (i=1;i<=10;i++)
   {
   sum =sum+i;
   }
  printf ("Summation of first 10 natural numbers is: %d",sum);

}
