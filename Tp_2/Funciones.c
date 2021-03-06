#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include "ArrayEmployees.h"
#include "Funciones.h"

sEmployee getEmployee(sEmployee employeeData)
{
    int sectorNumber;

    fflush(stdin);
    getCharString("\nIngrese el nombre: ", "Error! Ingrese solamente letras. Vuelva a intentarlo: ", employeeData.name);
    removeBackslashN(employeeData.name);
    firstLetterInCaps(employeeData.name);

    fflush(stdin);
    getCharString("\nIngrese el apellido: ", "Error! Ingrese solamente letras. Vuelva a intentarlo: ", employeeData.lastName);
    removeBackslashN(employeeData.lastName);
    firstLetterInCaps(employeeData.lastName);

    fflush(stdin);
    printf("\nIngrese el salario: ");
    getAndValidateIntAndFloatNumber("%f",&employeeData.salary);
    while(employeeData.salary < 1){
        printf("\nEl salario debe ser un numero mayor a cero. Ingrese nuevamente el salario: ");
        scanf("%f",&employeeData.salary);
    }

    fflush(stdin);
    sectorNumber = getInt("\nIngrese el sector: ");
    while(sectorNumber < 1)
    {
        fflush(stdin);
        getInt("\nEl sector debe ser un numero mayor a cero. Ingrese nuevamente el sector: ");
    }
    employeeData.sector = sectorNumber;

    return employeeData;
}

int getCharString(char message[], char errorMessage[], char input[])
{
    char aux[51];
    int returnValue = 0;
    printf(message);
    fflush(stdin);
    fgets(aux,sizeof(aux),stdin);
    while(charactersOnly(aux) == 0)
    {
        printf(errorMessage);
        fflush(stdin);
        fgets(aux,sizeof(aux),stdin);
    }
    if(charactersOnly(aux) == 1)
    {
        returnValue = 1;
        strcpy(input,aux);
        return returnValue;
    }
    return returnValue;
}

int charactersOnly(char string[])
{
    int i;
    int ifIsAlpha;
    int sz;

    sz = strlen(string)-1;

    for(i=0; i< sz; i++)
    {
        if((!(isalpha(string[i]) == 0)) || string[i] == ' ')
        {
            ifIsAlpha = 1;
        }
        else
        {
            ifIsAlpha = 0;
            break;
        }
    }
    return ifIsAlpha;
}

int getAndValidateIntAndFloatNumber(const char* floatMask, void* variable)
{
    int input;
    int flagConfirmation = 0;
    int returnValue = 0;

    fflush(stdin);
    if(!scanf(floatMask, variable))
    {
        while(flagConfirmation == 0)
        {
            while((input = getchar()) != '\n' && input != EOF);
            printf("\nIngreso Invalido.\nVuelva a intentarlo: ");
            fflush(stdin);
            if(scanf(floatMask, variable))
            {
                fflush(stdin);
                flagConfirmation = 1;
                returnValue = 1;
            }
        }
        fflush(stdin);
        return returnValue;
    }
    if(getchar() != '\n')
    {
        while(flagConfirmation == 0)
        {
            while((input = getchar()) != '\n' && input != EOF);
            printf("\nIngreso Invalido.\nVuelva a intentarlo: ");
            if(scanf(floatMask, variable))
            {
                flagConfirmation = 1;
                returnValue = 1;
            }
        }
        return returnValue;
    }
    return returnValue;
}

int getInt(char message[])
 {
    char aux[256];
    int integer;
    int integerValidation;

    printf(message);
    scanf("%s",aux);
    fflush(stdin);
    integerValidation = isInt(aux);

    while(integerValidation == 0)
    {
        printf("\nError! Eso no es un numero. Ingrese un numero: ");
        scanf("%s",aux);
        fflush(stdin);
        integerValidation = isInt(aux);
        printf("\n");
    }
    if(integerValidation == 1)
    {
        integer = atoi(aux);
    }
    fflush(stdin);
    return integer;
 }

int isInt(char string[])
{
    int i=0;
    int returnValue = 1;

    for(i=0; string[i] != '\0'; i++)
    {
        if(string[i] < '0' || string[i] > '9')
        {
            returnValue = 0;
            return returnValue;
        }
    }
    return returnValue;
}

char removeBackslashN(char string[])
{
    int i;
    for(i=0;string[i] != '\0';i++)
    {
        if(string[i] == '\n')
        {
            string[i] = '\0';
        }
    }
    return string[i];
}

int firstLetterInCaps(char string[])
{
    int i;
    strlwr(string);
    for(i = 0; i < strlen(string); i++)
    {
        if(i == 0 || (string[i-1] == ' ' && string[i] >= 'a' && string[i] <= 'z'))
        {
            string[i] = toupper(string[i]);
        }
    }
    return 1;
}
