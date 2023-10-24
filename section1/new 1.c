#include<stdio.h>
int main (){
	int x , y , z ;
	printf("please enter numbers\n");
	scanf("%d %d",&x,&y);
	z = x ;
	x = y ;
	y = z ;
	printf("now the first number = %d" ,x);
	printf("now the second number = %d" ,y);
}