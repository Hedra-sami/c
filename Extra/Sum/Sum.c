#include <stdio.h>
int main()
{
	int Num,sum;
	
	printf("Enter First array number : ");
	scanf("%d",&Num);
	sum = (Num*(Num+1)/2);

	printf("Sum = %d",sum);
}