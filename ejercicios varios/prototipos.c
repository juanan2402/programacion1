#include<stdio.h>

int Suma(int num1, int num2);

int main(){
    printf(Suma(2, 3));
}

int Suma(int num1, int num2){
    int suma;
    suma= num1+num2;
    return suma;
}