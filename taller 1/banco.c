#include <stdio.h>
#include <string.h>

int main(void) {
  char nombre[100];
  int pin, ingreso_pin, menu;
  float fondos, monto;
  fondos=1000;
  const char usuario[]="juan";
  pin=1234;
  printf("ingresar su nombre de usuario: ");
  scanf("%s",nombre);
  printf("ingresar su pin: ");
  scanf("%d",&ingreso_pin);
  if(pin==ingreso_pin && strcmp(nombre, usuario)==0){
    printf("Menu\n");
    printf("1-retiro\n");
    printf("2-deposito\n");
    scanf("%d",&menu);
    switch (menu)
{
    case 1:
        printf("Ingresar el monto que desea retirar\n");
        scanf("%f",&monto);
        if(monto<=500){
          if(monto>fondos){
            printf("No tiene suficientes fondos\n");
          }
          else{
            fondos-=monto;
          }
        }
        else{
        printf("monto esta fuera del rango permitido\n");
      }
        break;
  case 2:
        printf("Ingresar el monto que desea depositar\n");
        scanf("%f",&monto);
        if(monto>0){
          fondos+=monto;
        }
        break;

}
   printf("Usuario: %s\n",nombre);
  printf("Fondos: %.2f\n",fondos);
  }
  else{
    printf("usuario o pin incorrectos\n");
  }
  
  return 0;
}