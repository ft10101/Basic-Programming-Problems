#include<stdio.h>
void tri_area(int, int);

int main(){
int base,height;

printf("Enter the base and height of triangle: \n");
scanf("%d%d",&base,&height);

 if(base>0 && height>0)
   { tri_area(base,height); }
 else
  printf("Invalid values!!");
}

void tri_area(int bas,int hei)
{

float area = bas * hei * 1/2;

printf("Area of rectangle is %f",area);
}
