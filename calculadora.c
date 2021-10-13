#include <stdio.h>
#include <stdlib.h>

/* calculadora version 1 */

int main(int argc, char *argv[]) 
{
	int op;
	float a,b,c,h,pi=3.1416,r;
	printf("*** calculadora ver. 1 ***\n");
	printf("1. suma\n");
	printf("2. resta\n");
	printf("3. multiplicacion\n");
	printf("4. division\n");
	printf("5. salir\n");
	printf("seleciona una opcion:");
	scanf("%d",&op);
	if(op==1)
	{
		printf("operacion suma/n");
		printf("dame el primer numero:");
		scanf("%f",&b);
		printf("dame el segundo numero:");
		scanf("%f",&c);
		a=b+c;
		printf("la suma es:%.1f",a);
	}
	else
	if(op==2)
	{
		printf("operacion resta/n");
		printf("dame el primer numero:");
		scanf("%f",&b);
		printf("dame el segundo numero:");
		scanf("%f",&c);
		a=b-c;
		printf("la resta es:%.1f",a);
	}
	else
	if(op==3)
	{
		printf("operacion multiplicacion/n");
		printf("dame el primer numero:");
		scanf("%f",&b);
		printf("dame el segundo numero:");
		scanf("%f",&c);
		a=b*c;
		printf("la multiplicacion es:%.1f",a);
	}
	else
	if(op==4)
	{
		printf("operacion division/n");
		printf("dame el primer numero:");
		scanf("%f",&b);
		printf("dame el segundo numero:");
		scanf("%f",&c);
		a=b/c;
		printf("la division es:%.1f",a);
	}
	else
	if(op==5)
    {
    	printf("gracias por utilizar la calculadora\n");
    	
	}
	return 0;
}
