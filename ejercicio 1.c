#include <stdio.h>

int main(void) {
  float base, altura, area;
  
  printf("ingresar la base del rectangulo\n");
  scanf("%f", &base);
  printf("ingresar la altura del rectangulo\n");
  scanf("%f", &altura);
  area=base*altura;
  printf("area= %.2f\n",area);
  return 0;
}
