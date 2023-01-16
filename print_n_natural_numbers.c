#include<stdio.h>
void main()
{
    int i,num;

     printf("Enter Number upto which you want to print natural numbers: \n");
        scanf("%d",&num);

    printf("%d natural numbers are:\n",num);

      for(i=1;i<=num;i++)
        {
        printf("%d\t",i);
        }
}
