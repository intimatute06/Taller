#include <stdio.h>

int main(void) {
    float serviciosb, arriendo, sueldo, gastoslog, gastosmerc, totalgast;
    float ingresosmes, ventas, inversiones, totaling, ingtotal;
  
  
    
    arriendo = 400;
    sueldo = 4000;
     totalgast = serviciosb + arriendo + sueldo + gastoslog + gastosmerc;

    float primerahorro;
    primerahorro = 0;

    for (int mes = 1; mes <= 6; mes++) {
        printf("\nMes %d\n", mes);
        printf("Ingrese los gastos de sevicios basicos: ");
        scanf("%f", &serviciosb);

        printf("Ingrese los gastos de logistica: ");
        scanf("%f", &gastoslog);  

        printf("Ingrese los gastos de mercadeo: ");
        scanf("%f", &gastosmerc);  

        totalgast = serviciosb + arriendo + sueldo + gastoslog + gastosmerc;

        printf("Su total de gastos es: %.2f\n", totalgast);

        printf("Ingrese los ingresos del mes:");
        scanf("%f", &ingresosmes);
         printf("Ingrese las ventas:");
         scanf("%f", &ventas);
         printf("Ingrese las inversiones:");
        scanf("%f", &inversiones);

         totaling = ingresosmes + ventas + inversiones;
        printf("Su ingreso es: %.2f\n", totaling);

        ingtotal = totaling - totalgast;

        printf("Su total de ingresos es. %.2f\n",ingtotal);

        
        
         

       
    }

    return 0;
}
