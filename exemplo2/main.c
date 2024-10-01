#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada[10][10];
    int lin;
    int col;

    for(lin = 0; lin < 10; lin++){
        for(col = 0; col < 10; col++){
            tabuada[lin][col] = (lin+1) * (col+1);
        }
    }

    for(lin = 0; lin < 10; lin++){
        printf("[%2]\n", lin+1);
        for(col = 0; col < 10; col++){
            printf("%4lin ", tabuada[lin][col]);
        }
    }

    printf(" \n");
    return 0;
}
