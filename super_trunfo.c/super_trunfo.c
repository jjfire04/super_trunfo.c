#include <stdio.h>
int main (){
    
    char carta[12];
    char estado[15];
    char Codigo[5];
    char cidade[20];
    int Populacao;
    float Area;
    float Pib;
    int Turismo;

    printf("carta: \n");
    scanf("%s", &carta);

    printf("digite o estado: \n");
    scanf("%s", &estado);
    
    printf("digite o codigo: \n");
    scanf("%s", &Codigo);
    
    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("digite a quantidade de populacao: \n");
    scanf("%d", &Populacao);

    printf("digite o tamanho da area km: \n");
    scanf("%f", &Area);

    printf("digite o Pib: \n");
    scanf("%f", &Pib);

    printf("digite quantos pontos turisticos tem na cidade: \n");
    scanf("%d", &Turismo);

    printf("carta: %s\n", carta);
    printf("O estado é: %s\n", estado);
    printf("O codigo da carta é: %s\n", Codigo);
    printf("O nome da cidade é: %s\n", cidade);
    printf("A quantidade de população é: %d\n", Populacao);
    printf("O tamanha da area é: %f\n", Area);
    printf("O PIB é: %f\n", Pib);
    printf("pontos turisticos é: %d\n", Turismo);
    
    return 0;

}