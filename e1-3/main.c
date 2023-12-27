#include<stdio.h>

float celsiusToFahre(float c) {
	return (c*1.8)+32;
}

int main() {
	printf("Celsius\tFahrenheit\n");
	for (float i = 1;i<100;i+=10) {
		printf("%f %f\n", i, celsiusToFahre(i));
	}
}
