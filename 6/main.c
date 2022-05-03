#include <stdio.h>

int main(){

    int numeroAtual;
    int maiorNumero = 0;
    float media;
    int somaPares = 0;
    int quantidadePares = 0;

	for(int i = 1; i <= 200; i++){
        printf("Escolha um numero: ");
        scanf("%d", &numeroAtual);

        if(numeroAtual % 2 == 0){
            somaPares += numeroAtual;
            quantidadePares++;
        }

        if(i % 2 == 0){
            if(numeroAtual > maiorNumero){
                maiorNumero = numeroAtual;
            }
        }
	}

	media = (float)somaPares/quantidadePares;

	printf("Maior numero de ordem par: %d\n", maiorNumero);
	printf("Media dos valores pares: %.2f", media);

}
