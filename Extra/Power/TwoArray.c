#include <stdio.h>


#define ArrSize 10
typedef struct arr
{
	 int arr_check[10];
}check;


check powerOfTwo(int *arr);


int main()
{
	int arr[10]={0};
	check result;
	
	for(int i=0;i <ArrSize;i++)
	{
		printf("Enter First array number : ");
		scanf("%d",&arr[i]);
	}
	
	result = powerOfTwo(arr);
	
	
	
	printf("array elements : ");
	
	for(int i=0;i <ArrSize;i++)
	{
		printf("\t%d",result.arr_check[i]);
	}
}

check powerOfTwo(int *arr)
{
	check arr_1;
	for(int i=0;i <ArrSize;i++)
	{
		if(arr[i]!=0 && (arr[i]&(arr[i]-1)) == 0 ) arr_1.arr_check[i] = 1;
		else	arr_1.arr_check[i] = 0;
	}
	return arr_1;
}