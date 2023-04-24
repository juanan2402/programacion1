#include<stdio.h>
#include "Operaciones.h"

void Imprimir(float dato){
    printf("El resultado de la operacion es: %0.2f \n", dato);

}
int Menu(){
    int operacion, d1, d2;
    float resultado;
    printf("Escoga una operacion:\n 1- Suma \n 2- Resta\n 3- Multiplicacion \n 4- Division \n 5- Salir \n");
        scanf("%d",&operacion);
        if(operacion!=5){
        printf("Ingresar los datos: \n ");
        scanf("%d %d", &d1, &d2);
        switch (operacion)
        {
        case 1:
            resultado = Sumar(d1, d2);
            
            break;
        case 2:
            resultado = Restar(d1, d2);
            
            break;
        case 3:
            resultado = Multiplicar(d1, d2);
            
            break;
        case 4:
            resultado = Dividir(d1, d2);
            
            break;
        }
        Imprimir(resultado);
        }
        return operacion;
}

int main(){
    int input;
    
    while(input!=5){
        input=Menu();
    } 
    return 0;
}