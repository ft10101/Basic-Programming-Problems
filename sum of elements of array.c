#include<stdio.h>

void main(){

int i, a[4],sum=0;

printf("Enter 4 elements of  array:\n");

for(i=0;i<4;i++)
 {
    scanf("%d",&a[i]);
 }

printf("Sum of array is:\n");

for(i=0;i<4;i++)
 {
  sum=sum+a[i];
 }
  printf("%d \t", sum);

}
