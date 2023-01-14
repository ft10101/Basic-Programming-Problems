#include <stdio.h>
void main()
{
  int i, sum=0, n;

//---------------natural numbers start from 1--------------
  printf("Enter the number upto which you want to print sum of natural numbers:\n\n");
  scanf("%d", &n);

  printf("sum of %d natural numbers is: \t", n);

  for (i=1;i<=n; i++)
   sum= sum + i;

   printf ("%d \n", sum);
}
