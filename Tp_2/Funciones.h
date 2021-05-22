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
 * \return Los datos del empleado para poner en el índice correspondiente
 *
 */
sEmployee getEmployee(sEmployee employeeData);

/**
 * \ brief Permite la entrada de una cadena de texto
 * \ param message Es el mensaje de solicitud de entrada
 * \ param errorMessage Es el mensaje de error en caso de una entrada inválida
 * \ param input Es el array donde se cargará el texto
 * \ return 1 si el texto solo contiene letras y espacios
 *
 */
int getCharString(char message[], char errorMessage[], char input[]);

/**
 * \ brief Verifica si el valor recibido contiene solo letras y espacios
 * \ param string Es el arreglo con el string a analizar
 * \ return 1 si el texto solo contiene letras y espacios; 0 si hay más de letras y espacios
 *
 */
int charactersOnly(char string[]);

/**
 * \ brief Pide un número entero y flotante y lo verifica
 * \ param floatMask Es la máscara para poner en la función scanf
 * \ param variable Es la variable donde se coloca el número validado
 * \ return 1 si es un número válido; 0 si no lo es
 *
 */
int getAndValidateIntAndFloatNumber(const char* floatMask, void* variable);

/**
 * \ brief Toma el número entero dado por la función getInt y verifica si es una entrada válida
 * \ param string Es el array con el número a analizar
 * \ return 1 si es un entero válido; 0 si no es un entero
 *
 */
int isInt(char string[]);

/**
 * \ brief Busca un carácter de nueva línea dentro del array y lo reemplaza con un '\ 0'
 * \ param string Es el arreglo en el que buscar
 * \ return La cadena modificada
 *
 */
char removeBackslashN(char string[]);

/**
 * \ brief Convierte el primer carácter de una o más palabras a mayúsculas
 * \ param string Es el array en el que buscar
 * \ return Un valor de confirmación
 *
 */
int firstLetterInCaps(char string[]);

/**
 * \ brief Pide un número entero y llama a la función isInt para validarlo
 * \ param message Es el mensaje de solicitud de entrada
 * \ return El valor entero
 *
 */
int getInt(char message[]);

#endif // FUNCIONES_H_INCLUDED
