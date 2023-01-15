#include<stdio.h>
int main()
{
        int sum=0,n,r;

       printf("Enter the number: \n");
        scanf("%d",&n);

        //using while loop
        while(n>0)
        {
            r=n%10;
            n=n/10;
            sum=sum+r;
        }
        printf("%d is sum of digits you entered",sum);

return 0;
}
