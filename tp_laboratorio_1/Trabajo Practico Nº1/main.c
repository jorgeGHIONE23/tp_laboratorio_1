#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    char seguir='s';

    int opcion=0;

    float numeroUno=0;

    float numeroDos=0;

    float suma;

    float resta;

    float division;

    float multiplicacion;

    float totalFactorial;


    while(seguir=='s')
    {
        printf("-----calculadora-TPN°1-----\n\n");

        printf("1- Ingresar primer numero (A=%.1f)\n", numeroUno);

        printf("2- Ingresar segundo numero (B=%.1f)\n", numeroDos);

        printf("3- Calcular la suma (A+B)\n");

        printf("4- Calcular la resta (A-B)\n");

        printf("5- Calcular la division (A/B)\n");

        printf("6- Calcular la multiplicacion (A*B)\n");

        printf("7- Calcular el factorial (A!)\n");

        printf("8- Calcular todas las operaciones\n");

        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("Ingresar primer numero: \n");
                scanf("%f", &numeroUno);
                break;


            case 2:
                system("cls");
                printf("Ingresar segundo numero: \n");
                scanf("%f", &numeroDos);
                break;


            case 3:
                system("cls");
                suma = sumar(numeroUno, numeroDos);
                printf("El resultado de %.2f + %.2f es: %.2f\n\n", numeroUno, numeroDos, suma);
                break;


            case 4:
                system("cls");
                resta = restar(numeroUno, numeroDos);
                printf("El resultado de %.2f - %.2f es: %.2f\n\n", numeroUno,
                       numeroDos, resta);
                break;


            case 5:
                system("cls");
                if(
                   numeroDos == 0)
                {
                    printf("No se puede dividir por cero.\n\n");
                }
                else
                {
                division = dividir(numeroUno,numeroDos);
                printf("El resultado de %.2f / %.2f es: %.2f\n\n", numeroUno,
                       numeroDos, division);
                }
                break;


            case 6:
                system("cls");
                multiplicacion = multiplicar(numeroUno,numeroDos);
                printf("El resultado de %.2f * %.2f es: %.2f\n\n", numeroUno, numeroDos, multiplicacion);
                break;


            case 7:
                system("cls");
                if(numeroUno < 0)
                {
                    printf("No existe el factorial de %.2f\nnumeroUno\n", numeroUno);
                }
                else
                {
                totalFactorial = factorial(numeroUno);
                printf("El factorial de %.2f es %.2f\n\n", numeroUno, totalFactorial);
                }

                if(numeroDos < 0)
                {
                    printf("No existe el factorial de %.2f\n\n", numeroDos);
                }
                else
                {
                totalFactorial = factorial(numeroDos);
                printf("El factorial de %.2f es %.2f\n\n",numeroDos, totalFactorial);
                }
                break;


            case 8:
                system("cls");

                suma = sumar(numeroUno,numeroDos);
                printf("El resultado de %.2f + %.2f es: %.2f\n\n", numeroUno, numeroDos, suma);

                resta = restar(numeroUno,numeroDos);
                printf("El resultado de %.2f - %.2f es: %.2f\n\n", numeroUno, numeroDos, resta);

                if(
                   numeroDos == 0)
                {
                    printf("No se puede dividir por cero.\n\n");
                }
                else
                {
                division = dividir(numeroUno, numeroDos);
                printf("El resultado de %.2f / %.2f es: %.2f\n\n", numeroUno, numeroDos, division);
                }

                multiplicacion = multiplicar(numeroUno, numeroDos);
                printf("El resultado de %.2f * %.2f es: %.2f\n\n", numeroUno,
                       numeroDos, multiplicacion);

                if(numeroUno < 0)
                {
                    printf("No existe el factorial de %.2f\n\n", numeroUno);
                }
                else
                {
                totalFactorial = factorial(numeroUno);
                printf("El factorial de %.2f es %.2f\n\n", numeroUno, totalFactorial);
                }

                if(
                   numeroDos < 0)
                {
                    printf("No existe el factorial de %.2f\n\n", numeroDos);
                }
                else
                {
                totalFactorial = factorial(numeroDos);
                printf("El factorial de %.2f es %.2f\n\n", numeroDos, totalFactorial);
                }
                break;



             case 9:
                system("cls");
                seguir = 'n';
                printf("\nHasta luego, espero haberlo ayudado.\n");
                break;
            default:
                system("cls");
                printf("La opcion es incorrecta, por favor reingrese una opcion correcta.\n\n");
                break;


        }

    }


    return 0;
}
