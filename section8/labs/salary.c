#include <stdio.h>


typedef unsigned char      u8 ;
typedef unsigned short int u16;
typedef unsigned long  int u32;
typedef signed   char      s8 ;
typedef signed   short int s16;
typedef signed   long  int s32;
typedef float              f32;
typedef double             f64;




struct employee {
	u32 salary ;
	u32 bonus;
	u32 deductions;
}Ahmed,Waled,Amr;


int main (void){
	u32 Total;
	printf("please enter ahmed salary : \n ");
	scanf("%d",&Ahmed.salary);
	printf("please enter ahmed bonus : \n");
	scanf("%d",&Ahmed.bonus);
	printf("please enter ahmed deductions : \n");
	scanf("%d",&Ahmed.deductions);
	printf("please enter waled salary : \n");
	scanf("%d",&Waled.salary);
	printf("please enter waled bonus : \n");
	scanf("%d",&Waled.salary);
	printf("please enter waled deductions : \n");
	scanf("%d",&Waled.salary);
	
	
	printf("please enter amr salary : \n");
	scanf("%d",&Waled.salary);
	
	printf("please enter amr bonus : \n");
	scanf("%d",&Waled.bonus);
	
	printf("please enter amr deductions : \n");
	scanf("%d",&Waled.deductions);
	
	Total = (Ahmed.salary + Amr.salary + Waled.salary + Ahmed.bonus
	         + Amr.bonus + Waled.bonus - Ahmed.deductions - Amr.deductions
			 - Waled.deductions);
	
	printf("total value needed = %d : \n",Total);
	//scanf("%d",&Waled.salary);
}