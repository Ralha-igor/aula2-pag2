#include <stdio.h>
#include <stdlib.h>
#define MAX 5;

int main(){

    int R[5], S[10], X[15];
    int i, aux = 0;

    for(i=0; i<5; i++){
        printf("R[%i]:",i);
        scanf("%i", &R[i]);
    }
    for(i=0; i<10; i++){
        printf("S[%i]:",i);
        scanf("%i", &S[i]);
    }
    for(i=0; i<15; i++){
        if(i<5){
            X[i+5] = R[i];
        }else {
            X[i] = S[i-5];

        }
        printf("\n %d:",X[i]);
    }


    return 0;
}
