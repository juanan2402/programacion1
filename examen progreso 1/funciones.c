#include <stdio.h>
#include <string.h>
#include "Operaciones.c"

//Se utiliza una variable global para poder hacer la impresón del descuento despues
float descuento;
//declaración de funciones
int Login(){
    
    char usuario[100];
    int clave;
    int intentos = 0;

    //Usuarios predeterminados
    char u1[]="Winston";
    char u2[]="Emily";
    char u3[]="Carlos";
    int c1=1875;
    int c2=1978;
    int c3=873624;
    
    do{
        //ingreso de datos
        fflush(stdin);
        printf("ingresar su nombre de usuario: \n");
        scanf("%s",usuario);
        printf("ingresar su contraseña \n");
        scanf("%d",&clave);
//Se utiliza strcmp para cada uno de los casos, si uno se cumple, se procede al menu
        if(clave==c1 && strcmp(u1, usuario)==0){
            printf("Ingreso correcto\n");
            return 1;
            break;
         }
        else if(strcmp(usuario, u2)==0 && clave==c2){
            printf("Ingreso correcto\n");
            return 1;
            break;
        }
        else if(strcmp(usuario, u3)==0 && clave==c3){
            printf("Ingreso correcto\n");
            return 1;
            break;
        }
        else{
            intentos++;
            printf("usuario o contraseña fallidos intento #%d \n", intentos);
            
        }

    }while(intentos<3);//permite solo 3 intentos para ingresar el usuario

    if(intentos==3){
        //regresa 0 una vez utilizados todos los intentos
        return 0;
    }
  




}

void OperacionTransporte(){
    int tipo, km;
    float precio;
    //inicio del bucle para los usuarios
    for(int i =0; i<5;i++){
        printf("Usuario %d \n", i+1);
        printf("\n");
        
        //Comprobación de que el kilometraje y el tipo sea valido
        do{
            printf("Ingresar el numero según el tipo de ruta \n 1- Urbana \n 2-Interurbana \n 3- Internacional\n");
            scanf("%d", &tipo);
            printf("Ingresar el kilometraje \n");
            scanf("%d", &km);
            if(km<=0 || (tipo<=0 || tipo>4)){
                printf("kilometraje o tipo de ruta no validos\n");
            }
        }while(km<=0 || (tipo<=0 || tipo>4) );
//Segun cada dato, se genera el precio, el descuento, y el precio final
        precio= CalcularPrecioRuta(tipo, km);

        printf("Precio Base: $ %0.2f \n", precio);
        //se sobreescribe con el precio final
        descuento=precio-(CalcularDescuento(precio, km));
        precio=CalcularDescuento(precio, km);
        printf("Descuento: $ %0.2f \n",descuento);
        printf("Precio Base: $ %0.2f \n", precio);


    }

}
void RedSocial(){
    int categoria;
    int noticias=0, eventos=0, preguntas=0;//variables de tipo
    char mensaje[200];
    for(int i =0; i<5;i++){
        printf("Escribir su mensaje: \n");
        scanf("%s", mensaje);
        printf("Seleccionar la categoria: \n" );
        printf("1-Noticias:Mensajes relacionados con anuncios de la empresa de transporte o cambios en las rutas.  \n 2-Eventos:Mensajes relacionados con eventos de la comunidad, como ferias, conciertos o actividades recreativas. \n 3-Preguntas: Mensajes en los que los usuarios hacen preguntas sobre tarifas, horarios o servicios de transporte. \n");
        scanf("%d", &categoria);
        switch (categoria)
        {
        case 1:
            noticias++;
            break;
        case 2:
            eventos++;
            break;
        case 3:
            preguntas++;
            break;
        
        }



    }
    printf("Noticias: %d \n Eventos: %d\n Preguntas: %d\n", noticias, eventos, preguntas);

}



void Menu(){
    int opciones;
    do{
        opciones=0;
        printf("1-Operación de transporte \n 2-Interactuar en la red social \n 3-salir\n");
        scanf("%d", &opciones);
        switch (opciones)
        {
        case 1:
        //Se usa la funcion del transporte
            OperacionTransporte();
            break;
        case 2:
            RedSocial();
            break;
        case 3:
            printf("Saliendo...\n");
            break;
        
        default:
            printf("Opcion no valida\n");
            break;
        }

    }while(opciones!=3);//Bucle infinito 
    

}
