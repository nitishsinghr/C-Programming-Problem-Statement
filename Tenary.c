/*Ternary operator*/

#include<stdio.h>
int main()
{
	int a=60,b=50;
	printf("%d\n",(a>b)&&(a<b));
	printf("%d\n",(a>b)||(a<b));
	printf("%d\n",!(a>b));
	
	return 0;
}