#include<stdio.h>
#include<stdlib.h>

void Sumar(int s1, int s2){
    int suma;
    suma=s1+s2;
    printf("El resultado de la suma es %d \n", suma);
}
void Restar(int s1, int s2){
    int resta;
    resta=s1-s2;
    printf("El resultado de la resta es %d \n", resta);
}
void Multiplicar(int s1, int s2){
    int producto;
    producto=s1+s2;
    printf("El resultado de la multiplicacion es %d \n", producto);
}
void Dividir(int s1, int s2){
    float cociente;
    if(s2==0){
        printf("Datos no validos, no se puede dividir para cero\n");
    }
    else{
        cociente=s1+s2;
        printf("El resultado de la division es %0.2f \n", cociente);
    }
    
}
int main(){

    int operacion, d1, d2;
    
    while(operacion !=5){
        printf("Escoga una operacion:\n 1- Suma \n 2- Resta\n 3- Multiplicacion \n 4- Division \n 5- Salir \n");
        scanf("%d",&operacion);
        printf("Ingresar los datos: \n ");
        scanf("%d %d", &d1, &d2);
        switch (operacion)
        {
        case 1:
            Sumar(d1, d2);
            break;
        case 2:
            Restar(d1, d2);
            break;
        case 3:
            Multiplicar(d1, d2);
            break;
        case 4:
            Dividir(d1, d2);
            break;
        case 5:
                break;
            break;
        }
    } 
    return 0;
}