//Juan Andrés Serrano
//Alexander Sanchez
//Nicolas Cajas

//Programación 1
//taller 1
#include <stdio.h>
#include <string.h>
#include "Operaciones.h"


//Prototipos funciones


//funcion principal
int main(){
    int ingreso;
    //ingreso analiza el valor de login para ver si se empieza el programa
    
    ingreso= Login();
    if(ingreso==1){
        Menu();
    }
    
   
    return 0;
}
