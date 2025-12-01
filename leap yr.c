// check whether a year is or not

#include<stdio.h>
int main()
{
	int yr;
	printf("\nEnter a year :" );
	scanf("%d",&yr);
	if(yr%100==0)
	{
		if(yr%400==0)
		printf("Leap year\n");
		else 
		printf("Not a Leap year");
		
	}
	
	return 0;
 } 
