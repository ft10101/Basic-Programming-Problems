#include<stdio.h>
int main()
{
        int i,rev=0,n,r;                  //Enetered Numbers pallindrome or not
        printf("Enter number to check pallindrome or not: \n");
        scanf("%d",&n);
        //using while loop
        i=n;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            rev=rev*10+r;
        }
        if(i==rev)
        {
            printf("Entered Number is Pallindrome");
        }
        else
            printf("Entered Number is not pallindrome ");

return 0;
}
