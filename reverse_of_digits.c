#include<stdio.h>
void main()
{
    int num,r,rev=0;

        printf("Enter Number : \n");
        scanf("%d",&num);

        printf("Reverse of digits (%d) ",num);

    //reverse of digits logic
    while(num>0)
      {
        r=num%10;
        num=num/10;
        rev=rev*10+r;
      }

  printf("is %d",rev);

}
