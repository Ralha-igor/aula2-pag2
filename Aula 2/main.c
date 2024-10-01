#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz_de_pessoas[2][10], maior_peso, maior_altura;
    int idx;

    for(idx = 0; idx < 10; idx++){
        printf("\n Peso da pessoa %i: ",idx);
        scanf("%f", &matriz_de_pessoas[0][idx]);
        printf("\n altura da pessoa %i: ",idx);
        scanf("%f", &matriz_de_pessoas[1][idx]);
    }

    maior_peso = matriz_de_pessoas[0][0];
    maior_altura = matriz_de_pessoas[1][0];

    for(idx = 0; idx < 10; idx++){
        if(matriz_de_pessoas[0][idx] > maior_peso){
            maior_peso = matriz_de_pessoas[0][idx];
        }
        if(matriz_de_pessoas[1][idx] > maior_altura){
            maior_altura = matriz_de_pessoas[1][idx];
        }
    }
    printf("\nMaior peso: %2.2f \n",maior_peso);
    printf("\nMaior altura: %2.2f \n",maior_altura);

    return 0;
}
