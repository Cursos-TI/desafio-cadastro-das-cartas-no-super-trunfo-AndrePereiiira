#include <stdio.h>

int main() {

    char estado1[8];
    char Codigodacarta1[4];
    char Nomedacidade1[50];
    char carta1;
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
    float superPoder1 = (float)populacao1 + Area1 + PIB1 + NumerodepontosTuristicos1 + pibPerCapita1 + densidadePopulacional1;

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %f\n", pibPerCapita1);
    
    
    char estado2[8];
    char Codigodacarta2[4];
    char Nomedacidade2[50];
    char carta2;
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
    float superPoder2 = (float)populacao2 + area2 + PIB2 + NumerodepontosTuristicos2 + pibPerCapita2 + densidadePopulacional2;

    
    printf("Densidade Populaciona2: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %f\n", pibPerCapita2); 
    printf("Comparações:\n", (carta1) > (carta2));
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", Area1 > area2);
    printf("PIB: %d\n", PIB1 > PIB2);
    printf("Número de pontos turísticos: %d\n", NumerodepontosTuristicos1 > NumerodepontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);
   

return 0;


}