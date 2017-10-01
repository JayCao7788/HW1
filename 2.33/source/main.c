#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float a, b, c, d, e, sum;
	float m0, m1, m2;

	printf("請輸入一天的里程數\n");
	scanf("%f", &a);
	printf("請輸入汽油一公升的價格\n");
	scanf("%f", &b);
	printf("請輸入汽油一公升能行駛之公里數\n");
	scanf("%f", &c);
	printf("請輸入一天的停車費\n");
	scanf("%f", &d);
	printf("請輸入一天的過路費\n");
	scanf("%f", &e);

	sum = ((a / c)*b) + d + e;

	printf("當日車費=%.1f\n",sum);

	m0 = sum - (sum / 2);
	m1 = sum - (sum / 3);
	m2 = sum - (sum / 4);

	printf("如果與一人共乘可省下 %.1f $\n", m0);
	printf("如果與兩人共乘可省下 %.1f $\n", m1);
	printf("如果與三人共乘可省下 %.1f $\n", m2);
	
	system("pause");
	return 0;
}