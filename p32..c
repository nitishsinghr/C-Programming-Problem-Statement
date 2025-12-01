#include<stdio.h>
int main()
{
	int n,t,sum;
	
	printf("Enter your Number:");
	scanf("%d",&n);
	while(n<0)
	{
		t=n%10;
		sum=sum+t;
		n=n/10;
				
	}
	printf("Sum is= %d",sum);
	
	return 0;
}
