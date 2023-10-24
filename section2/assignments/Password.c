#include <stdio.h>

void main(void)
{
int id[6]={10,11,12,13,14,15};
int password[6]={2000,2001,2002,2003,2004,2005};
char name[7]={'A','B','C','D','F','G'};
int x;
int y;

printf("Please enter ID: ");
scanf("%d",&x);

	
	for(int i=0 ; i<=5 ; i++)
	{
	
	if (x == id[i])
	{
		printf("Please enter password: ");
		scanf("%d",&y);
		if(y == password[i])
		{
			printf("your name is : %c ",name[i]);
			
			
			
			
			
			
			
			break;
		}
		else
		{
			printf("password is not correct ");
		}
		
	}
	
	else
	{
		//break;
		printf ("incorrect id");
	}
	}
}