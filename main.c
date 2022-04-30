#include <stdio.h>

int main(){

    int numeroAtual;
    int maiorNumero;
    int menorNumero;

    for(int i = 1; i <= 5; i++){

        printf("Escolha um numero: ");
        scanf("%d", &numeroAtual);

        if(i == 1){
            maiorNumero = numeroAtual;
            menorNumero = numeroAtual;

        } else if(numeroAtual > maiorNumero){
            maiorNumero = numeroAtual;

        } else if(numeroAtual < menorNumero){
            menorNumero = numeroAtual;

        }

    }

    printf("Maior e menor valor: %d %d", maiorNumero, menorNumero);

}
