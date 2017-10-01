#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2;

	printf("Please enter number\n");
	scanf("%d%d", &num1, &num2);

	if (num1%num2 == 0)
	{
		printf("%d是%d的倍數\n",num1,num2);
	}
	else
	{
		printf("%d不是%d的倍數\n", num1, num2);
	}
	
	system("pause");
	return 0;
}