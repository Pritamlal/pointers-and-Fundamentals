#include<stdio.h>
int main()
{
	int year,week,days;
	
	printf("Enter the year::");
	scanf("%d",&days);
	
	year=days/365;
	week=(days%365)/7;
	days=days-((year*365) + (week*7));
	
	printf("numofyear::%d\n",year);
	printf("\n");
	printf("week::%d\n",week);
	printf("\n");
	printf("days::%d",days);
}
