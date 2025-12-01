#include<stdio.h>
int main()
{
	int number, digit;
	printf("Enter Your Number: ");
	scanf("%d", &number);
	while(number<0)
	{
		digit++;
		number/=10;
		
	}
	printf("Count Your Number: %d",digit);
	return 0;
	}
