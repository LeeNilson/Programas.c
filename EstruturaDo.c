#include <stdio.h>
//Função para limpar buffer dos dados de digitação do enter,para poder ler o caracter
void limpar_entrada(){
    char c;
    while(( c = getchar()) != '\n' && c != EOF) {}
}
int main()
{
    double C, F;
    char resp;

    do {
        printf("Digite a atemperatura em Celsius:");
        scanf("%lf", &C);
        F = 9.0 * C / 5.0 + 32.0;
        printf("Equivalente em farenheit: %.1lf\n", F);
        printf("Deseja repetir(s/n)");
        limpar_entrada();
        scanf("%c", &resp);
    } while (resp == 's');
// a estrutura do while irá repetir enquanto o caracter digitado for 's'
    return 0;
    } 
