#include <stdio.h>

/**
* Print Celcius-Fahrenheit  table for c = 0, 20, ..., 300
*/
int main(void)
{
	float fahr, celcius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	printf("Celcius\t\tFahrenheit\n");
	celcius = lower;
	while(celcius <= upper) {
		fahr = 9.0 / 5.0 * celcius + 32;
		printf("%3.0f\t\t%6.1f\n", celcius, fahr);
		celcius += step;
	}
	return 0;
}
