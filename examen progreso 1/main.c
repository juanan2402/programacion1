#include<stdio.h>
#include <string.h>

int Login(){
    char usuario[100], clave[100];
    int intentos = 0;
    //Usuarios predeterminados
    char u1[100]= "Winston";
    char u2[100]= "Emily";
    char u3[100]= "Carlos";
    char c1[100]= "Church17";
    char c2[100]= "R0dr1";
    char c3[100]= "Timon1";

    printf("ingresar su nombre de usuario: \n");
    scanf("%s",usuario);
    printf("ingresar su contraseña \n");
    scanf("%s",clave);
    do{
        if(strcmp(usuario, u1)==0 &&(usuario, c1)==0){
            printf("Ingreso correcto");
         }
        else if(strcmp(usuario, u2)==0 &&(usuario, c2)==0){
            printf("Ingreso correcto");
        }
        else if(strcmp(usuario, u3)==0 &&(usuario, c3)==0){
            printf("Ingreso correcto");
        }
        else{
            intentos++;
            printf("usuario o contraseña fallidos intento #%d \n", intentos);
        }

    }while(intentos<=3);
  




}
float CalcularPrecioRuta(){

} 
float CalcularDescuento(){

}
int OperacionTransporte(){

}
int RedSocial(){

}
void Menu(){

}
int main(){
    int x;
    x= Login();
}
