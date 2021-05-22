#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>
#include "ArrayEmployees.h"
#include "Funciones.h"

int initArrayAsEmpty(sEmployee employeeData[], int quant)
{
    int i;
    int result = 0;

    for(i = 0 ; i < quant; i++)
    {
        employeeData[i].isEmpty = 1;
        result = 1;
    }
    return result;
}

int searchListingFirstEmptyPlace(sEmployee employeeData[], int quant)
{
    int i;
    int index = -1;

    for(i = 0; i< quant; i++)
    {
        if(employeeData[i].isEmpty == 1)
        {
            index = i;
            break;
        }
    }
    return index;
}

int changeIsEmptyState(sEmployee employeeData)
{
    int isEmptyStatus;

    if(employeeData.isEmpty == 0)
    {
        isEmptyStatus = 1;
    }
    else
    {
        isEmptyStatus = 0;
    }
    return isEmptyStatus;
}

int createId(sEmployee employeeData[],int lastId, int quant)
{
    int i;
    int actualId;

    actualId = lastId + 1;
    for(i=0;i==quant;i++)
    {
        employeeData[i].id = actualId;
        break;
    }
    return actualId;
}

int sortEmployeesAscendent(sEmployee employeeData[], int quant)
{
    int i;
    int j;
    int result = 0;
    sEmployee auxLastName;
    sEmployee auxSector;

    for(i = 0; i < quant; i++)
    {
        for(j = i+1; j < quant; j++)
        {
            if(strcmp(employeeData[i].lastName, employeeData[j].lastName) > 0)//ordenamiento ascendente por apellido
            {
                auxLastName = employeeData[i];
                employeeData[i] = employeeData[j];
                employeeData[j] = auxLastName;
                result = 1;
            }
            if(((strcmp(employeeData[i].lastName, employeeData[j].lastName) == 0) && ((employeeData[i].sector > employeeData[j].sector) > 0)))
            {
                auxSector = employeeData[i];
                employeeData[i] = employeeData[j];
                employeeData[j] = auxSector;
                result = 1;
            }
        }
    }
    return result;
}

int modifyEmployee(sEmployee employeeData[], int quant)
{
    int i;
    int employeeIdToModify;
    sEmployee auxiliarMod;
    int confirmation;
    int successReturn;
    int flagId = 0;

    employeeIdToModify = getInt("\nIngrese el ID del empleado que quiere modificar: ");
    printf("\n");

    if(employeeData != NULL && quant > 0)
    {
        for(i=0;i<quant;i++)
        {
            if(employeeData[i].id == employeeIdToModify)
            {
                flagId = 1;
                auxiliarMod = getEmployee(employeeData[i]);
                confirmation = getInt("\nEsta seguro que quiere modificar los datos? Ingrese 1 para si o cualquier otra tecla para no modificar los datos: ");
                if(confirmation != 1)
                {
                    printf("\n\nNo se aplicaron las modificaciones deseadas.");
                    successReturn = 0;
                    break;
                }
                else
                {
                    employeeData[i] = auxiliarMod;
                    successReturn = 1;
                    break;
                }
            }
        }
        if(flagId == 0)
        {
            printf("\nNo existe un/a empleado/a con la id %04d.\n ",employeeIdToModify);
            successReturn = 0;
        }
    }
    printf("\n");
    return successReturn;
}

int deleteEmployee(sEmployee employeeData[], int quant)
{
	int i;
	    int employeeIdToDelete;
	    int confirmation;
	    int deletionResult;
	    int flagId = 0;

	    employeeIdToDelete = getInt("\nIngresa el ID del empleado a eliminar: ");

	    if(employeeData != NULL)
	    {
	        for(i = 0; i < quant; i++)
	        {
	            if(employeeIdToDelete == employeeData[i].id && employeeData[i].isEmpty == 0)
	            {
	                flagId = 1;
	                confirmation = getInt("\nEsta seguro que quiere eliminar el/la empleado/a?\n\nIngrese 1 para si, cualquier tecla para no eliminarlo/a: ");
	                if(confirmation == 1)
	                {
	                    employeeData[i].isEmpty = changeIsEmptyState(employeeData[i]);
	                    printf("\nEl/la empleado/a %s, %s (ID: %04d) ha sido eliminado del sistema.\n",employeeData[i].lastName,employeeData[i].name,employeeIdToDelete);
	                    deletionResult = 1;
	                    break;
	                }
	                else
	                {
	                    printf("No se eliminara el/la empleado/a.");
	                    deletionResult = 0;
	                    break;
	                }
	            }
	            else
	            {
	                printf("No existe un/a empleado/a con la id %04d\n\n", employeeIdToDelete);
	                deletionResult = 0;
	                break;
	            }
	        }
	        if(flagId == 0)
	        {
	            printf("\nNo existe un/a empleado/a con la id %04d.\n ",employeeIdToDelete);
	            deletionResult = 0;
	        }
	    }
	    return deletionResult;
}

int sortEmployeesDescendent(sEmployee employeeData[], int quant)
{
    int i;
    int j;
    int result = 0;
    sEmployee auxLastName;
    sEmployee auxSector;

    for(i = 0; i < quant; i++)
    {
        for(j = i+1; j < quant; j++)
        {
            if(strcmp(employeeData[i].lastName, employeeData[j].lastName) < 0)//ordenamiento por apellido
            {
                auxLastName = employeeData[i];
                employeeData[i] = employeeData[j];
                employeeData[j] = auxLastName;
                result = 1;
            }
            if(((strcmp(employeeData[i].lastName, employeeData[j].lastName) == 0) && ((employeeData[i].sector < employeeData[j].sector) > 0)))
            {
                auxSector = employeeData[i];
                employeeData[i] = employeeData[j];
                employeeData[j] = auxSector;
                result = 1;
            }
        }
    }
    return result;
}

float totalWage(sEmployee employeeData[], int quant)
{
    int i;
    float totalWage;

    if(employeeData != NULL && quant > 0)
    {
        for(i=0; i<quant; i++)
        {
            if(employeeData[i].isEmpty == 0)
            {
                totalWage = totalWage + employeeData[i].salary;
            }
        }
    }
    return totalWage;
}

float averageWage(sEmployee employeeData[], int quant)
{
    int i;
    float sum = 0;
    float finalAverage;
    int wageCounter = 0;

    if(employeeData != NULL && quant > 0)
    {
        for(i=0; i<quant; i++)
        {
            if(employeeData[i].isEmpty == 0)
            {
                sum = sum + employeeData[i].salary;

                wageCounter++;
            }
        }
    }
    finalAverage = sum / wageCounter;
    return finalAverage;
}

int employeesWageExceedAverage(sEmployee employeeData[], int quant)
{
    int i;
    float wagesAverage;
    int wagesCounter = 0;
    wagesAverage = averageWage(employeeData,quant);

    if(employeeData != NULL && quant > 0)
    {
        for(i=0; i<quant; i++)
        {
            if(employeeData[i].isEmpty == 0 && employeeData[i].salary > wagesAverage)
            {
                wagesCounter++;
            }
        }
    }
    return wagesCounter;
}

int printList(sEmployee employeeData[],int quant)
{
    int i;
    int retorno = 0;
    float employeesTotalWage;
    float employeesAverageWage;
    int employeesExceedAverageWage;
    employeesTotalWage = totalWage(employeeData,quant);
    employeesAverageWage = averageWage(employeeData,quant);
    employeesExceedAverageWage = employeesWageExceedAverage(employeeData,quant);

    if(employeeData != NULL && quant > 0)
    {
        printf("\n");
        printf(" ID       APELLIDO             NOMBRE               SALARIO              SECTOR");
        printf("\n");

        for(i=0; i < quant; i++)
        {
            if(employeeData[i].isEmpty == 0)
            {
                printf(" %-8d %-20s %-20s %-20.2f%-5d\n",employeeData[i].id,employeeData[i].lastName,employeeData[i].name,employeeData[i].salary,employeeData[i].sector);
            }
        }
        printf("\n");
        printf("El total de los salarios es %.2f",employeesTotalWage);
        printf("\nEl promedio de los salarios es %.2f",employeesAverageWage);
        printf("\nEmpleados que superan el salario promedio: %d",employeesExceedAverageWage);
        printf("\n\n");
        retorno = 1;
    }

    return retorno;
}
