#include<stdio.h>

int main()
{
	int m,cm,mm;
	printf("Enter the value of m::");
	scanf("%d",&m);
	
	cm=m*10;
	mm=m*1000;
	
	printf("cm :: %d\n",cm);
	printf("mm :: %d",mm);
}
