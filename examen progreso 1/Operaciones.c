#include <stdio.h>
#include <string.h>
float CalcularPrecioRuta(int tipo, int km){
    float precio;
    //se aplica el precio por kilometro segùn cada tipo de viaje
    switch (tipo)
    {
    case 1:
        precio=km*0.1;
        break;
    case 2:
        precio=km*0.15;
        break;
    case 3:
        precio=km*0.20;
    break;
    }
    return precio;


} 
float CalcularDescuento(float precio, int km){
    //Se establecen los rangos para aplicar el descuento
    if(km>=50 && km<100){
        precio*=0.95;
    }
    else if(km>=100 && km<500){
        precio*=0.90;

    }
    else if(km>=500){
        precio*=0.80;

    }
    //se resta el valor del decuento para retornar el precio
    return precio;

}