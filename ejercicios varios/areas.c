#include<stdio.h>
#include<math.h>
const int pi=3.141592;
int salida = 0;

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
void Circulo(){
    float radio, area, perimetro;
while(radio<=0){
        printf("Ingrese el radio del circulo\n");
        scanf("%f", &radio);
        if(radio<=0){
            printf("datos no validos\n");
        }
    }
    area=AreaCirculo(radio);
    perimetro=PerCirculo(radio);
    printf("El area de la figura dada es: %0.2f u^2 y su perimetro es de %0.2f u\n",area, perimetro );
}
void Rectangulo(){
    float base, altura, area, perimetro;
while(base<=0 && altura<=0){
        printf("Ingrese la base y la altura del circulo\n");
        scanf("%f %f", &base, &altura);
        if(base<=0 && altura<=0){
            printf("datos no validos\n");
        }
    }
    area=AreaRect(base, altura);
    perimetro=PerRect(base, altura);
    printf("El area de la figura dada es: %0.2f u^2 y su perimetro es de %0.2f u\n",area, perimetro );
}
void Cuadrado(){
    float lado, area, perimetro;
    printf("Ingrese el lado del cuadrado\n");
    scanf("%f", &lado);
    while(lado<=0){
        printf("datos no validos\n");
        printf("Ingrese el lado del cuadrado\n");
        scanf("%f", &lado);
    }
    area=AreaCuadrado(lado);
    perimetro=PerCuadrado(lado);
    printf("El area de la figura dada es: %0.2f u^2 y su perimetro es de %0.2f u\n",area, perimetro );
}
void Triangulo(){
    float l1, l2, l3, altura, area, perimetro;
    printf("Ingrese la base y la altura del triangulo\n");
    scanf("%f %f", &l1, &altura);
    printf("Ingrese los otros 2 lados del triangulo: \n");
    scanf("%f %f", &l2, &l3);
    while(l1<=0 && l2<=0 && l3<=0 && altura<=0 && (l1+l2)<=l3 && (l3+l2)<=l1 && (l1+l3)<=l2 && altura>=l1){
        printf("datos no validos\n");
        printf("Ingrese la base y la altura del triangulo\n");
        scanf("%f %f", &l1, &altura);
        printf("Ingrese los otros 2 lados del triangulo: \n");
        scanf("%f %f", &l2, &l3);
    }
    area=AreaTri(l1, altura);
    perimetro=PerTri(l1, l2, l3);
    printf("El area de la figura dada es: %0.2f u^2 y su perimetro es de %0.2f u\n",area, perimetro );
}
void Trapecio(){
    float l1, l2, B, b, altura, area, perimetro;
    printf("Ingrese la base mayor, la base menor y la altura del trapecio\n");
    scanf("%f %f %f", &B, &b, &altura);
    printf("Ingrese los otros 2 lados del trapecio: \n");
    scanf("%f %f", &l1, &l2);
    while(l1<=0 && l2<=0 && b<=0 && B<=0){
        printf("Datos no validos \n");
        printf("Ingrese la base mayor, la base menor y la altura del trapecio\n");
        scanf("%f %f %f", &B, &b, &altura);
        printf("Ingrese los otros 2 lados del trapecio: \n");
        scanf("%f %f", &l1, &l2);
    }
    area=AreaTrapecio(B, b, altura);
    perimetro=PerTrapecio(B, b, l1, l2 );
    printf("El area de la figura dada es: %0.2f u^2 y su perimetro es de %0.2f u\n",area, perimetro );
}
void Menu(){
    int opcion;
    printf("Ingresa la figura que se desea: \n 1-Circulo \n 2-Cuadrado \n 3-Rectangulo \n 4-Triangulo \n 5-Trapecio \n 6-Salir \n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1:
        Circulo();
        break;

        case 2:
        Cuadrado();
        break;

        case 3:
        Rectangulo();
        break;

        case 4:
        Triangulo();
        break;

        case 5:
        Trapecio();
        break;

        case 6:
        salida=1;
        break;
    }
    
}
int main(){
    while(salida!=1){
    Menu();
    }
    return 0;
}
