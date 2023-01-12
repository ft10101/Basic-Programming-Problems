#include<stdio.h>
int func(void);

void main (){
int sum;
sum=func();
printf("%d \n",sum);
}


int func(void){
int i, num ,numb ,s=0;

printf("enter the number upto which you want sum of all numbers:\n");
scanf("%d", &numb);

for(i=0; i<numb; i++)
{
  num = numb + (numb - 1);
}

return num;
}
