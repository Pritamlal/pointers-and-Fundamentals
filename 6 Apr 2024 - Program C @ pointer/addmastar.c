#include<stdio.h>

#define rows 3
#define cols 3

void inputmatrix(int mat[][cols]);
void printmatrix(int mat[][cols]);
void matrixadd(int mat1[][cols],int mat2[][cols],int res[][cols]);

int main()
{
	int mat1[rows][cols],mat2[rows][cols],res[rows][cols];
	
	printf("Enter the numbers in matrix::");
	inputmatrix(mat1);
	
	printf("Enter the numbers in matrix::");
	inputmatrix(mat2);
	
	matrixadd(mat1,mat2,res);
	
	printf("Sum of the matrix");
	printmatrix(res);
}

void inputmatrix(int mat[][cols])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",(*(mat+i)+j));
		}
	}
}

void printmatrix(int mat[][cols])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d",*(*(mat+i)+j));
		}
		printf("\n");
	}
}

void matrixadd(int mat1[][cols],int mat2[][cols],int res[][cols])
{


int i,j;

	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			*(*(res+i)+j) = *(*(mat1+i)+j) * *(*(mat2+i)+j);
			
		}
	}
}
