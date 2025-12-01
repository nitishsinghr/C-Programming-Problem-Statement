// Mathemetical calculation
#include<stdio.h>
int main()
{
	int a,b,sum,sub,mul,div,ch;
	
	printf("Enter Your two numbers \n");
scanf("%d %d",&a,&b);

printf("Enter your choice ");
scanf("%d",&ch);

switch(ch)
case1: sum=a+b;
printf("Addtion of Your numbers");
scanf("%d",&sum);
break;
case2: sub=a-b;
printf("subtraction of Your numbers");
scanf("%d",&sub);
break;
case3: sub=a*b;

printf("Mutiplucation of Your numbers");
scanf("%d",&mul);
break;
case4: sub=a/b;
printf("Divison of Your numbers");
scanf("%d",&div);

break;

return 0;

}
