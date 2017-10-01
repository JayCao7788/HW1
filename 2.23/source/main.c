#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;
    
	printf("Please enter three number\n");

	scanf_s("%d%d%d", &num1, &num2, &num3);
	
	if (num1 > num2 && num2> num3)
	{
		printf("max=%d min=%d\n", num1, num3);
	}

	if (num1 > num3 && num3 > num2)
	{
		printf("max=%d min=%d\n", num1, num2);
	}

	if (num2 > num1 && num1 > num3)
	{
		printf("max=%d min=%d\n", num2, num3);
	}

	if (num2 > num3 && num3 > num1)
	{
		printf("max=%d min=%d\n", num2, num1);
	}

	if (num3 > num2 && num2 > num1)
	{
		printf("max=%d min=%d\n", num3, num1);
	}

	if (num3 > num2 && num2 > num1)
	{
		printf("max=%d min=%d\n", num3, num1);
	}


	system("pause");
	return 0;
}