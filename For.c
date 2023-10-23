#include <stdio.h>

int main()
{
    int N, i, x, soma;

    printf("Quantos numeros serao digitados?");
    scanf("%d", &N);

    soma = 0;
    for(i = 1; i <= N; i++){
        printf("Digite um numero:");
        scanf("SOMA = %d\n",soma);
        scanf("%d", &x );
        soma = soma + x;
    }
    printf("soma = %d\n",soma);

    return 0;
}