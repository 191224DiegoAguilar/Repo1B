#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int a, A, b, B, c, r, resp1, resp2, opcion;
 	printf("1.triangulo_isoceles \n");
 	printf("2.rectangulo \n");
 	printf("3.circulo \n");
 	printf("4.trapecio \n");
 	printf("5.salir \n");
 	printf("que opcion desea ejecutar\n");
 	scanf(&opcion);
 	
 		switch(opcion)
 	case 1:
 		{
		 
 			printf("introducir base \n");
 			scanf("%i \n", &b);
 			printf("introducir altura \n");
 			scanf("%i \n", &a);
 			resp1 = b*a/2;
 			resp2 = a + b;
 			printf("el area es %i \n", resp1, a, b);
 			printf("el perimetro es %i \n", resp2, a, b);
	 case 2:
			printf("introducir base \n");
			scanf("%i \n", &b);
			printf("introducir altura \n");
		    scanf("%i \n", &a);
			resp1 = b*a;
			resp2 = a+a+b+b;
			printf("el area es igual a la operacion %i \n", resp1);
			printf("el perimetro es igual a la operacion %i+%i \n", resp2, a, b);
	
	case 3:
			printf("introducir radio \n");
			scanf("%i \n", &r);	
			while (r>0);
			{
			
			resp1 = 3.1416*r;
			printf("el area del circulo es %i \n", resp1);
		}
		
	
	case 4: 
			printf("introducir base ");
			scanf("%i \n", &b);
			printf("introducir base mayor \n");
			scanf("%i \n", &B);
			printf("intorducir altura");
			scanf("%i \n", &A);
			while (b > 0, B > 0, A > 0);
			{
			resp1 = b + B + A + A;
			resp2 = B * A;
			printf("el perimetro es %i \n", resp1, b, B, A);
			printf("el area es %i \n", resp2, B, A);
		}

	case 5: 
			printf("a salido del programa");				  		
 	}
	return opcion;
}
