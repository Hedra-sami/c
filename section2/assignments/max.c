#include <stdio.h>

void main(void)
{
	int num1,num2,num3;
	//int max ;
	
	
	printf("Please enter number 1: ");
	scanf("%d",&num1);
	
	printf("Please enter number 2: ");
	scanf("%d",&num2);
	
	printf("Please enter number 3: ");
	scanf("%d",&num3);
	
	if (num1 > num2)
	{
		if (num1 > num3){
		printf ("max number is : %d" , num1);}
		
		else {
			printf ("max number is : %d" , num3);
		}
	
	}
	
	else
	{
		if (num2>num3){
		printf ("max number is : %d" , num2);}
		else {
			printf ("max number is : %d" , num3);
		}
	}
}