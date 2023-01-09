#include <stdio.h>
void main()
{
      float rate, simpleinterest;
      int t, principal;
       for (t=1;t<=3;t++)
    {
   printf("Enter principal and  rate of a year:");
    scanf("%d%f",&principal,&rate);

     simpleinterest=(principal*rate*t)/100;

  printf("Simpleinterest is %f \n ", simpleinterest);
    }
 }
