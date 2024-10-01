#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dadosPessoas[2][10], maiorAltura,maiorPeso;
    int i;

    for(i = 0; i < 10; i++){
        printf("\nDigite o altura da pessoa: %i\n", i);
        scanf("%f", &dadosPessoas[0][i]);
        printf("\nDigite a peso da pessoa: %i\n",i);
        scanf("%f", &dadosPessoas[1][i]);
    }

    maiorAltura = dadosPessoas[0][0];
    maiorPeso = dadosPessoas[1][0];

    for(i = 0; i < 10; i++){
        if(dadosPessoas [0][i] > maiorAltura){
            maiorAltura = dadosPessoas[0][i];
        }
        if(dadosPessoas[1][i] > maiorPeso){
            maiorPeso = dadosPessoas[1][i];
        }
    }

    printf("\n Maior altura eh: %2.2f",maiorAltura);
    printf("\n Maior peso eh: %2.2f",maiorPeso);


    return 0;
}
