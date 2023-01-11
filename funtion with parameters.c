#include<stdio.h>
void sum(int,int);
void mul(int,int);
void sub(int,int);
void div(int,int);

void main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum(a,b); //function call
    mul(a,b);
    sub(a,b);
    div(a,b);
}

void sum(int a,int b)
{
    printf("Addition : ");
    int sum;
    sum=a+b;
    printf("%d is the sum of two numbers\n\n",sum);
}

void mul(int a,int b)
{
    printf("Multiplication : ");
    int mul;
    mul=a*b;
    printf("%d is the multiplication of two numbers\n\n",mul);
}

void sub(int a, int b)
{
    printf("Subtraction : ");
    int sub;
    sub=a-b;
    printf("%d is the Subtraction of two numbers\n\n",sub);
}

void div(int a,int b)
{
    printf("Division : ");
    int div;
    div=a/b;
    printf("%d is the Division of two numbers",div);
}
