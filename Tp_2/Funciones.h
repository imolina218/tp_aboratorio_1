#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include "Funciones.h"

typedef struct{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}sEmployee;

/**
 * \brief Solicita que los datos del empleado se registren
 * \param employeeDate Es el array donde colocar al nuevo empleado
 * \return Los datos del empleado para poner en el �ndice correspondiente
 *
 */
sEmployee getEmployee(sEmployee employeeData);

/**
 * \ brief Permite la entrada de una cadena de texto
 * \ param message Es el mensaje de solicitud de entrada
 * \ param errorMessage Es el mensaje de error en caso de una entrada inv�lida
 * \ param input Es el array donde se cargar� el texto
 * \ return 1 si el texto solo contiene letras y espacios
 *
 */
int getCharString(char message[], char errorMessage[], char input[]);

/**
 * \ brief Verifica si el valor recibido contiene solo letras y espacios
 * \ param string Es el arreglo con el string a analizar
 * \ return 1 si el texto solo contiene letras y espacios; 0 si hay m�s de letras y espacios
 *
 */
int charactersOnly(char string[]);

/**
 * \ brief Pide un n�mero entero y flotante y lo verifica
 * \ param floatMask Es la m�scara para poner en la funci�n scanf
 * \ param variable Es la variable donde se coloca el n�mero validado
 * \ return 1 si es un n�mero v�lido; 0 si no lo es
 *
 */
int getAndValidateIntAndFloatNumber(const char* floatMask, void* variable);

/**
 * \ brief Toma el n�mero entero dado por la funci�n getInt y verifica si es una entrada v�lida
 * \ param string Es el array con el n�mero a analizar
 * \ return 1 si es un entero v�lido; 0 si no es un entero
 *
 */
int isInt(char string[]);

/**
 * \ brief Busca un car�cter de nueva l�nea dentro del array y lo reemplaza con un '\ 0'
 * \ param string Es el arreglo en el que buscar
 * \ return La cadena modificada
 *
 */
char removeBackslashN(char string[]);

/**
 * \ brief Convierte el primer car�cter de una o m�s palabras a may�sculas
 * \ param string Es el array en el que buscar
 * \ return Un valor de confirmaci�n
 *
 */
int firstLetterInCaps(char string[]);

/**
 * \ brief Pide un n�mero entero y llama a la funci�n isInt para validarlo
 * \ param message Es el mensaje de solicitud de entrada
 * \ return El valor entero
 *
 */
int getInt(char message[]);

#endif // FUNCIONES_H_INCLUDED
