#include <stdio.h>
#include <stdlib.h>

void ZigzagArray(int *arr1,int *arr2,int *arr3,int Size);


int main()
{
	int ArrOne[]={5,7,10,1,4,5};
	int ArrTwo[]={2,8,3,7,0,6};
	int *ArrThree =(int *) malloc(sizeof(ArrOne)/sizeof(ArrOne[0]));
	printf("Array Element:");
	ZigzagArray(ArrOne,ArrTwo,ArrThree,sizeof(ArrOne)/sizeof(ArrOne[0]));
	for (int i=0; i<sizeof(ArrOne)/sizeof(ArrOne[0]);i++)
	{
		printf("%d \t",ArrThree[i]);
	}
}

void ZigzagArray(int *arr1,int *arr2,int *arr3,int Size)
{
	int Index=0;
	for (int i=0; Index<Size;i+=2)
	{
		arr3[Index++] = arr1[i];
		if(Index<Size)
		{
		arr3[Index++] = arr2[i+1];
		}
	}
}