#include<stdio.h>
#include<math.h>
const int pi=3.141592;

float AreaCirculo(){
    int radio, area;
    
    while(radio<=0){
        printf("Ingrese el radio del circulo\n");
        scanf("%f", radio);
        if(radio<=0){
            printf("Radio no valido\n");
        }
    }
    area=pow(radio, 2)*M_PI();

}
float PerCirculo(){
    int radio, perimetro;
    
    while(radio<=0){
        printf("Ingrese el radio del circulo\n");
        scanf("%f", radio);
        if(radio<=0){
            printf("Radio no valido\n");
        }
    }
    perimetro=2*radio*pi;
    return perimetro;

}
int main(){
    AreaCirculo();
    return 0;
}
