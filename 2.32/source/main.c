#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float weight,height,bmi;
	printf("Please enter Weight\n");
	scanf("%f", &weight);
	printf("Please enter Height\n");
	scanf("%f", &height);

	bmi = weight / (height*height);

	printf("BMI Value:\t%.1f\n", bmi);
	printf("Underweight:\tless than 18.5\n");
	printf("Normal:\t\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\n");
	printf("Obese:\t\t30 or greater\n");

	system("pause");
	return 0;
}
