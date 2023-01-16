#include<stdio.h>
void main()
{
int num, octal=0,r=0,p=1;

//converting decimal number into binary

printf("Enter decimal number \n");
scanf("%d", &num);

int n=num;

 while(num)
  {
   r=num%8;
   num=num/8 ;
   octal=octal+(r*p);
   p=p*10;
  }

printf("Octal of %d is: %d", n, octal);
}
