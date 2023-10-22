 #include <stdio.h>
 int main()
 {
    int hora;
    printf("Digite uma hora do dia:");
    scanf("%d", &hora);

    if (hora < 12){
        printf("Bom Dia!\n");
    }
    else {
        printf("Boa Tarde!\n");
    }
    return 0;
 }