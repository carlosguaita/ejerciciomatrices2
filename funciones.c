#include <stdio.h>
#include "funciones.h"
void multiplicarMatrices(float m1[3][2],float n1[2][3]){
    
    float mult[3][3]={{0,0,0},{0,0,0},{0,0,0}};
    float mult2[3][3]={{0,0,0},{0,0,0},{0,0,0}};;
    int i=0,j=0,z=0;
    
    for (i = 0; i<3;i++){
        for (j=0; j<3;j++){
            for(z=0; z<2;z++){
                mult[i][j]=mult[i][j]+(m1[i][z]*n1[z][j]);
            }
        }
    }

     for (i = 0; i<3;i++){
        for (j=0; j<3;j++){
            for(z=0; z<3;z++){
                mult2[i][j]=mult2[i][j]+(mult[i][z]*mult[z][j]);
            }
        }
    }

    for (i = 0; i<3;i++){
        for (j=0; j<3;j++){
            printf("%.2f ",mult2[i][j]);
        }
        printf("\n");
    }
}
