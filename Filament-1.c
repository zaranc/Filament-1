#include<stdio.h>

main()
{
	char name[100];
	char temp[100];
	printf("Enter String = ");
	gets(name);
	
	strcpy(temp,name);
	strrev(name);
	printf("String revers = ");
	puts(name);
	
	if(strcmp(name,temp)==0)
	{
		printf("String is Palindrom");
	}
	
	else
	{
		printf("String is Not palindrom");
	}
}
