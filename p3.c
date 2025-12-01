	// Mathemetical calculation
	#include<stdio.h>
	int main()
	{
		int a,b,sum,sub,mul,div,ch;
	
	printf("\n1. Addtion two numbers then click 1\n ");
	printf("\n2. subtraction two numbers then click 2\n");
	printf("\n3. Multiplication two numbers then click 3\n ");
	printf("\n4. division two numbers then click 4\n ");
	
	printf("\n Enter two numbers : \n");
	scanf("%d %d",&a,&b);		
	
	
	printf("\n    !! conform check my intraction : \n");
	printf("\n1. Addtion click 1\n ");
	printf("\n2. subtraction click 2\n");
	printf("\n3. Multiplication click 3\n ");
	printf("\n4. division  click 4\n ");

	
	printf("\n   @ Enter your choice 'Hints- given case top side' : \n");
	scanf("%d",&ch);
	
	switch(ch)
	{
	case 1: sum=a+b;
	printf("%d",&sum);
	break;
	
     	case 2: sub=a-b;
	printf("%d",&sub);
	break;
	  
	  case 3: sub=a*b;
	
	printf("%d",&mul);
	break;
	   case 4: sub=a/b;
	printf("%d",&sum);
	break;
	
	}
	
	
	
	return 0;
	
	}
