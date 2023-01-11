#include<stdio.h>
void sum();
void mul();
void sub();
void div();

int a, b;

void main(){
   printf("Enter two numbers:\n");
   scanf("%d%d",&a,&b);
    sum();
    mul();
    sub();
    div();
}
//Addition
void sum()
{
    printf("Addition :\n\n");
    int sum;
    sum=a+b;
    printf("%d is the sum of two numbers\n\n",sum);
}
//Multiplication
void mul()
{
    printf("Multiplication :\n\n");
    int mul;
    mul=a*b;
    printf("%d is the multiplication of two numbers\n\n",mul);
}
//Subtraction
void sub()
{
    printf("Subtraction :\n\n");
    int sub;
    sub=a-b;
    printf("%d is the Subtraction of two numbers\n\n",sub);
}
//Division
void div()
{
    printf("Division :\n\n");
    int div;
    div=a/b;
    printf("%d is the Division of two numbers",div);
}
