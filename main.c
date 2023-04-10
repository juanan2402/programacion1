#include<stdio.h>
#include<stdlib.h>

main(){
    int pisos, usuario, actual;
    pisos=0;
    printf("Menu \n 1 - Llamar ascensor \n 2 - Seleccionar piso \n 3 - Mostrar piso actual \n");
    scanf("%d", &usuario);
    switch (usuario)
    {
    case 1:
        printf("Escriba el piso en el que se encuentra \n");
        scanf("%d", actual);
        while(pisos>actual){
            printf("Ascensor en el piso %d \n", piso);
            piso++;

        }
        if(pisos==actual){
            printf("Ding!\n");
        }
        break;
    case 2:
    
    default:
        break;
    }
}