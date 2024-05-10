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

        
    }

    return 0;
}
