#include<stdio.h>
int main()
{
	int i=0;
	ODD:
		sleep(1);
		printf("%d\n",i);
		i=i+1;
		if(i<=50)
		goto ODD;
		return 0;
		}
