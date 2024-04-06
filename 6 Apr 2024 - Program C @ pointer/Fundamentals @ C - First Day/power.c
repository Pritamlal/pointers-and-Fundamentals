#include<stdio.h>
#include<math.h>

int main()
{
	int base,expo;
	float power;
	printf("Enter the base::");
	scanf("%d",&base);
	
	printf("Enter the exponent::");
	scanf("%d",&expo);
	
	power=pow(base,expo);
	
	printf("%.f",power);
}
