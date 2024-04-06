#include<stdio.h>

int main()

{
	int area,perimeter,l,b;
	printf("Enter the l and b::");
	scanf("%d %d",&l,&b);
	
	area=l*b;
	
	perimeter = 2*(l+b);
	
	printf("%d\n",area);
	printf("%d",perimeter);
	
}
