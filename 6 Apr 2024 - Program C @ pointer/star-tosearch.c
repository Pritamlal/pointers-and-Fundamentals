#include<stdio.h>

void inputArray(int *arr,int size);
int search(int *arr,int size,int tosearch);

int main()
{
	int array[20];
	int size,tosearch,searchindex;
	
	printf("enter Size::");
	scanf("%d",&size);
	
	printf("Enter the number in array::");
	inputArray(array,size);
	
	printf("Enter the number to search::");
	scanf("%d",&tosearch);
	
	searchindex=search(array,size,tosearch);
	
	if(searchindex==-1)
	printf("Does not exist");
	else
	printf("%d is found at %d position",tosearch,searchindex+1);
}

void inputArray(int *arr,int size)
{
	int *arrend=(arr+size-1);
	while(arr<=arrend)
	{
		scanf("%d",arr++);
	}
}

int search(int *arr,int size,int tosearch)
{
	int index=0;
	int *arrend = (arr+size-1);
	while(arr<=arrend && *arr!=tosearch)
	{
		arr++;
		index++;
	}
	
	if(arr<=arrend)
	return index;
	
	return -1;
}
