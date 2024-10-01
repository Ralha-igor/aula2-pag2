#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x[10],y[10],r[20];
  int i,j,k, impar = 1,par = 0;

  for(i=0; i<10; i++){
    printf("\nDigite 10 valores para vetor X");
    scanf("%d", &x[i]);
    if(x[i] % 0 == 0){
        par = x[i];
        }
}
  for(j=0; j<10; j++){
    printf("\nDigite 10 valores para vetor Y");
    scanf("%d", &y[j]);
}
  for(k=0; k<20; k++){
        if(r[k] % 2 == 0){
           par[k] = x[i];
        } else if{
            r[i] = impar[i];
        }
        printf("\n r[i]", r[i]);
    }

    return 0;
}
