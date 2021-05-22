/*
 * ArrayEmployees.h
 *
 *  Created on: 15 may. 2021
 *      Author: Ismael Molina
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

#include "Funciones.h"


/**
 * \ brief Inicializa todos los índices del array como vacíos
 * \ param employeeData Es el array en la que se establecen los estados vacíos
 * \ param quant Es la longitud del array
 * \ return proceso fue exitoso o no
 *
 */
int initArrayAsEmpty(sEmployee employeeData[], int quant);

/**
 * \brief Traverse the array looking for the first available place to store the data
 * \param employeeData It is the array in which to search the empty state
 * \param quant It is the length of the array itself
 * \return The index where to put all the data
 *
 */
int searchListingFirstEmptyPlace(sEmployee employeeData[], int quant);

/**
 * \ brief Recorre el array buscando el primer lugar disponible para almacenar los datos
 * \ param employeeData Es el array en la que busca el estado vacío
 * \ param quant Es la longitud del array en sí
 * \ return El índice donde poner todos los datos
 *
 */
int changeIsEmptyState(sEmployee employeeData);

/**
 * \ brief Crea una identificación para cada entrada de empleado
 * \ param employeeData Es el array para colocar el ID
 * \ param quant Es la longitud del array en sí
 * \ return La nueva identificación creada
 *
 */
int createId(sEmployee employeeData[],int lastId, int quant);

/**
 * \ brief Modifica a un empleado usando la identificación recibida
 * \ param employeeData Es el array donde modificar al empleado
 * \ param quant Es la longitud del array en sí
 * \ return éxito o no de la modificación
 *
 */
int modifyEmployee(sEmployee employeeData[], int quant);

/**
 * \ brief Elimina a un empleado usando la identificación recibida
 * \ param employeeData Es la matriz donde hay que eliminar al empleado
 * \ param quant Es la longitud del array en sí
 * \ return éxito o no de la eliminación
 *
 */
int deleteEmployee(sEmployee employeeData[], int quant);

/**
 * \ brief Ordena a los empleados en orden ascendente por apellido, y si son iguales, los clasifica en orden ascendente por sector
 * \ param employeeData Es la matriz a ordenar
 * \ param quant Es la longitud de la matriz en sí
 * \ return La confirmación de clasificación
 *
 */
int sortEmployeesAscendent(sEmployee employeeData[], int quant);

/**
 * \ brief Ordena a los empleados en orden descendente por apellido, y si son iguales, los clasifica en orden descendente por sector
 * \ param employeeData Es la matriz a ordenar
 * \ param quant Es la longitud de la matriz en sí
 * \ return La confirmación de clasificación
 *
 */
 int sortEmployeesDescendent(sEmployee employeeData[], int quant);

/**
 * \ brief Calcula la suma total de todos los salarios
 * \ param employeeData Es el matriz donde recopila los datos de salarios
 * \ param quant Es la longitud de la matriz en sí
 * \ return El total de todos los salarios juntos
 *
 */
float totalWage(sEmployee employeeData[], int quant);

/**
 * \ brief Calcula el promedio de todos los salarios.
 * \ param employeeData Es la matriz donde recopila los datos de salarios
 * \ param quant Es la longitud de la matriz en sí
 * \ return El promedio final de todos los salarios
 *
 */
float averageWage(sEmployee employeeData[], int quant);

/**
 * \ brief Calcula cuántos empleados superan el salario medio.
 * \ param employeeData Es la matriz donde recopila los datos de salarios
 * \ param quant Es la longitud de la matriz en sí
 * \ return El total de empleados que exceden el salario promedio
 *
 */
int employeesWageExceedAverage(sEmployee employeeData[], int quant);

/**
 * \ brief Imprime una lista con todos los empleados del sistema y el promedio de salarios
 * \ param employeeData Es la matriz donde recopila todos los datos de los empleados
 * \ param quant Es la longitud de la matriz en sí
 * \ return El valor de confirmación del éxito de las impresiones
 *
 */
int printList(sEmployee employeeData[],int quant);


#endif /* ARRAYEMPLOYEES_H_ */
