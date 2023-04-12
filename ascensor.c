#include<stdio.h>
#include<stdlib.h>

int main(){
    int pisos, usuario, actual;
    usuario=0;
    while(usuario !=4){
    printf("Menu \n 1 - Llamar ascensor \n 2 - Seleccionar piso \n 3 - Mostrar piso actual \n 4 - Salir\n");
    scanf("%d", &usuario);
    switch (usuario)
    {
    case 1:
        pisos=0;
        printf("Escriba el piso en el que se encuentra \n");
        scanf("%d", &actual);
        while(pisos<actual){
            printf("Ascensor en el piso %d \n", pisos);
            pisos ++;
        }
        if(pisos==actual){
            printf("El ascensor ya esta en su piso!\n");
        }
        break;
    case 2:
        printf("seleccione el piso al que desea ir:\n");
        scanf("%d", &actual);
        if(actual>pisos){
            for(pisos; pisos<actual; pisos++){
                printf("Ascensor en el piso %d \n", pisos);

            }
            if(pisos==actual){
                printf("Ding!\n");
            }
        }
        else if(actual<pisos){
            for(pisos; pisos>actual; pisos--){
                printf("Ascensor en el piso %d \n", pisos);

            }
            if(pisos==actual){
                printf("Ding!\n");
            }
        }
        else{
            printf("Ya se encuentra en el piso indicado\n");
        }
        break;
    case 3:
        switch (pisos)
        {
        case 0:
            printf("Se encuentra en la planta baja\n");
            break;
        case 1:
            printf("Se encuentra en el primer piso\n");
            break;
        case 2:
            printf("Se encuentra en el segundo piso\n");
            break;
        case 3:
            printf("Se encuentra en el tercer piso\n");
            break;
        case 4:
            printf("Se encuentra en el cuarto piso\n");
            break;
        case 5:
            printf("Se encuentra en el quinto piso\n");
            break;
        case 6:
            printf("Se encuentra en el sexto piso\n");
            break;
        case 7:
            printf("Se encuentra en el septimo piso\n");
            break;
        case 8:
            printf("Se encuentra en el octavo piso\n");
            break;
        case 9:
            printf("Se encuentra en el ultimo piso\n");
            break;
        default:
            break;
        }
    default:
        break;
        }
    }
    return 0;
}