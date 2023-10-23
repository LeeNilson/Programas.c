#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};
typedef struct ponto ponto;
void main(){
    struct ponto a, b;

    printf("Digite as coordenadas x e Y do ponto a:");
    scanf("%f%f", &a.x, &a.y); 

    printf("Digite as coordenadas x e Y do ponto b:");
    scanf("%f%f", &a.x, &a.y); 

    float distancia = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));

    printf("Distância do ponto em relação a coordenada(0,0):%.2f", distancia);

    return 0;

}