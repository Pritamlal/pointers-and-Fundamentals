#include<stdio.h>

void printArr(int *arr,int size);

int main()
{
	int arr[200];
	int *left= arr;
	int *right;
	int size;

	
	printf("Enter the size");
	scanf("%d",&size);
	
	right=&arr[size-1];
	
	printf("Enter elements:");
	while(left<=right)
	{
		scanf("%d",left++);
	}
	
	printf("Before Reverse::");
	printArr(arr,size);
	
	left=arr;
	
	while(left<right)
	{
		*left ^= *right;
		*right ^= *left;
		*left ^= *right;
		
		left++;
		right--;
	}
	
		printf("\nArray after reverse::");
		printArr(arr,size);
}

void printArr(int *arr,int size)
{
	int *arrend = (arr+size-1);
	while(arr<=arrend)
	{
		printf("%d ",*arr);
		
		arr++;
	}


}
