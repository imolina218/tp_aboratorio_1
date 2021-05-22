#ifndef MENU_C_INCLUDED
#define MENU_C_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Menu.h"
#include "ArrayEmployees.h"
#include "Funciones.h"
#define SIZE 1000

void mainMenu(void)
{
    int option;
    sEmployee employeesListing[SIZE];//MODIFY ARRAY SIZE
    int freeRowEmployeesList;
    int lastId;
    lastId = 0;

    initArrayAsEmpty(employeesListing, SIZE);
    do
    {
        printf("\n");
        printf("\n                             ADMINISTRACION DE EMPLEADOS          ");
        printf("\n");
        option = getInt("\nSelecciona una opcion\n\n1. ALTA\n2. MODIFICAR\n3. BAJA\n4. INFORMAR\n   -Lista de empleados por apellido y sector en orden ascendente\n   -Promedio de todos los salarios\n0. SALIR\n\nIngrese una opcion: ");
        switch(option)
        {
        case 1:
            freeRowEmployeesList = searchListingFirstEmptyPlace(employeesListing, SIZE);
            if(freeRowEmployeesList == -1 || freeRowEmployeesList == SIZE)
            {
                printf("\n");
                printf("\n\nEl listado esta lleno. Elimina algun empleado para ingresar uno nuevo\n\n");
                printf("\n");
            }
            else
            {
                lastId = createId(employeesListing,lastId,freeRowEmployeesList);
                employeesListing[freeRowEmployeesList] = getEmployee(employeesListing[freeRowEmployeesList]);
                employeesListing[freeRowEmployeesList].isEmpty = changeIsEmptyState(employeesListing[freeRowEmployeesList]);
                employeesListing[freeRowEmployeesList].id = lastId;
                printf("\n");
                printf("Se le ha asignado la ID %04d.",lastId);
                printf("\n");
            }
            system("pause");
            system("cls");
            break;
        case 2:
            if(lastId == 0)
            {
                printf("\n");
                printf("\nNo se han ingresado empleados hasta el momento.\n");
                printf("\n");
            }
            else
            {
                modifyEmployee(employeesListing, SIZE);
            }
            system("pause");
            system("cls");
            break;
        case 3:
            if(lastId == 0)
            {
                printf("\n");
                printf("\nNo se han ingresado empleados hasta el momento.\n");
                printf("\n");
            }
            else
            {
                deleteEmployee(employeesListing, SIZE);
            }
            system("pause");
            system("cls");
            break;
        case 4:
            if(lastId == 0)
            {
                printf("\n");
                printf("\nNo se han ingresado empleados hasta el momento.\n");
                printf("\n");
            }
            else
            {   option = getInt("\nSelecciona una opcion\n\n1. MOSTRAR EMPLEADOS EN ORDEN ASCENDENTE\n2. MOSTRAR EMPLEADOS EN ORDEN DESCENDENTE\n\nIngrese una opcion: ");
                switch(option)
                {
                    case 1:
                        sortEmployeesAscendent(employeesListing,SIZE);
                        break;
                    case 2:
                        sortEmployeesDescendent(employeesListing,SIZE);
                        break;
                }
                printList(employeesListing,SIZE);
            }
            system("pause");
            system("cls");
            break;
        case 0:
            printf("\n");
            printf("\n El programa procederá a cerrarse");
            printf("\n");
            system("pause");
            break;
        default:
            printf("Opcion invaclida. Elija nuevamente.\n\n");
            system("pause");
            system("cls");
            break;
        }
    }while(option!=0);

}

#endif // MENU_C_INCLUDED
