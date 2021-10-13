#include <stdio.h>
#include <stdlib.h>

/* banco UCAD - cajero ver.1  */

int main(int argc, char *argv[]) 
{
	int op;
	float canti,clave;
	printf("*** banco UCAD ***\n");
	printf("1. consultas\n");
	printf("2. recargas\n");
	printf("3. pago de servicios\n");
	printf("4. transferencias\n");
	printf("5. depositos\n");
	printf("6. retiros\n");
	printf("selecciona tu opcion:");
	scanf("%d",&op);
	if(op==1)/*inicia consultas del menu principal*/
	{
		printf("*** consultas ***\n");
	}
	else/*termina consultas del menu principal*/
	if(op==2)
    {
    	printf("*** recargas ***\n");
    	printf("1. telcel\n");
    	printf("2. movistar\n");
    	printf("3. AT&T\n");
    	printf("4. freedompop\n");
    	printf("5. virginmovil\n");
    	printf("selecciona tu opcion:");
    	scanf("%d",&op);
    	if(op==1)/*inicia recargas del menu principal*/
        {
		    printf("*** telcel ***\n");
	    	printf("1. $500\n");
	    	printf("2. $300\n");
	    	printf("3. $200\n");
	    	printf("4. $100\n");
	    	printf("5. $50\n");
	    	printf("6. $20\n");
	    	printf("selecciona una opcion:");
	    	scanf("%d",&op);
		    if(op==1)
		    {
		    	printf("gracias por tu compra, tu recarga fue de $500");
		    }
		    else
		    if(op==2)
		    {
		    	printf("gracias por tu compra, tu recarga fue de $300");
	    	}
		    else
		    if(op==3)
		    {
		    	printf("gracias por tu compra, tu recarga fue de $200");
		    }
		    else
		    if(op==4)
		    {
		    	printf("gracias por tu compra, tu recarga fue de $100");
		    }
	    	else
	    	if(op==5)
		    {
		    	printf("gracias por tu compra, tu recarga fue de $50");
		    }
		    else
		    if(op==6)
		    {
		    	printf("gracias por tu compra, tu recarga fue de $20");
			}
        }
		else
	    if(op==2)
		{
			printf("*** movistar ***\n");
			printf("1. $500\n");
			printf("2. $300\n");
			printf("3. $200\n");
			printf("4. $100\n");
			printf("5. $50\n");
			printf("6. $20\n");
			printf("selecciona una opcion:");
			scanf("%d",&op);
			if(op==1)
			{
				printf("gracias por tu compra!, tu recarga fue de $500");	
			}
			else
			if(op==2)
			{
			    printf("gracias por tu compra!, tu recarga fue de $300");	
			}
			else
			if(op==3)
			{
				printf("gracias por tu compra!, tu recarga fue de $200");
			}
			else
			if(op==4)
			{
				printf("gracias por tu compra!, tu recarga fue de $100");
			}
			else
			if(op==5)
			{
				printf("gracias por tu compra!, tu recarga fue de $50");
			}
			else
			if(op==6)
			{
				printf("gracias por tu compra!, tu recarga fue de $20");
			}
		}
	    else
		if(op==3)
		{
			printf("*** AT&T ***\n");
			printf("1. $500\n");
			printf("2. $300\n");
			printf("3. $200\n");
			printf("4. $100\n");
			printf("5. $50\n");
			printf("6. $20\n");
			printf("selecciona una opcion:");
			scanf("%d",&op);
			if(op==1)
			{
				printf("gracias por tu compra!, tu recarga fue de $500");	
			}
			else
			if(op==2)
			{
			    printf("gracias por tu compra!, tu recarga fue de $300");	
			}
			else
			if(op==3)
			{
				printf("gracias por tu compra!, tu recarga fue de $200");
			}
			else
			if(op==4)
			{
				printf("gracias por tu compra!, tu recarga fue de $100");
			}
			else
			if(op==5)
			{
				printf("gracias por tu compra!, tu recarga fue de $50");
			}
			else
			if(op==6)
			{
				printf("gracias por tu compra!, tu recarga fue de $20");
			}
		}
	    else
		if(op==4)
		{
			printf("*** freedompop ***\n");
			printf("1. $500\n");
			printf("2. $300\n");
			printf("3. $200\n");
			printf("4. $100\n");
			printf("5. $50\n");
			printf("6. $20\n");
			printf("selecciona una opcion:");
			scanf("%d",&op);
			if(op==1)
			{
				printf("gracias por tu compra!, tu recarga fue de $500");	
			}
			else
			if(op==2)
			{
			    printf("gracias por tu compra!, tu recarga fue de $300");	
			}
			else
			if(op==3)
			{
				printf("gracias por tu compra!, tu recarga fue de $200");
			}
			else
			if(op==4)
			{
				printf("gracias por tu compra!, tu recarga fue de $100");
			}
			else
			if(op==5)
			{
				printf("gracias por tu compra!, tu recarga fue de $50");
			}
			else
			if(op==6)
			{
				printf("gracias por tu compra!, tu recarga fue de $20");
			}
		}
	    else
		if(op==5)
		{
			printf("*** virginmovil ***\n");
			printf("1. $500\n");
			printf("2. $300\n");
			printf("3. $200\n");
			printf("4. $100\n");
			printf("5. $50\n");
			printf("6. $20\n");
			printf("selecciona una opcion:");
			scanf("%d",&op);
			if(op==1)
			{
				printf("gracias por tu compra!, tu recarga fue de $500");	
			}
			else
			if(op==2)
			{
			    printf("gracias por tu compra!, tu recarga fue de $300");	
			}
			else
			if(op==3)
			{
				printf("gracias por tu compra!, tu recarga fue de $200");
			}
			else
			if(op==4)
			{
				printf("gracias por tu compra!, tu recarga fue de $100");
			}
			else
			if(op==5)
			{
				printf("gracias por tu compra!, tu recarga fue de $50");
			}
			else
			if(op==6)
			{
				printf("gracias por tu compra!, tu recarga fue de $20");
			}
		}/* termina consultas del menu principal */
	}
    	else/* inicia pago de servicios del menu principal */
		if(op==3)
		{
			printf("*** pago de servicios ***\n");
			printf("1. telmex\n");
			printf("2. agua - SACMEX\n");
			printf("3. luz - CFE\n");
			printf("4. dish\n");
			printf("5. totalplay\n");
			printf("6. predial\n");
			printf("selecciona una opcion:");
			scanf("%d",&op);
			if(op==1)
			{
				printf("*** pago de servicio telmex ***\n");
				printf("ingresa la cantidad a pagar:");
				scanf("%f",&canti);
				printf("tu pago fue de:$%.1f",canti);
	    	}
	    	else
	    	if(op==2)
			{
				printf("*** pago de servicio agua - SACMEX ***\n");
				printf("ingresa la cantidad a pagar:");
				scanf("%f",&canti);
				printf("tu pago fue de:$%.1f",canti);
	    	}
	    	else
	    	if(op==3)
			{
				printf("*** pago de servicio agua - CFE ***\n");
				printf("ingresa la cantidad a pagar:");
				scanf("%f",&canti);
				printf("tu pago fue de:$%.1f",canti);
	    	}
	    	else
	    	if(op==4)
			{
				printf("*** pago de servicio dish ***\n");
				printf("ingresa la cantidad a pagar:");
				scanf("%f",&canti);
				printf("tu pago fue de:$%.1f",canti);
	    	}
	    	else
	    	if(op==5)
			{
				printf("*** pago de servicio totalplay ***\n");
				printf("ingresa la cantidad a pagar:");
				scanf("%f",&canti);
				printf("tu pago fue de:$%.1f",canti);
	    	}
	    	else
	    	if(op==6)
			{
				printf("*** pago de servicio predial ***\n");
				printf("ingresa la cantidad a pagar:");
				scanf("%f",&canti);
				printf("tu pago fue de:$%.1f",canti);
	    	}
		}/*termina pago de servicios*/
		else/*inicia transferencias del menu principal*/
		if(op==4)
		{
			printf("*** transferencias ***\n");
			printf("1. bancomer\n");
			printf("2. banamex\n");
			printf("3. HSBC\n");
			printf("4. santander\n");
			printf("5. banorte\n");
			printf("selecciona tu opcion:");
			scanf("%d",&op);
			if(op==1)
			{
				printf("*** bancomer ***");
				printf("ingresa tu CLAVE:\n");
				scanf("%f",&clave);
				printf("ingresa el monto a transferir:");
				scanf("%f",&canti);
				printf("tu transferencia fue de:$%.1f",canti);
			}
			else
			if(op==2)
			{
				printf("*** banamex ***");
				printf("ingresa tu CLAVE:\n");
				scanf("%f",&clave);
				printf("ingresa el monto a transferir:");
				scanf("%f",&canti);
				printf("tu transferencia fue de:$%.1f",canti);
			}
			else
			if(op==3)
			{
				printf("*** HSBC ***");
				printf("ingresa tu CLAVE:\n");
				scanf("%f",&clave);
				printf("ingresa el monto a transferir:");
				scanf("%f",&canti);
				printf("tu transferencia fue de:$%.1f",canti);
			}
			if(op==4)
			{
				printf("*** santander ***");
				printf("ingresa tu CLAVE:\n");
				scanf("%f",&clave);
				printf("ingresa el monto a transferir:");
				scanf("%f",&canti);
				printf("tu transferencia fue de:$%.1f",canti);
			}
			if(op==5)
			{
				printf("*** banorte ***");
				printf("ingresa tu CLAVE:\n");
				scanf("%f",&clave);
				printf("ingresa el monto a transferir:");
				scanf("%f",&canti);
				printf("tu transferencia fue de:$%.1f",canti);
			}
		}/*termina transferencias del menu principal*/
		else
		if(op==5)
		{
			printf("*** depositos ***\n");
			printf("ingresa la cantidad a depositar:");
			scanf("%f",&canti);
			printf("tu deposito fue:$%1.f",canti);
		}
		else
		if(op==6)
		{
			printf("*** retiros ***\n");
			printf("ingresa la cantidad a retirar:");
			scanf("%f",&canti);
			printf("tu retiro fue de:$%1.f",canti);
		}
	return 0;
}
