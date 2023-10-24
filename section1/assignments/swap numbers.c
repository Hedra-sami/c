#include<stdio.h>
int main (){
	/* The First Method */
	
	
	int x , y , z ;
	printf("please enter numbers\n");
	scanf("%d %d",&x,&y);
	z = x ;
	x = y ;
	y = z ;
	printf("now the first number = %d" ,x);
	printf("now the second number = %d" ,y);  
	
	
	/* The Second Method */
	
	int x , y ;
	printf("please enter numbers\n");
	scanf("%d %d",&x,&y);
	x = x - y ;
	y = x + y ;
	x = y - x ;
	printf("now the first number = %d \n" ,x);
	printf("now the second number = %d" ,y);   
	
	
	/* The Third Method */
	int x , y , z ;
	printf("please enter numbers\n");
	scanf("%d %d",&x,&y);
	z = x ^ y ;
	x = z ^ x ;
	y = z ^ y ;
	printf("now the first number = %d \n" ,x);
	printf("now the second number = %d" ,y);
	
	
}