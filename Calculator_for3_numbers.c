#include<stdio.h>
void main()
            {
                int a,b,c,sum,mul,sub,div,operation;
                printf("Enter your operation number : \n");
                printf("1:Addition \n");
                printf("2:Multiplication \n");
                printf("3:Subtraction \n");
                printf("4:Division \n");
                scanf("%d",&operation);

        switch (operation)
            {
        case 1:     //Addition
            {
                printf("Enter first number : " );
                scanf("%d",&a);
                printf("Enter second number : ");
                scanf("%d",&b);
                printf("Enter third number : ");
                scanf("%d",&c);
                sum = (a+b)+c;
                printf("Addition of %d , %d & %d is %d",a,b,c,sum);
            }
            break;

        case 2:         //Multiplication
            {
                printf("Enter first number :  " );
                scanf("%d",&a);
                printf("Enter second number : ");
                scanf("%d",&b);
                printf("Enter third number : ");
                scanf("%d",&c);
                mul = (a*b)*c;
                printf("Multiplication of %d , %d & %d is %d",mul);
            }
            break;

        case 3:         //Subtraction
            {
                printf("Enter first number : " );
                scanf("%d",&a);
                printf("Enter second number : ");
                scanf("%d",&b);
                printf("Enter third number : ");
                scanf("%d",&c);
                sub = (a-b)-c;
                printf("Subtraction of %d , %d & %d is %d",sub);
            }
            break;

        case 4:             //Division
            {
                printf("Enter first number : " );
                scanf("%d",&a);
                printf("Enter second number : ");
                scanf("%d",&b);
                printf("Enter third number : ");
                scanf("%d",&c);
                div = (a/b)/c;
                printf("Division of %d , %d & %d is %d",div);

            }
            break;

            default:
            {
                printf("enter valid operation number");

            }

            }
                getchar();
            }
