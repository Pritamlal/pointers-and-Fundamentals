#include<stdio.h>
void tosearch(int arr[],int size,int numb);

int main()
{
	
	int n,i,search_num;
	int arr[200];
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the numberss::");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}	
	
	printf("Enter the number to search::");
	scanf("%d",&search_num);
	tosearch(arr,n,search_num);
}

void tosearch(int arr[],int size,int numb)
{
	int i;
	for(i=0;i<size;i++)
	{
	if(arr[i]==numb)
	{
		printf("%d is exist",numb);
	}
}
}
