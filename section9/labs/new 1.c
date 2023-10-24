#include <stdio.h>
#define SeT_Bit(num,bit_num)      num |= (1<<(bit_num))
#define Clr_Bit(num,bit_num)      num &= ~(1<<(bit_num))
#define TG_Bit(num,bit_num)      num ^= (1<<(bit_num))
#define Read_bit(num,bit_num)      num &= (1>>(bit_num))


int main() {
int x , bit_num ;
printf("please enter number");

scanf("%d",&x);
scanf("%d",&bit_num);


int y = Set_bit(x,bit_num);
printf("%d",y);



}
