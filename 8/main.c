#include <stdio.h>

int main(){
    float numeroReal;
    int numeroInteiro;
    int quantidadeTotal = 0;
    float numeroEscolhido;
    int intervalo1, intervalo2;

    printf("Insira um numero real e um inteiro: ");
    scanf("%f %d", &numeroReal, &numeroInteiro);

    intervalo1 = numeroReal - numeroInteiro;
    intervalo2 = numeroReal + numeroInteiro;

    for(int i = 1; i <= 5; i++){
        printf("Insira um numero real: ");
        scanf("%f", &numeroEscolhido);

        if(numeroEscolhido >= intervalo1 && numeroEscolhido <= intervalo2){
            quantidadeTotal++;
        }
    }

    printf("%d numeros estao no intervalo definido.", quantidadeTotal);
}
