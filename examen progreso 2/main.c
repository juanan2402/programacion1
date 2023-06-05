#include<stdio.h>
#include<string.h>
#include"player.h"

void JuegoNuevo(){
        int mov=0;
        posX=0;
        posY=0;
        imprimirMatriz(posX, posY);
        while(posX!=4 && posY!=4){
            Movimiento();
            mov+=MovCounter(posX, posY);
        }
        Victoria(mov);
        
}

int main(){
    int salida=0;
    int opcion;
    
    do{
        printf("Bienvenidos al juego del laberinto!\n 1. Jugar \n 2. Creditos\n 3. Salir\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            JuegoNuevo();
            break;
        
        case 2:
            printf("Autor: Juan Serrano\n ID Banner: A00081331\n");
            break;
        case 3: 
            salida=1;
            break;
        }
        
        
    }while(salida!=1);
}