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
    int radio, area, perimetro;
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
    int base, altura, area, perimetro;
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
    int lado, area, perimetro;
while(lado<=0){
        printf("Ingrese el lado del cuadrado\n");
        scanf("%f", &lado);
        if(lado<=0){
            printf("datos no validos\n");
        }
    }
    area=AreaCuadrado(lado);
    perimetro=PerCuadrado(lado);
    printf("El area de la figura dada es: %0.2f u^2 y su perimetro es de %0.2f u\n",area, perimetro );
}
void Triangulo(){
    int l1, l2, l3, altura, area, perimetro;
while(l1<=0 && l2<=0 && l3<=0 && altura<=0){
        printf("Ingrese la base y la altura del triangulo\n");
        scanf("%f %f", &l1, &altura);
        printf("Ingrese los otros 2 lados del triangulo: \n");
        scanf("%f %f", &l2, &l3);
        if(l1<=0 && l2<=0 && l3<=0 && altura<=0){
            printf("datos no validos\n");
        }
    }
    area=AreaTri(l1, altura);
    perimetro=PerTri(l1, l2, l3);
    printf("El area de la figura dada es: %0.2f u^2 y su perimetro es de %0.2f u\n",area, perimetro );
}
void Trapecio(){
    int l1, l2, B, b, altura, area, perimetro;
while(l1<=0 && l2<=0 && b<=0 && B<=0){
        printf("Ingrese la base mayor, la base menor y la altura del trapecio\n");
        scanf("%f %f %f", &B, &b, &altura);
        printf("Ingrese los otros 2 lados del trapecio: \n");
        scanf("%f %f", &l1, &l2);
        if(l1<=0 && l2<=0 && b<=0 && B<=0){
            printf("datos no validos\n");
        }
    }
    area=AreaTrapecio(B, b, altura);
    perimetro=PerTrapecio(B, b, l1, l2 );
    printf("El area de la figura dada es: %0.2f u^2 y su perimetro es de %0.2f u\n",area, perimetro );
}
void Menu(){
    int opcion, radio, base, altura, lado, l1, l2, l;
    int b, B, perimetro, area;
    printf("Ingresa la figura que se desea: \n 1-Circulo \2 2-Cuadrado \n 3-Rectangulo \n 4-Triangulo \n 5-Trapecio \n 6-Salir");
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
    while(salida==1){
    Menu();
    }
    return 0;
}
