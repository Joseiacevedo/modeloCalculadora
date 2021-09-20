/*
 ============================================================================
 Name        : TP[1].c
 Author      : Jose Acevedo
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 Programación I – Laboratorio I
1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
2 Cómo realizar y entregar el trabajo práctico
El trabajo práctico deberá ser entregado en el repositorio de GIT correspondiente al TP1 de la
materia.
El mismo consistirá en el proyecto de CodeBlocks con el programa funcionando y comentado,
respetando las reglas de estilo de la cátedra. La compilación no deberá arrojar mensajes de
error ni de warnings.
El proyecto deberá contar con la biblioteca descripta en la sección número dos, y se deberá
hacer uso de dichas funciones para resolver la lógica del programa.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main(void)
{
		setbuf(stdout, NULL);

		float numero1;
		int flagNum1;
		flagNum1 = 0;
		float numero2;
		int flagNum2;
		flagNum2 = 0;
		float suma;
		float resta;
		float division;
		int error;
		error = 0;
		float multiplicacion;
		float factorial1;
		float factorial2;
		int flagCalculos;
		flagCalculos = 0;
		int opcion;



	do
		{
		printf("CALCULADORA\n");
		printf("Seleccionar una opcion: \n");
		if(flagNum1 != 0)
		{
			printf("1: Para ingresar el primer operando (A = %.2f)\n",numero1);
		}
		else
		{
			printf("1: Para ingresar el primer operando (A = x)\n");
		}
		if(flagNum2 != 0)
		{
			printf("2: Para ingresar el segundo operando (B = %.2f)\n",numero2);
		}
		else
		{
			printf("2: Para ingresar el segundo operando (B = y)\n");
		}
		printf("3: Para calcular todas las operaciones\n");
		printf("4: Conocer los resultados que se obtuvieron en las diferentes operaciones\n");
		printf("5: Finalizar\n");
		printf("Ingrese la opcion: \n");
		scanf("%d",&opcion);
		fflush(stdin);
		ValidarEntero(opcion);




		switch(opcion)
				{
					case 1:

						numero1 = PedirEntero("Ingrese el primer operando: \n");
						fflush(stdin);
						flagNum1 = 1;
						break;

					case 2:

						numero2 = PedirEntero("Ingrese el segundo operando: \n");
						fflush(stdin);
						flagNum2 = 1;
						break;

					case 3:

						if(flagNum1 != 0 && flagNum2 != 0)
						{
							suma = Suma(numero1, numero2);
							resta = Resta(numero1, numero2);
							error = Division(numero1, numero2,&division);
							multiplicacion = Multiplicacion(numero1, numero2);
							factorial1 = CalcularFactorial(numero1);
							factorial2 = CalcularFactorial(numero2);
							printf("\n>>>>LOS NUMEROS YA HAN SIDO CALCULADOS<<<<\n");
							flagCalculos = 1;
						}
						else
						{
							printf("\n>>>>ERROR, para realizar los calculos primero debe ingresar los operadores<<<<\n");
						}
						break;

					case 4:

						if(flagNum1 != 0 && flagNum2 != 0 && flagCalculos != 0)
						{
							printf("El resultado de A + B es:  %.2f\n",suma);
							printf("El resultado de A - B es: %.2f\n",resta);
							if(error != 0)
							{
								printf("El resultado de A / B es: %.2f\n",division);
							}
							else
							{
								printf("No se puede dividir por 0.");

							}
							printf("El resultado de A * B es: %.2f\n",multiplicacion);
							printf("El factorial de A es: %.2f , y el factorial de B es: %.2f\n",factorial1,factorial2);
							break;
						}
						else
						{
							printf("\n>>>>ERROR, para conocer los resultados primero debe cargar los operadores, luego calcularlos y ahi podra mostrar los resultados<<<<\n");
						}
						break;
					case 5: printf("Salida\n");
					break;


				}

		}while (opcion != 5);


		return 0;

}









