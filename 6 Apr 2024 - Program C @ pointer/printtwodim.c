#include<stdio.h>

#define cols 3
#define rows 3

void inputArray(int matrix[][cols],int rows,int cols);
void printArray(int matrix[][cols],int rows,int cols);

int main()
{
	int matrix[rows][cols];
	int i,j;
	
	printf("Enter the element");
	inputArray(matrix,rows,cols);
	
	printf("Enter the element");
	printArray(matrix,rows,cols);
}

void inputArray(int matrix[][cols],int rows,int cols)
{
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d",*(matrix+i)+j);
		}
	}
}

void printArray(int (*matrix)[cols],int rows,int cols)
{
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d",*(*matrix+i)+j);
		}
	}
}
