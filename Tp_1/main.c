#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int indiceMenu;
    int salir;
    float numeroIngresadoA;
    float numeroIngresadoB;
    float resultadoDivision;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    int resultadoFactorialA;
    int resultadoFactorialB;
    int contadorNumerosIngresados;
    int banderaCalculosRealizados;

    salir=0;
    contadorNumerosIngresados=0;
    banderaCalculosRealizados=0;
    while(salir==0){
        printf("1. Ingresar 1er operando (A=%.2f)\n", numeroIngresadoA);
        printf("2. Ingresar 2do operando (B=%.2f)\n", numeroIngresadoB);
        printf("3- Calcular todas las operaciones\n");
        printf("\t a) Calcular la suma (A+B)\n");
        printf("\t b) Calcular la resta (A-B)\n");
        printf("\t c) Calcular la division (A/B)\n");
        printf("\t d) Calcular la multiplicacion (A*B)\n");
        printf("\t e) Calcular el factorial (A!) y factorial (B!)\n");
        printf("4- Informar resultados\n");
        printf("5- Salir \n");
        fflush(stdin);
        printf("Ingrese opcion: ");
        scanf("%d", &indiceMenu);
        while(indiceMenu!=1&&indiceMenu!=2&&indiceMenu!=3&&indiceMenu!=4&&indiceMenu!=5)
        {
            printf("1. Ingresar 1er operando (A=%.2f)\n", numeroIngresadoA);
            printf("2. Ingresar 2do operando (B=%.2f)\n", numeroIngresadoB);
            printf("3. Calcular todas las operaciones\n");
            printf("4. Informar resultados \n");
            printf("5. Salir \n");
            fflush(stdin);
            scanf("%d", &indiceMenu);
        }
        switch(indiceMenu)
        {
            case 1:
                printf("Ingrese 1er operando: ");
                scanf("%f", &numeroIngresadoA);
                contadorNumerosIngresados++;
                break;
            case 2:
                printf("Ingrese el 2do operando: ");
                scanf("%f", &numeroIngresadoB);
                contadorNumerosIngresados++;
                break;
            case 3:
                if(contadorNumerosIngresados==0||contadorNumerosIngresados==1)
                {
                    printf("Error. No cargo datos en A o B.\n");
                }
                else
                {
                    printf("\t a) Calculando la suma (%.2f+%.2f) \n", numeroIngresadoA, numeroIngresadoB);
                    printf("\t b) Calculando la resta (%.2f-%.2f) \n", numeroIngresadoA, numeroIngresadoB);
                    printf("\t c) Calculando la division (%.2f/%.2f) \n", numeroIngresadoA, numeroIngresadoB);
                    printf("\t d) Calculando la multiplicacion (%.2f*%.2f) \n", numeroIngresadoA, numeroIngresadoB);
                    printf("\t e) Calculando el factorial (%f!) y factorial (%f!)\n", numeroIngresadoA, numeroIngresadoB);
                    resultadoSuma=Suma(numeroIngresadoA,numeroIngresadoB);
                    resultadoResta=Resta(numeroIngresadoA,numeroIngresadoB);
                    resultadoDivision=Division(numeroIngresadoA,numeroIngresadoB);
                    resultadoMultiplicacion=Multiplicacion(numeroIngresadoA,numeroIngresadoB);
                    resultadoFactorialA=Factorial(numeroIngresadoA);
                    resultadoFactorialB=Factorial(numeroIngresadoB);
                    banderaCalculosRealizados+=1;
                }
                break;
            case 4:
                if(banderaCalculosRealizados==0)
                {
                    printf("Error. No se realizaron los calculos de las operaciones.\n");
                }
                else
                {
                    printf ("El resultado de A+B es: %.2f\n",resultadoSuma);
                    printf ("El resultado de A-B es: %.2f\n",resultadoResta);
                    printf ("El resultado de la division es: %.2f\n",resultadoMultiplicacion);
                    if(resultadoDivision==0)
                    {
                        printf("No es posible dividir por cero");
                    }
                    else
                    {
                        printf ("El resultado de A/B es:: %.2f\n",resultadoDivision);
                    }
                    printf ("El factorial de A es: %d y el factorial de B es: %d\n",resultadoFactorialA, resultadoFactorialB);
                }
                break;
            case 5:
                salir=1;
                break;
        }
    }
    return 0;
}
