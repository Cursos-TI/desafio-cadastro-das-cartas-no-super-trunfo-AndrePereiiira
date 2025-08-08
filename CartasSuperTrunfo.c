#include <stdio.h>

int main() {

    char estado1[8];
    char Codigodacarta1[4];
    char Nomedacidade1[50];
    int populacao1; 
    int NumerodepontosTuristicos1;
    float Area1;
    float PIB1;

    printf("Bem-vindo ao Super Trunfo!\n");
    
    printf("Carta 1\n");

    printf("Digite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", Codigodacarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomedacidade1);
    fgets(Nomedacidade1, sizeof(Nomedacidade1), stdin);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumerodepontosTuristicos1);

    printf("Digite a área km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);


    char estado2[8];
    char Codigodacarta2[4];
    char Nomedacidade2[50];
    int populacao2; 
    int NumerodepontosTuristicos2;
    float area2;
    float PIB2;
    
    printf("iniciando a segunda carta...\n");

    printf("Carta 2\n");
    
    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", Codigodacarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nomedacidade2);
    fgets(Nomedacidade1, sizeof(Nomedacidade1), stdin);
    
    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumerodepontosTuristicos2);

    printf("Digite a área km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    return 0;

}
