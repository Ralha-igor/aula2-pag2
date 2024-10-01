#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int main()
{
    float U[MAX];
    int i, aux = MAX -1;
    float temp;


    printf("Digite os elementos do vetor U:\n");
    for(i=0; i<MAX; i++){
        scanf("%f", &U[i]);
    }

    for(i=0; i <(MAX/2); i++){
        temp = U[i];
        U[i] = U[aux];
        U[aux] = temp;
        aux--;
    }

    printf("\n Vetor U modificado\n");

    return 0;
}
