#include<stdio.h>
void main()
{
    int a,b,c;
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number:  ");
        scanf("%d",&b);
        printf("Enter third number: ");
        scanf("%d",&c);

    if(a==b && a==c)
    {
        printf("All Three Numbers Are Equal");
    }
    else if(a==b)
    {
        printf("First & Second numbers are Equal");
    }

    else if(b==c)
    {
        printf("Second & Third numbers are Equal");
    }
    else if(a==c)
    {
        printf("First & Third numbers are Equal");
    }


    else if(a>b && a>c)
    {
            printf("First is greater than 2nd and 3rd number");
    }
    else if(b>c)
    {
            printf("Second is greater than 1st and 3rd number");
    }
    else
    {
            printf("Third is greater than 1st and 2nd number");
    }

}
