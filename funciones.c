#include "funciones.h"

float calcularTotalGastos(float arriendo, float sueldo) {
    float serviciosb, gastoslog, gastosmerc;
    
    printf("Ingrese los gastos de servicios basicos: ");
    scanf("%f", &serviciosb);

    printf("Ingrese los gastos de logistica: ");
    scanf("%f", &gastoslog);  

    printf("Ingrese los gastos de mercadeo: ");
    scanf("%f", &gastosmerc);  

    return serviciosb + arriendo + sueldo + gastoslog + gastosmerc;
}
