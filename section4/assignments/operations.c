#include <stdio.h>
 int Add(int x,int y);
 int Subtract(int x,int y);
 int Multiply(int x,int y);
 int Divide(int x,int y);
 int And(int x,int y);
 int Or(int x,int y);
 int Not(int x);
 int Xor(int x,int y);
 int Reminder(int x,int y);
 int Increment(int x);
 int Decrement(int x);
int main(){
int ID,x,y;
printf("Please enter the operation id : ");
scanf("%d",&ID);
switch(ID){
case 1:
printf("First operand : ");
scanf("%d",&x);
printf("Second operand : ");
scanf("%d",&y);
printf("%d",Add(x,y));
break;
case 2:
printf("First operand : ");
scanf("%d",&x);
printf("Second operand : ");
scanf("%d",&y);
printf("%d",Subtract(x,y));
break;
case 3:
printf("First operand : ");
scanf("%d",&x);
printf("Second operand : ");
scanf("%d",&y);
printf("%d",Multiply(x,y));
break;
case 4:
printf("First operand : ");
scanf("%d",&x);
printf("Second operand : ");
scanf("%d",&y);
printf("%d",Divide(x,y));
break;
case 5:
printf("First operand : ");
scanf("%d",&x);
printf("Second operand : ");
scanf("%d",&y);
printf("%d",And(x,y));
break;
case 6:
printf("First operand : ");
scanf("%d",&x);
printf("Second operand : ");
scanf("%d",&y);
printf("%d",Or(x,y));
break;
case 7:
printf("First operand : ");
scanf("%d",&x);
printf("%d",Not(x));
break;
case 8:
printf("First operand : ");
scanf("%d",&x);
printf("Second operand : ");
scanf("%d",&y);
printf("%d",Xor(x,y));
break;
case 9:
printf("First operand : ");
scanf("%d",&x);
printf("Second operand : ");
scanf("%d",&y);
printf("%d",Reminder(x,y));
break;
case 10:
printf("First operand : ");
scanf("%d",&x);
printf("%d",Increment(x));
break;
case 11:
printf("First operand : ");
scanf("%d",&x);
printf("%d",Decrement(x));
break;
default:
printf("Error");
break;
}
}
 int Add(int x,int y){
return (x+y);
}
 int Subtract(int x,int y){
return (x-y);
}
 int Multiply(int x,int y){
return (x*y);
}
 int Divide(int x,int y){
return (x/y);
}
 int And(int x,int y){
return (x&y);
}
 int Or(int x,int y){
return (x|y);
}
 int Not(int x){
return (~x);
}
 int Xor(int x,int y){
return (x^y);
}
 int Reminder(int x,int y){
return (x%y);
}
 int Increment(int x){
x++;
 return (x);
}
 int Decrement(int x){
x--;
 return (x);
}


