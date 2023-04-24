#include<stdio.h>
#include<math.h>

float RaizCuadrada(int x){
  return sqrt(x);
  
}
float Cuadrado(int x){
  return pow(x, 2);
}
float calcularDistancia(float x1, float y1, float x2, float y2){
  int distancia;
  distancia = RaizCuadrada(Cuadrado(x2-x1)+Cuadrado(y2-y1));
  return distancia;
}
int main(){
    float x1, x2, y1, y2;
  printf("Ingresar las coordenadas x, y del primer punto:\n ");
  scanf("%f %f", &x1, &y1);
  printf("Ingresar las coordenadas x, y del segundo punto:\n ");
  scanf("%f %f", &x2, &y2);
  printf("La distancia entre los puntos es: \n%0.2f",calcularDistancia(x1, y1, x2, y2));
}
