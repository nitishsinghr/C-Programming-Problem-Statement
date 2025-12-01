#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter your value: ");
	scanf("%d",&n);
	//n number of low
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("* ");
		
	}
	printf("\n");
	
}
return 0;
}
