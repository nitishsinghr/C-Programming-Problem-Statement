
//Addition of two numbers

#include<stdio.h>
#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("Enter your Number: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	
	printf("Addition of A and B: =%d",*(&sum));
return 0;
}
