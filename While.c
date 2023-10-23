#include <stdio.h>
int main ()
{
    int x, y, soma;

    soma = 0;
    printf ("Digite o primeiro numero:");
    scanf("%d", &x);
    
    printf ("Digite o segundo numero:");
    scanf("%d", &y);
    
    soma = x + y;

    printf ("Digite outro número (ou 0 para encerrar)");
    scanf("%d", &x);

    while (x != 0){
        soma = soma + x;
        printf("Digite outro numero(ou 0 para encerrar):");
        scanf("%d", &x);
    }
    printf ("SOMA = %d\n", soma);
    return 0;
}