/*
 * funciones.h
 *
 *  Created on: 17 abr. 2021
 *      Author: Usuario
 */

#include <stdio.h>
#include <string.h>

/** \brief Calcula la suma de dos numeros, A mas B.
 *
 * \param float El valor del numero A al que se le va a sumar B.
 * \param float El valor del numero B.
 * \return float Devuelve el valor del resultado de la suma.
 *
 */
float Suma(float, float);
/** \brief Calcula la resta de un numero por otro, A menos B.
 *
 * \param float El valor del numero A al cual es el minuendo.
 * \param float El valor del numero B el cual es el sustraendo
 * \return float Devuelve el valor del resto de la operacion.
 *
 */
float Resta(float, float);
/** \brief Calcula la division de un numero por otro, A dividido B.
 *
 * \param float El valor del numero A el cual es el dividendo.
 * \param float El valor del numero B el cual es el divisor.
 * \return float Devuelve el cociente de la division A dividido B.
 *
 */
float Division(float,float);
/** \brief Multiplica un numero A por un numero B.
 *
 * \param float El valor del numero A(que se va a multiplicar).
 * \param float El valor del numero B(por el cual se va a multiplicar).
 * \return float Producto de la multiplicacion de A*B.
 *
 */
float Multiplicacion(float, float);
/** \brief Calcula el factorial de un numero.
 *
 * \param float El valor sobre el cual calcula factorial.
 * \return int El resultado del factorial del numero.
 *
 */
int Factorial(float);

