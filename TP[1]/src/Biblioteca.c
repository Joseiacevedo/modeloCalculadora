

#include "Biblioteca.h"
#include <stdio.h>
#include <stdlib.h>


float PedirNumero(char mensaje[])
{
	float numero;

	  printf("%s",mensaje);
	  scanf("%f",&numero);


	  return numero;

}
int ValidarNumero(int numeroIngresado)
{
	int retorno;
	retorno = 0;

	if(numeroIngresado < 1 || numeroIngresado > 5)
		{

			printf(">>>>Error al ingresar una opcion, intente nuevamente<<<<\n");
			retorno = 1;
		}
	return retorno;
}
float Suma(float num1, float num2)
{

	float resultado;

	resultado = num1 + num2;

	return resultado;
}

float Resta(float num1, float num2)
{

	float resultado;

	resultado =  num1 - num2;

	return resultado;
}


float Division(float num1, float num2,float* retorno)
{
	float resultado;
	int auxDivision;
	auxDivision = 0;



	if(num2 != 0)
	{
		resultado = num1 / num2;
		(*retorno) = resultado;

		auxDivision = 1;
	}
	return auxDivision;
}
float Multiplicacion(float num1, float num2)
{

	float resultado;

	resultado = num1 * num2;

	return resultado;
}

int CalcularFactorial(float num1)
{
	int resultado;

	if(num1 == 0)
	{
		resultado = 1;

	}
	else
	{
	resultado = (int)num1 * CalcularFactorial((int)num1 - 1);
	}

	return resultado;

}








