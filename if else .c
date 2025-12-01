#include<stdio.h>
int main()
{
	int voting;
	printf("Enter your voting score ");
	scanf("%d",&voting);
	if(voting==100);
	{
		printf("Your are winner");
	}
     else if(voting>=80 && voting<100)
	{
		printf("You are second winner");
	}
	else (voting>=60 && voting<=80)
	{
		printf("You are third winner");
	}
	return 0;
	
	
}
