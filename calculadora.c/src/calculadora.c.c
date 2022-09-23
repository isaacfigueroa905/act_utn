/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include "funt.h"


int main()
{
    int primerNumero;
    int segundoNumero;
    int unicoNumero;
    int suma;
    int resta;
    int multiplicacion;
    int division;
    int factorial;
    int resultado;
    int opcion;





    do
    {
        printf("seleccione una opcion:\n");
        printf(" 1: Sumar numeros.\n 2: Restar numeros.\n 3: Multiplicar numeros.\n 4: Dividir numeros.\n 5: Factorial.\n 6: Salir." );
        scanf("%d", &opcion);

         while(opcion!=1 || opcion!=2 || opcion!=3 || opcion!=4 || opcion!=5 || opcion!=6)
        {
            printf("ERROR, seleccione una opcion valida:\n");
            printf(" 1: Sumar numeros.\n 2: Restar numeros.\n 3: Multiplicar numeros.\n 4: Dividir numeros.\n 5: Factorial.\n 6: Salir." );
            scanf("%d", &opcion);
        }

        switch(opcion)
        {
            case 1:
                printf("sumar");
                printf("ingresar un numero");
                scanf("%d", &primerNumero);
                printf("ingresar otro numero");
                scanf("%d", &segundoNumero);

                suma=SumarNumeros(primerNumero, segundoNumero);
                return suma;

                break;

            case 2:
                printf("restar");
                printf("ingresar un numero");
                scanf("%d", &primerNumero);
                printf("ingresar otro numero");
                scanf("%d", &segundoNumero);

                resta=RestarNumeros(primerNumero,segundoNumero);
                return resta;

                break;

            case 3:
                printf("multiplicar");
                printf("ingresar un numero");
                scanf("%d", &primerNumero);
                printf("ingresar otro numero");
                scanf("%d", &segundoNumero);

                multiplicacion=MultiplicarNumeros(primerNumero,segundoNumero);
                return multiplicacion;

                break;

            case 4:
                printf("dividir");
                printf("ingresar un numero");
                scanf("%d", &primerNumero);
                printf("ingresar otro numero");
                scanf("%d", &segundoNumero);

                division=DividirNumeros(primerNumero,segundoNumero);
                return division;

                break;

            case 5:
                printf("factorial");
                printf("ingresar numero");
                scanf("%d", &unicoNumero);

                factorial=CalcularFactorial(unicoNumero);
                return resultado;
                break;


        }




    }while(opcion!=6);
}
