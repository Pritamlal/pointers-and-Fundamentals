#include<stdio.h>


#define PI 3.14
int main()
{
	int r;
	printf("Enter the r value::");
	scanf("%d",&r);
	
	printf("Perimeter :: %.2f\n",PI * r * r);
	printf("Diameter  :: %d",2*r);
}
