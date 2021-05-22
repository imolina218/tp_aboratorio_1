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
 * \ brief Inicializa todos los �ndices del array como vac�os
 * \ param employeeData Es el array en la que se establecen los estados vac�os
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
 * \ param employeeData Es el array en la que busca el estado vac�o
 * \ param quant Es la longitud del array en s�
 * \ return El �ndice donde poner todos los datos
 *
 */
int changeIsEmptyState(sEmployee employeeData);

/**
 * \ brief Crea una identificaci�n para cada entrada de empleado
 * \ param employeeData Es el array para colocar el ID
 * \ param quant Es la longitud del array en s�
 * \ return La nueva identificaci�n creada
 *
 */
int createId(sEmployee employeeData[],int lastId, int quant);

/**
 * \ brief Modifica a un empleado usando la identificaci�n recibida
 * \ param employeeData Es el array donde modificar al empleado
 * \ param quant Es la longitud del array en s�
 * \ return �xito o no de la modificaci�n
 *
 */
int modifyEmployee(sEmployee employeeData[], int quant);

/**
 * \ brief Elimina a un empleado usando la identificaci�n recibida
 * \ param employeeData Es la matriz donde hay que eliminar al empleado
 * \ param quant Es la longitud del array en s�
 * \ return �xito o no de la eliminaci�n
 *
 */
int deleteEmployee(sEmployee employeeData[], int quant);

/**
 * \ brief Ordena a los empleados en orden ascendente por apellido, y si son iguales, los clasifica en orden ascendente por sector
 * \ param employeeData Es la matriz a ordenar
 * \ param quant Es la longitud de la matriz en s�
 * \ return La confirmaci�n de clasificaci�n
 *
 */
int sortEmployeesAscendent(sEmployee employeeData[], int quant);

/**
 * \ brief Ordena a los empleados en orden descendente por apellido, y si son iguales, los clasifica en orden descendente por sector
 * \ param employeeData Es la matriz a ordenar
 * \ param quant Es la longitud de la matriz en s�
 * \ return La confirmaci�n de clasificaci�n
 *
 */
 int sortEmployeesDescendent(sEmployee employeeData[], int quant);

/**
 * \ brief Calcula la suma total de todos los salarios
 * \ param employeeData Es el matriz donde recopila los datos de salarios
 * \ param quant Es la longitud de la matriz en s�
 * \ return El total de todos los salarios juntos
 *
 */
float totalWage(sEmployee employeeData[], int quant);

/**
 * \ brief Calcula el promedio de todos los salarios.
 * \ param employeeData Es la matriz donde recopila los datos de salarios
 * \ param quant Es la longitud de la matriz en s�
 * \ return El promedio final de todos los salarios
 *
 */
float averageWage(sEmployee employeeData[], int quant);

/**
 * \ brief Calcula cu�ntos empleados superan el salario medio.
 * \ param employeeData Es la matriz donde recopila los datos de salarios
 * \ param quant Es la longitud de la matriz en s�
 * \ return El total de empleados que exceden el salario promedio
 *
 */
int employeesWageExceedAverage(sEmployee employeeData[], int quant);

/**
 * \ brief Imprime una lista con todos los empleados del sistema y el promedio de salarios
 * \ param employeeData Es la matriz donde recopila todos los datos de los empleados
 * \ param quant Es la longitud de la matriz en s�
 * \ return El valor de confirmaci�n del �xito de las impresiones
 *
 */
int printList(sEmployee employeeData[],int quant);


#endif /* ARRAYEMPLOYEES_H_ */
