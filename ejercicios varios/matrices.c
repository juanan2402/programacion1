#include<stdio.h>
#define n 3



void LeerMatriz(int fil, int col, int matriz[fil][col]){
    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            printf("Ingresar el dato en la posicion %d,%d de la matriz \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

}
void ImprimirMatriz(int fil, int col, int matriz[fil][col]){
    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }

}
void SumaMatriz(int fil, int col, int matrizA[fil][col], int matrizB[fil][col], int matrizC[fil][col]){
    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }

}
void Transpuesta(int fil, int col, int matriz[fil][col], int matrizT[fil][col]){
    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            matrizT[j][i]=matriz[i][j];
        }
    }

}
void MultiMat(int filA, int colA, int filB, int colB, int matrizA[filA][colA], int matrizB[filB][colB], int matrizP[filA][colB]){
    if(colA==filB){
        if(filA<colB)
        for(int i=0; i<filA; i++){
            for(int j=0; j<colB; j++){
                for(int k=0; k<filB; k++){
                    for(int l=0; l<colA; l++){
                        matrizP[i][j]+=matrizA[i][j]*matrizB[j][i];
                    }
                }
         }
    }

    }
    else{
        printf("Matrices no aptas para multiplicar\n");
    }
    

}
void MultiEsc(int fil, int col, int matriz[fil][col], int matrizP[fil][col], int escalar){
    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            matrizP[j][i]=matriz[i][j]*escalar;
        }
    }

}

int main(){
    
    int matA[10][10];
    
    int matB[10][10];

    int matC[10][10];

    int matT[10][10];

    printf("Matriz A\n");
    LeerMatriz(n, n, matA);
    /*
    printf("Matriz B\n");
    LeerMatriz(n,n,matB);
    SumaMatriz(n,n,matA,matB,matC);
    */
    Transpuesta(n, n, matA, matT);
    ImprimirMatriz(n,n,matA);
    printf("\n");
    printf("Matriz Transpuesta\n");

    ImprimirMatriz(n,n,matT);
return 0;
    

}