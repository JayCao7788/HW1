#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	float a, b, c, d, e, sum;
	float m0, m1, m2;

	printf("�п�J�@�Ѫ����{��\n");
	scanf("%f", &a);
	printf("�п�J�T�o�@���ɪ�����\n");
	scanf("%f", &b);
	printf("�п�J�T�o�@���ɯ��p��������\n");
	scanf("%f", &c);
	printf("�п�J�@�Ѫ������O\n");
	scanf("%f", &d);
	printf("�п�J�@�Ѫ��L���O\n");
	scanf("%f", &e);

	sum = ((a / c)*b) + d + e;

	printf("��騮�O=%.1f\n",sum);

	m0 = sum - (sum / 2);
	m1 = sum - (sum / 3);
	m2 = sum - (sum / 4);

	printf("�p�G�P�@�H�@���i�٤U %.1f $\n", m0);
	printf("�p�G�P��H�@���i�٤U %.1f $\n", m1);
	printf("�p�G�P�T�H�@���i�٤U %.1f $\n", m2);
	
	system("pause");
	return 0;
}