#include <stdio.h>

void main(void)
{
	int id,password,try;
	//int max ;
	
	printf("Please enter id: ");
	scanf("%d",&id);
	
	
	switch(id){
		
		case 7471 :
		for(try=0;try<=2;try++){
			printf("Please enter password: ");
			scanf("%d",&password);
			
			if(password == 1234){
				printf("welcome ");
				break;
			}
		} break;
		
		
		
		
		case 7000 :
		for(try=0;try<=2;try++){
			printf("Please enter password: ");
			scanf("%d",&password);
			
			if(password == 1294){
				printf("welcome ");
				break;
			}
		}
		break;
		
		
		default:
		printf("not correct id");
		
	}
	//printf("Please enter number 1: ");
	//scanf("%d",&num1);
	
	//printf("Please enter number 2: ");
	//scanf("%d",&num2);
	
	//printf("Please enter number 3: ");
	//scanf("%d",&num3);
	
	
	
}