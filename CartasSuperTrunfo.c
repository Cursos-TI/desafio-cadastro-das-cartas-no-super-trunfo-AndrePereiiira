#include <stdio.h>

int main() {

    char Estado [8];
    char Codigodacarta[4];
    char Nomedacidade[50];
    int populacao; 
    int NumerodepontosTuristicos;
    float Area;
    float PIB;

    printf("Bem-vindo ao Super Trunfo!\n");
    
    printf("Digite o estado: \n");
    scanf("%s", Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", Codigodacarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomedacidade);

    printf("Digite a População: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumerodepontosTuristicos);

    printf("Digite a área km²: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

}