	
	//mathematical calculator
	
	#include<stdio.h>
	int main()
	{
	int a,b,c,ch, p,t,num;
	float si,r,km,m,cm,ft,inch;
	
		printf("\n    !! conform check my intraction : !! \n");
		
		printf("\n1. Addtion two numbers then click 1\n ");
	printf("\n2. subtraction two numbers then click 2\n");
	printf("\n3. Multiplication two numbers then click 3\n ");
	printf("\n4. division two numbers then click 4\n ");
	printf("\n5. Simple Intrest  click 4\n ");
	printf("\n5. find even or odd number click 5\n ");
	
	printf("\n Enter Your Case : \n");
	

	
	printf("\n   @ Enter your choice 'Hints- given case top side' : \n");
	scanf("%d",&ch);

	
	switch(ch){
		
		case 1: c=a+b;    
		printf("\n Enter frist numbers: ");
	scanf("%d",&a);
	printf(" Enter second numbers : ");
	scanf("%d",&b);	

		
		printf("\nYour final Anwer is :");
		
			printf("%d",c);
			printf("\nExit");
	
	 	break;

		case 2:c=a-b;
		printf("\n Enter frist numbers: ");
	scanf("%d",&a);
	printf(" Enter second numbers : ");
	scanf("%d",&b);	
		
		printf("\nYour final Anwer is :");
			
			printf("%d",c);
				printf("\nExit");

		
			break;
			
	case 3: c=a*b;
	printf("\n Enter frist numbers: ");
	scanf("%d",&a);
	printf(" Enter second numbers : ");
	scanf("%d",&b);	
		
	printf("\nYour final Anwer is :");
		
		printf("%d",c);
		printf("\n Enter frist numbers: ");
	scanf("%d",&a);
	printf(" Enter second numbers : ");
	scanf("%d",&b);	
		
			printf("/nExit");

		break;
		
		
	
	case 4: c=a/b;
	printf("\n Enter frist numbers: ");
	scanf("%d",&a);
	printf(" Enter second numbers : ");
	scanf("%d",&b);	
		
	printf("\nYour final Anwer is :");
		
		printf("%d",c);
			printf("\nExit");

		
		break;
		case 5:
 
 	printf("|| I am ready find your simple Intrest ||\n");
 	 
 	printf("\nEnter Your principle: ");
 	 scanf("%d",&p);
     printf("\nEnter Your time: ");
      scanf("%d",&t);
     printf("\nEnter Your rate: ");
      scanf("%f",&r);
      
      
      	si=p*r*t/100;
		scanf("%f\n",si);
     printf("\nYour final Answer is : ");
 
		printf("Exit");
		
		break;
	case 6:
		
	
			printf("Enter your number: ");
			scanf("%d",&num);
			
			if(num %2==0)
			{
			printf("this is a even number");
			printf("Exit");
		}
		else{
		printf("this is odd number");	
	print("Exit");
}
	break;
	case 7:
		
	printf("\nEnter your distance in km ");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	ft=cm/2.54;
	printf("Distance in meter=%f\n",m);
	printf("Distance in meter=%f\n",cm);
	printf("Distance in meter=%f\n",ft);
	
	break;
	
	
		
	
	
	

}
	

		
	return 0;
}
	
	
	

