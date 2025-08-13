#include <stdio.h>

int main() {

    char estado1[8];
    char Codigodacarta1[4];
    char Nomedacidade1[50];
    float populacao1; 
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
    scanf("%f", &populacao1);

    printf("Digite a área km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumerodepontosTuristicos1);

    float densidadePopulacional1 = populacao1 / Area1;
    float pibPerCapita1 = PIB1 / populacao1;

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %f\n", pibPerCapita1);
    
    
    char estado2[8];
    char Codigodacarta2[4];
    char Nomedacidade2[50];
    float populacao2; 
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
    fgets(Nomedacidade2, sizeof(Nomedacidade2), stdin);
    
    printf("Digite a População: \n");
    scanf("%f", &populacao2);

    printf("Digite a área km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &NumerodepontosTuristicos2);

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = PIB2 / populacao2;

    printf("Densidade Populaciona2: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %f\n", pibPerCapita2); 


return 0;


}