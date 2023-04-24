#include<stdio.h>


int Sumar(int s1, int s2){
    int suma;
    suma=s1+s2;
    
    return suma;
}
int Restar(int s1, int s2){
    int resta;
    resta=s1-s2;
    return resta;
}
int Multiplicar(int s1, int s2){
    int producto;
    producto=s1*s2;
    return producto;
}
float Dividir(int s1, int s2){
    float cociente;
    if(s2==0){
        printf("Datos no validos, no se puede dividir para cero\n");
    }
    else{
        cociente=s1/s2;
        return cociente;
    }
    
}
