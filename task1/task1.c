#include <stdio.h>
#include <math.h>

void main(void)
{
	double x = 1;

	double f = ((x+2)/sqrt(2*x)-x/(sqrt(2*x)+2)+2/(x-sqrt(2*x)))*((sqrt(x)-sqrt(2))/(x+2));

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", f);

	printf("x = ");

	scanf("%lf", &x);

	f = ((x+2)/sqrt(2*x)-x/(sqrt(2*x)+2)+2/(x-sqrt(2*x)))*((sqrt(x)-sqrt(2))/(x+2));

	printf("f = %.4lf", f);
}