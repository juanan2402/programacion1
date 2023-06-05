#include<stdio.h>

int maze[5][5] ={
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};
int n=5;
void imprimirMatriz(int posX, int posY){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==posX && j==posY){
                printf(" X ");
            }
            else{
                printf(" %d ", maze[i][j]);
            }
        }
        printf("\n");
    }


}
int movimientoValido(int posX, int posY){
    //fuera de rango
    if(posX<0 || posY<0 || posX>=5 || posY>=5 || maze[posX][posY]==1){
        return 0;
    }
    else{
        return 1;
    }

}