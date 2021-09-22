

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_



/// \fn float PedirEntero(char[])
/// \brief Pide un flotante y lo retorna
/// \param mensaje El mensaje se va a mostrar al pedir el numero
/// \return El flotante ingresado
float PedirNumero(char mensaje[]);

/// \fn int ValidarNumero(int)
/// \brief Recibe un entero y lo valida
/// \param numero El entero lo recibe cuando se ingresa la opcion
/// \return Retorna 0, si es positiva la validacion, si no, retorna 1 si hay un error, y muestra un mensaje de 'Error'
int ValidarNumero(int numero);

/// \fn float Suma(float, float)
/// \brief Recibe dos flotantes y los suma
/// \param num1 Corresponde al flotante ingresado en la primer opcion
/// \param num2 Corresponde al flotante que se ingresa en la opcion 2
/// \return Retorna el resultado de la suma de ambos flotantes
float Suma(float num1, float num2);

/// \fn float Resta(float, float)
/// \brief Recibe dos flotantes y los resta
/// \param num1 Corresponde al flotante ingresado en la primer opcion
/// \param num2 Corresponde al flotante que se ingresa en la opcion 2
/// \return Retorna el resultado de la resta de ambos flotentes
float Resta(float num1, float num2);

/// \fn float Division(float, float, float*)
/// \brief Recibe dos flotantes y los divide, tambien recibe la direccion de memoria de una variable donde se guarda la division de ambos flotantes por medio de un puntero
/// \param num1 Corresponde al flotante ingresado en la primer opcion
/// \param num2 Corresponde al flotante que se ingresa en la opcion 2
/// \param retorno Corresponde al espacio en memoria de una variable que se almacena en este flotante
/// \return Retorna 1 si se puede realizar la division, y si hubo un error, retorna 0 para luego realizar la validacion correspondiente
float Division(float num1, float num2, float* retorno);

/// \fn float Multiplicacion(float, float)
/// \brief Recibe dos flotantes y los multiplica
/// \param num1 Corresponde al flotante ingresado en la primer opcion
/// \param num2 Corresponde al flotante que se ingresa en la opcion 2
/// \return Retorna el resultado de la multiplicacion de ambos flotentes
float Multiplicacion(float num1, float num2);

/// \fn int CalcularFactorial(float)
/// \brief Recibe un flotante, se lo castea a entero y luego se emplea una recursividad, para conocer el Factorial de ese entero
/// \param num1 Es el flotante que se recibe por medio de un ingreso en alguna opcion
/// \return Retorna el resultado de la busqueda del Factorial del entero que obtuvo
int CalcularFactorial(float num1);

#endif /* BIBLIOTECA_H_ */

