#include<stdio.h>
void main(){
int a[10], i,j,sub;

printf("Enter ten numbers: \n");
for(i=0;i<10;i++)
   {
     scanf("%d", &a[i]);
   }


printf("Elements after getting subtracted by 1:\n");
for(j=0;j<10;j++)
   {
      sub=a[j]-1;
      printf("%d\t", sub);
   }

}
