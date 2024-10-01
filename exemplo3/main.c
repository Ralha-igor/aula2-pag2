#include <stdio.h>
#include <stdlib.h>
const MAX[3];

int main()
{
    int DiagonalPrincipal[3][3];
    int i,j, somaDP = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("\nDigite um valor: %d | %d \n", i,j);
        scanf("%d", &DiagonalPrincipal[i][j]);
            if(i == j){
                somaDP += DiagonalPrincipal[i][j];
            }
            printf("\n");
        }
    }
    printf("\n A soma da Diagonal princiapal eh: %i",somaDP);
    return 0;
}
