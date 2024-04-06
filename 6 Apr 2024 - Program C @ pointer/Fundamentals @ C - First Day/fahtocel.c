#include<stdio.h>
int main()
{
	float f,c;
	
	printf("Enter the fahrenheit value::");
	scanf("%f",&f);
	
	c=(5.0/9.0)*(f-32);
	
	printf("%.2f",c);
