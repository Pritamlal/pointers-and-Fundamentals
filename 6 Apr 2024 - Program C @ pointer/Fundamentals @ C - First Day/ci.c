#include<stdio.h>
#include<math.h>

int main()
{
	float princ,R,T,CI;
	printf("Enter the principal::");
	scanf("%f",&princ);
	printf("Enter the Rate::");
	scanf("%f",&R);
	printf("Enter the Time::");
	scanf("%f",&T);
	
	CI = princ * pow((1+R/100),T);
	
	printf("%f",CI);
}
