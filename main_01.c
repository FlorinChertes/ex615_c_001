
#include "overflow_underflow.h"
#include "print_size.h"
#include "convert.h"


#include <stdio.h>

int main()
{
	printf("Hello, world!\n");

	float celsius = 20;
	float fahrenheit = convert_celsius_to_fahrenheit(celsius);
	printf("celsius: %f, fahrenheit: %f\n", celsius, fahrenheit);

	printSizes();
	overflow_underflow();

	return 0;
}