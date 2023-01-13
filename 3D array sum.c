#include<stdio.h>
int main(){

int   a[3][3][3],  b[3][3][3],  c[3][3][3],  i,  j,  k;

printf("Enter elements of 1st 3D array: \n");

for(i=0;i<3;i++)
  {  for(j=0;j<3;j++)
       {  for(k=0;k<3;k++)
            {
              scanf("%d", &a[i][j][k]);
            }
       }
  }


printf("Enter elements of 2nd 3D array: \n");

for(i=0;i<3;i++)
  {   for(j=0;j<3;j++)
        {  for(k=0;k<3;k++)
             {
               scanf("%d",&b[i][j][k]);
             }
        }
  }




//-----------sum logic-----------

for(i=0;i<3;i++)
  {  for(j=0;j<3;j++)
       {  for(k=0;k<3;k++)
            {
              c[i][j][k]=a[i][j][k]+b[i][j][k];
            }
       }
  }


printf("Sum of 3D array is: \n", c[i][j][k]);

for(i=0;i<3;i++)
  {  for(j=0;j<3;j++)
       {  for(k=0;k<3;k++)
           {
             printf("%d \t", c[i][j][k]);
           }
         printf("\n");
       }
     printf("\n");
  }
printf("\n");


return 0;
}
