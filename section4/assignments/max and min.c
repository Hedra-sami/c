#include <stdio.h>
int Get_Max(int a,int b,int c,int d);
int Get_Min(int a,int b,int c,int d);
int main(){
int a,b,c,d;
printf("Please enter number 1 : ");
scanf("%d",&a);
printf("Please enter number 2 : ");
scanf("%d",&b);
printf("Please enter number 3 : ");
scanf("%d",&c);
printf("Please enter number 4 : ");
scanf("%d",&d);
printf("The maximum value is %d\n",Get_Max(a,b,c,d));
printf("The minimum value is %d",Get_Min(a,b,c,d));
}
int Get_Max(int a,int b,int c,int d){
	int max;
	if(a>b && a>c && a>d){
    max=a;	
	}
	else if(b>a && b>c && b>d){
		max=b;
	}
	else if(c>a && c>b && c>d){
		max=c;
	}
	else{
		max=d;
	}
	return max;
}
int Get_Min(int a,int b,int c,int d){
int min;
	if(a<b && a<c && a<d){
    min=a;	
	}
	else if(b<a && b<c && b<d){
		min=b;
	}
	else if(c<a && c<b && c<d){
		min=c;
	}
	else{
		min=d;
	}
	return min;
	
}







