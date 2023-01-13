#include <stdio.h>
void main()
{
int a[5],i,j, temp;

printf("Enter 5 numbers of integer array \n");

for(i=0;i<5;i++)
   scanf("%d",&a[i]);

//---------------sorting logic for selection sort technique ascending order-----------------
printf("Ascending order of elements is:\n");

for(i=0;i<5;i++)
{
 for(j=0;j<5;j++)
   {
     if (a[i]<a[j])
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       }
   }
}


for(i=0;i<5;i++)
    printf("%d\t",a[i]);
}
