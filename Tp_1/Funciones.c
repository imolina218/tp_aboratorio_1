#include "funciones.h"

float Suma(float numeroA, float numeroB)
{
    float suma;
    suma=numeroA+numeroB;
    return suma;
}

float Resta(float numeroA, float numeroB)
{
    float resta;
    resta=numeroA+numeroB;
    return resta;
}

float Division(float dividendo,float divisor)
{
    float resultado;

    if(dividendo==0||divisor==0)
    {
        printf("\t No se puede dividir por 0.\n");
    }
    else
    {
        resultado=dividendo/divisor;
    }

    return resultado;
}

float Multiplicacion(float numeroA, float numeroB)
{
    long long int producto;
    producto=numeroA*numeroB;
    return producto;
}

int Factorial(float numero)
{
    int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else if(numero<0)
    {
        printf("\tNo se puede factorizar numeros negativos\n");
    }
    else
    {
        resultado =(int) numero * Factorial(numero - 1);
    }

    return resultado;
}

