#include<stdio.h>
#include<math.h>
const int pi=3.141592;

float AreaCirculo(int radio){
    int area;
    radio=0;
    
    area=pow(radio, 2)*pi;
    return area;

}
float PerCirculo(float radio){
    float perimetro;
    perimetro=2*radio*pi;
    return perimetro;

}
float PerRect(float base, float altura){
    float perimetro;
    
    perimetro=2*(base+altura);
    return perimetro;

}
float AreaRect(float base, float altura){
    float area;
    area=base*altura;
    return area;

}
float PerCuadrado(float lado){
    float perimetro;
    perimetro=lado*4;
    return perimetro;

}
float AreaCuadrado(float lado){
    float area;
    
    
    area=pow(lado,2);
    return area;

}
float PerTri(float l1, float l2, float l3){
    float perimetro;
    
    perimetro=l1+l2+l3;
    return perimetro;

}
float AreaTri(float l, float altura){
    float area;
    area=(l*altura)/2;
    return area;

}
float AreaTrapecio(float B, float b, float h){
    float area;
    area=((b*B)*h)/2;
    return area;
}
float PerTrapecio(float B, float b, float l1, float l2 ){

    float perimetro;
    perimetro=b+B+l1+l2;
    return perimetro;
}
void Circulo()
void Menu(){
    int opcion, radio, base, altura, lado, l1, l2, l;
    int b, B, perimetro, area;
    printf("Ingresa la figura que se desea: \n 1-Circulo \2 2-Cuadrado \n 3-Rectangulo \n 4-Triangulo \n 5-Trapecio \n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:

        break;
    }
    while(lado<=0){
        printf("Ingrese el lado del cuadrado\n");
        scanf("%f", &lado);
        if(lado<=0){
            printf("datos no validos\n");
        }
    }
}
int main(){
    
    return 0;
}
