#include<stdio.h>
void main()
{
    int i,j,A[10];
    printf("The Elements : \n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }

printf("Ten stored elements are:\n");

    for(j=0;j<10;j++)
    {
        printf("%d \t",A[j]);
    }
}
