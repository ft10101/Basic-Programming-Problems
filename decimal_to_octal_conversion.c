#include<stdio.h>
void main()
{

 //Conversion of decimal to octal

        int r=0,num,i=1,oc=0; //o => octal, r => remainder

            printf("Enter Number : ");
            scanf("%d",&num);

            printf("\nOctal Number of %d is:\t", num);

        while(num)
        {
            r = num%8;
            oc = oc + (r*i);
            num = num/8;
            i = i * 10;
        }
            printf("%d ",oc);
}


