#include <stdio.h>

int main(){

    int primeiroNumero;
    int numeroAtual;
    int maiorNumero;
    int menorNumero;

    for(int i = 1; i <= 5; i++){
        if(i == 1){
            printf("Insira o primeiro numero: ");
            scanf("%d", &primeiroNumero);

        } else {
            printf("Insira outro numero: ");
            scanf("%d", &numeroAtual);

            if(numeroAtual > primeiroNumero){
                maiorNumero = numeroAtual;
                menorNumero = primeiroNumero;

            } else {
                maiorNumero = primeiroNumero;
                menorNumero = numeroAtual;
            }
        }

    }

    printf("Maior numero: %d\n", maiorNumero );
    printf("Menor numero: %d\n", menorNumero );
}
