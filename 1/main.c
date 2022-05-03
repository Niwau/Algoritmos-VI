#include <stdio.h>

int main(){

    int numeroEscolhido;
    int outroNumero;
    int quantidadeMultiplos;

    printf("Insira um numero: ");
    scanf("%d", &numeroEscolhido);

    for(int i = 1; i <= 50; i++){
        printf("Insira outro numero: ");
        scanf("%d", &outroNumero);

        if(outroNumero % numeroEscolhido == 0){
            quantidadeMultiplos++;
        }
    }

    printf("Total de multiplos: %d", quantidadeMultiplos);

}
