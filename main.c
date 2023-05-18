#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float m1[3][2]={{3.4,5.4},{7.1,9.3},{2.3,8.9}};
    float n1[2][3]={{7,9,7},{7.9,8,2}};
    multiplicarMatrices(m1,n1);
    return 0;
}


