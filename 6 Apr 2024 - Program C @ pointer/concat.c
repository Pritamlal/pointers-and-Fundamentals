#include<stdio.h>

int main()
{
	char text1[100],text2[100];
	int i,j;
	printf("Enter string 1:");
	gets(text1);
	
	printf("Enter string 2:");
	gets(text2);
	
	i=0;
	while(text1[i]!='\0')
	{
		i++;
	}
	
	j=0;
	while(text2[j]!='\0')
	{
		text1[i]=text2[j];
		i++;
		j++;
	}
	
	printf("%s",text1);
}
