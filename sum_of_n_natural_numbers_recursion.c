
#include<stdio.h>
int sum(int n)
{
	if(n==1)return 1;
	return n+sum(n-1);
}

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Sum of first %d natural numbers is: %d", num,sum(num));
	return 0;
}
