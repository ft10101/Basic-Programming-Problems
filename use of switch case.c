#include<stdio.h>
void main()
{
    int x,y,z,sum,mul;
    char a,b;

      printf("Enter your choice :\na: Addition of 3 numbers \nb: Multiplication of 3 numbers\n");
      scanf("%c", &a);

  switch(a){
     case 'a':
           {
            printf("Enter 3 numbers:\n");
            scanf("%d%d%d",&x,&y,&z);
            sum=x+y+z;
            printf("Addition of 3 numbers is %d",sum);
            break;
            }

     case 'b':
            {
            printf("Enter 3 numbers:\n");
            scanf("%d%d%d",&x,&y,&z);
            mul=x*y*z;
            printf ("Multiplication of 3 numbers is %d", mul);
            break;
            }

    default: printf("\n\nYou enterd invalid character: \nTry again using 'a or b'");
      }

}
