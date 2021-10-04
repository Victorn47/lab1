#include <stdio.h>
#include <math.h>

double f(double x);

void main(void)	
{

double x = 1;

	printf("x = %.4lf\n", x);

	printf("f = %.4lf\n\n", f(x));

	printf("x = ");

	scanf("%lf", &x);

	printf("f = %.4lf", f(x));

}

double f(double x)

{

	return ((x+2)/sqrt(2*x)-x/(sqrt(2*x)+2)+2/(x-sqrt(2*x)))*((sqrt(x)-sqrt(2))/(x+2));

}