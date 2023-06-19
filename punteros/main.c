#include<stdio.h>
#include "operaciones.h"


int main(void){
    float a, b, c;
    int n;
    float arreglo[100];
    float arreglo2[100];
    float escalar;
    float* p1;
    float* p2;
    float* r;

    p1=&a;
    r=&c;
    p2=&b;
    //Ingreso de datos
    printf("ingresar un valor:\n");
    scanf("%f", &a);
    printf("ingresar otro valor:\n");
    scanf("%f", &b);
//Operaciones
//Suma

    printf("Suma:\n");
    Suma(p1, p2, r);
    printf("Resultado: %0.2f\n", *r);

//Resta
    printf("Resta:\n");
    Resta(p1, p2, r);
    printf("Resultado: %0.2f\n", *r);

//Division
    printf("Division:\n");
    Division(p1, p2, r);
    printf("Resultado: %0.2f\n", *r);
    
//Multiplicacion
    printf("Multiplicacion:\n");
    Multiplicacion(p1, p2, r);
    printf("Resultado: %0.2f\n", *r);

//Suma Escalar
    printf("Ingresar el tamaño del vector:\n");
        scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Ingresar un valor para el vector:\n");
        scanf("%f", &arreglo[i]);
    }


    printf("Ingresar un escalar:\n");
    scanf("%f", &escalar);


    SumaArregloEscalar(n, arreglo, escalar );

    for(int i=0; i<n; i++){
        printf("%f\n", arreglo[i]);
    }
    printf("--------- Serie-----\n");
    printf("Ingresar un primer valor:\n");
    scanf("%f", &arreglo2[0]);

    SumaSerie(n, arreglo2, escalar );
    for(int i=0; i<n; i++){
        printf("%f\n", arreglo2[i]);
    }

    return 0;



}