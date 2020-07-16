#include <stdio.h>

float ct(float);

#define LOWER 0
#define UPPER 300
#define STEP 20
main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = LOWER;
	upper = UPPER;
	step = STEP;
	
	printf("Temperature\n");

	
	fahr = lower;
	while (fahr <= upper){
		celsius = ct(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

float ct(float fahr)
{
	float celsius;
	celsius = 5 * (fahr-32) / 9;
	return celsius;
}
	
