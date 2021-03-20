#include <stdio.h>

/**
* Print Farenheit-Celcius table for fhar = 0, 20, ..., 300
*/
int main(void)
{
	float fahr, celcius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahrenheit\tCelcius\n");
	fahr = lower;
	while(fahr <= upper) {
		celcius = (5.0/9.0) *  (fahr - 32);
		printf("%3.0f\t\t%6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
	return 0;
}
