#include<stdio.h>
void main()
{
    int a,b;
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else if(b>a)
    {
        printf("%d is greater than %d",b,a);
    }
    else if(a==b)
    {
        printf("%d & %d are Equal", a,b);
    }

}
