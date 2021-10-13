#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ecuacion de segundo por formula general */

int main(int argc, char *argv[]) 
{
	float a,b,c,x1,x2;
	printf("dame el valor de a:");
	scanf("%f",&a);
	printf("dame el valor de b:");
	scanf("%f",&b);
	printf("dame el valor de c:");
	scanf("%f",&c);
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b+sqrt(b*b-4*a*c))/(2*a);
	printf("el valor de x1 es:%.1f\n",x1);
	printf("el valor de x2 es:%.1f",x2);
	return 0;
}
