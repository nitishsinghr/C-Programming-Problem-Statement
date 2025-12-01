//it else condition

#include<stdio.h>
int main ()
{
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Your are Eligible for voting\n :");
		printf("Welcome");
	}
	else
	{
		printf("You are not Eligible for voting\n:");
		printf("Sorry!");
	}
	printf("Exit");
	return 0;
}