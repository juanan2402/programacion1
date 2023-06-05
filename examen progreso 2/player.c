#include<stdio.h>
#include<string.h>
#include"maze.h"

int posX, posY;

void Movimiento(){
    //fflush( stdin );
    char mov;
    printf("Ingresa un movimiento con WASD\n");
    scanf("%c", &mov);
    
    switch (mov)
    {
    case 'w':
        if(movimientoValido(posX, posY)){
            posY--;
            imprimirMatriz(posX, posY);
        }
        else{
            printf("Movimiento no valido\n");
        }
        break;
    case 'd':
        if(movimientoValido(posX, posY)){
            posX++;
            imprimirMatriz(posX, posY);
        }
        else{
            printf("Movimiento no valido\n");
        }
        break;
    case 'a':
        if(movimientoValido(posX, posY)){
            posX--;
            imprimirMatriz(posX, posY);
        }
        else{
            printf("Movimiento no valido\n");
        }
        break;
    case 's':
        if(movimientoValido(posX, posY)){
            posY++;
        }
        else{
            printf("Movimiento no valido\n");
        }
        break;
    }
    
    
    
    
}

int MovCounter(int posX, int posY){
    int mov;
    if(movimientoValido(posX, posY)){
        return 1;
    }
    else{
        return 0;
    }
}
void Victoria(int mov ){
    printf("Felicidades! has ganado\n");
    if(mov<=8){
        printf("Eres un Pro! \n");
    }
    else if(mov<15){
        printf("Eres novato\n");
    }
    else{
        printf("Eres un noob!\n");
    }
}
