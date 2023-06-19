#include<stdio.h>

void Resta(float* p1, float* p2, float* r ){
    *r=(*p1)-(*p2);
    
}
void Suma(float* p1, float* p2, float* r ){
    *r=(*p1)+(*p2);
    
}
void Multiplicacion(float* p1, float* p2, float* r ){
    *r=(*p1)*(*p2);
}
void Division(float* p1, float* p2, float* r ){
    
    if(*p2!=0){
        *r=(*p1)/(*p2);
    }

    else{
        printf("Datos no validos\n");
        *r=-1;

    }
        
}
void SumaArregloEscalar(int tamanio, float* arreglo, float escalar){
    for(int i=0; i<tamanio; i++){
        *arreglo+=escalar;
        arreglo++;
    }
}
void SumaSerie(int tamanio, float* arreglo, float escalar){
    float aux;
    for(int i=0; i<tamanio; i++){

        aux=*arreglo+escalar;
        arreglo++;
        *arreglo=aux;
    }
}