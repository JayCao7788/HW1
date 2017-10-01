#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("Please enter the number\n");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d為偶數\n",num);
	}
	else
	{
		printf("%d為奇數\n",num);
	}
	
	system("pause");
	return 0;
}
