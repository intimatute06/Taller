#include <stdio.h>
#include "funciones.h"

int main(void) {
    float arriendo = 400;
    float sueldo = 4000;
    float totalgast;
    float primerahorro = 0;

    for (int mes = 1; mes <= 6; mes++) {
        printf("\nMes %d\n", mes);
        totalgast = calcularTotalGastos(arriendo, sueldo);
        printf("Su total de gastos es: %.2f\n", totalgast);
        
        float ingresosmes, ventas, inversiones, totaling, ingtotal;
        printf("Ingrese los ingresos del mes:");
        scanf("%f", &ingresosmes);
        printf("Ingrese las ventas:");
        scanf("%f", &ventas);
        printf("Ingrese las inversiones:");
        scanf("%f", &inversiones);
        
        totaling = ingresosmes + ventas + inversiones;
        printf("Su ingreso es: %.2f\n", totaling);
        
        ingtotal = totaling - totalgast;
        printf("Su total de ingresos es: %.2f\n", ingtotal);
    }

    return 0;
}
