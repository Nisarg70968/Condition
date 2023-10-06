#include <stdio.h>

int main()
{
	float a;
	printf("Enter a number : ");
	scanf("%f",&a);
	
	if(a > 0)
	{
		printf("Enterd value is neutral");
	}
	else if(a<0)
	{
		printf("Enterd value is not neutral");
	}
	else
	{
		printf("Enterd value is invalid");
	}
	
	return 0;
}