#include <stdio.h>
#include <stdlib.h>

/* area de las figuras geometricas */

int main(int argc, char *argv[]) 
{
	int op;
	float a,l,b,h,B,p,t,pi=3.1416,r,RM,rm,DM,dm;
	printf("*** areas de las figuras geom.***\n");
	printf("1. area cuadrado\n");
	printf("2. area rectangulo\n");
	printf("3. area triangulo\n");
	printf("4. area paralelogramo\n");
	printf("5. area trapecio\n");
	printf("6. area poligono regular\n");
	printf("7. area circulo\n");
	printf("8. area pentagono\n");
	printf("9. area hexagono\n");
	printf("10. area elipse\n");
	printf("11. area rombo\n");
	printf("12. salir\n");
	printf("selecciona una opcion:");
	scanf("%d",&op);
	if(op==1)
    {
	    printf("area cuadrado\n");
	    printf("dame el lado del cuadrado:");
	    scanf("%f",&l);
	    a=l*l;
	    printf("el area del cuadrado es:%.1f",a);
	}	
    else
    if(op==2)
    {
    	printf("area rectangulo\n");
	    printf("dame la base del rectangulo:");
	    scanf("%f",&b);
	    printf("dame la altura del rectangulo:");
	    scanf("%f",&h);
	    a=b*h;
	    printf("el area del rectangulo es:%.1f",a);
	}
	else
	if(op==3)
	{
		printf("area triangulo\n");
		printf("dame la base:");
		scanf("%f",&b);
		printf("dame la altura");
		scanf("%f",&h);
		a=b*h/2;
		printf("el area del triangulo es:%.1f",a);
	}
	else
	if(op==4)
	{
	    printf("area paralelogramo\n");
	    printf("dame la base:");
	    scanf("%f",&b);
	    printf("dame la altura:");
	    scanf("%f",&h);
	    a=b*h;
	    printf("el area del paralelogramo es:%.1f",a);
	}    
	else
	if(op==5)
	{
	    printf("area trapecio\n");
	    printf("dame el valor de base mayor:");
	    scanf("%f",&B);
	    printf("dame el valor de base menor:");
	    scanf("%f",&b);
	    printf("dame el valor de altura:");
	    scanf("%f",&h);
	    a=B*b*h/2;
	    printf("el area del trapecio es:%.1f",a);
	}
	else
	if(op==6)
	{
	    printf("area poligono regular\n");
	    printf("dame el valor de perimetro:");
	    scanf("%f",&p);
	    printf("dame el valor de apotema:");
	    scanf("%f",&t);
	    a=p*t/2;
	    printf("el area del es:%.1f",a);
	}
	else
	if(op==7)
	{
	    printf("area circulo\n");
	    printf("dame el valor de radio:");
	    scanf("%f",&r);
	    a=pi*r*r;
	    printf("el area del circulo es:%.1f",a);
	}
	else
	if(op==8)
	{
	    printf("area pentagono\n");
	    printf("dame el valor de perimetro:");
	    scanf("%f",&p);
	    printf("dame el valor de apotema:");
	    scanf("%f",&t);
	    a=p*t/2;
	    printf("el area del pentagono es:%.1f",a);
	}
	else
	if(op==9)
	{
	    printf("area hexagono\n");
	    printf("dame el valor de perimetro:");
	    scanf("%f",&p);
	    printf("dame el valor de apotema:");
	    scanf("%f",&t);
	    a=p*t/2;
	    printf("el area del hexagonoes:%.1f",a);
	}
	else
	if(op==10)
	{
	    printf("area elipse\n");
	    printf("dame el valor de radio mayor:");
	    scanf("%f",&RM);
	    printf("dame el valor de radio menor:");
	    scanf("%f",&rm);
	    a=pi=3.1416*RM*rm;
	    printf("el area del elipse es:%.1f",a);
	}
	else
	if(op==11)
	{
	    printf("area rombo\n");
	    printf("dame el valor de diagonal mayor:");
	    scanf("%f",&DM);
	    printf("dame el valor de diagonal menor:");
	    scanf("%f",&dm);
	    a=DM*dm/2;
	    printf("el area del rombo es:%.1f",a);
	}
	else
	if(op==12)
	{
		printf("gracias por utilizar la calculadora para calcular el area de las figuras geometricas\n");
	}
	return 0;
}
