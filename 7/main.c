#include <stdio.h>

int main(){
    int numero, menor;
    int soma = 0;
    int somaUltimos = 0;

    for(int i = 1; i <= 50; i++){
        printf("Insira um numero: ");
        scanf("%d", &numero);

        soma += numero;

        if(i == 51){
            menor = numero;

        } else if(i > 51){
            if(numero > menor){
                menor = numero;
            }
        }

        if(i >= 51){
            somaUltimos += numero;
        }
    }

    printf("Soma dos numeros: %d\n", soma);
    printf("Menor valor entre os ultimos 50: %d\n", menor);
    printf("Media dos ultimos 50: %.2f", (float)somaUltimos / 50);
}
