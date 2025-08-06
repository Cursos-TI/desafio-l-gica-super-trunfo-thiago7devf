/*
Jogo Super trunfo
atualização com o menu de escolha de qual atributo comparar.
E ao final exibir as seguintes impormações.

Nome do país (string - usado apenas para exibir informações, não para comparação direta)
População (int)
Área (float)
PIB (float)
Número de pontos turísticos (int)
Densidade demográfica (float - já calculada no desafio anterior).

*/

#include <stdio.h>
#include <string.h>

int main(){

    // variaveis da carta 1.
    char pais1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontotur1;
    float cal_dp1;

    // variaveis da carta 2.
    char pais2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontotur2;
    float cal_dp2;

    // guarda a opcao de qual atributo usar.
    int opcao;

    //somente para organização no terminal.
    printf("    =================================\n");
    printf("    ||       --Super Trunfo--      ||\n");
    printf("    =================================\n");

    // Recebendo informações da carta 1 do usuario.
    printf("**Cadastro Carta 1**\n");
    printf("Digite o nome do País: ");
    fgets(pais1, 20, stdin);
    pais1[strcspn(pais1, "\n")] = 0;

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);  
    
    printf("Digite a área do país em quilômetros quadrados: ");
    scanf("%f", &area1);  

    printf("Digite o Produto Interno Bruto: ");
    scanf("%f", &pib1);  

    printf("Digite a quantidade de pontos turísticos do país: ");
    scanf("%i", &pontotur1);

    //calcula a densidade populacional carta 1.
    cal_dp1 = (float)populacao1 / area1;

    //somente para organização no terminal.
    printf(" \n");

    while (getchar() != '\n'); // limpa o buffer

    // Recebendo informações da carta 2 do usuario.
    printf("**Cadastro Carta 2**\n");
    printf("Digite o nome do País: ");
    fgets(pais2, 20, stdin);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);  
    
    printf("Digite a área do país em quilômetros quadrados: ");
    scanf("%f", &area2);  

    printf("Digite o Produto Interno Bruto: ");
    scanf("%f", &pib2);  

    printf("Digite a quantidade de pontos turísticos do país: ");
    scanf("%i", &pontotur2);

    //calcula a densidade populacional carta 2.
    cal_dp2 = (float)populacao2 / area2;

    //somente para organização no terminal.
    printf("\n");
    printf("====================================================\n");
    printf("---------ESCOLHA QUAL ATRIBUTO QUER COMPARAR--------\n");
    printf(" 1 - POPULAÇÃO                                     -\n");
    printf(" 2 - ÁREA                                          -\n");
    printf(" 3 - PRODUTO INTERNO BRUTO                         -\n");
    printf(" 4 - PONTOS TURISTICOS                             -\n");
    printf(" 5 - DENSIDADE DEMAGRÁFICA                         -\n");
    printf("====================================================\n");

    // recolhe a opcao que o usuario quer comparar.
    printf("*digite o número correspondente.");
    scanf("%i", &opcao);

    //somente para organização no terminal.
    printf(" \n");

    switch (opcao) 
    {
    case 1: // Compara a população.
        if (populacao1 > populacao2){ // Se carta 1 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando a População.\n");
            printf("Carta 1: %d VS Carta 2: %d \n", populacao1, populacao2);
            printf("Carta 1, %s Venceu!!! \n",pais1);
        }
        else if (populacao2 > populacao1){ // Se carta 2 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando a População.\n");
            printf("Carta 1: %d VS Carta 2: %d \n", populacao1, populacao2);
            printf("Carta 2, %s Venceu!!! \n",pais2);
        }
        else{
            printf("Empate!"); // Se as cartas estiver o mesmo valor.
        }
        break;

    case 2: // Compara a Área.
        if (area1 > area2){ // Se carta 1 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando a Área.\n");
            printf("Carta 1: %.2f VS Carta 2: %.2f \n", area1, area2);
            printf("Carta 1, %s Venceu!!! \n",pais1);
        }
        else if (area2 > area1){ // Se carta 2 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando a Área.\n");
            printf("Carta 1: %.2f VS Carta 2: %.2f \n", area1, area2);
            printf("Carta 2, %s Venceu!!! \n",pais2);
        }
        else{
            printf("Empate!"); // Se as cartas estiver o mesmo valor.
        }
        break;

    case 3: // Compara o PIB(Produto Interno Bruto).
        if (pib1 > pib2){ // Se carta 1 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando o PIB(Produto Interno Bruto).\n");
            printf("Carta 1: %.2f VS Carta 2: %.2f \n", pib1, pib2);
            printf("Carta 1, %s Venceu!!! \n",pais1);
        }
        else if (pib2 > pib1){ // Se carta 2 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando o PIB(Produto Interno Bruto).\n");
            printf("Carta 1: %.2f VS Carta 2: %.2f \n", pib1, pib2);
            printf("Carta 2, %s Venceu!!! \n",pais2);
        }
        else{
            printf("Empate!"); // Se as cartas estiver o mesmo valor.
        }
        break;

    case 4: // Compara a quantidade de pontos turisticos
        if (pontotur1 > pontotur2){ // Se carta 1 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando a quantidade de pontos turisticos.\n");
            printf("Carta 1: %d VS Carta 2: %d \n", pontotur1, pontotur2);
            printf("Carta 1, %s Venceu!!! \n",pais1);
        }
        else if (pontotur2 > pontotur1){ // Se carta 2 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando a quantidade de pontos turisticos.\n");
            printf("Carta 1: %d VS Carta 2: %d \n", pontotur1, pontotur2);
            printf("Carta 2, %s Venceu!!! \n",pais2);
        }
        else{
            printf("Empate!"); // Se as cartas estiver o mesmo valor.
        }
        break;

    case 5: // Compara a Densidade Demográfica, este caso vence o menor valor.
        if (cal_dp1 < cal_dp2){ // Se carta 1 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando a Densidade Demográfica.\n");
            printf("Carta 1: %.2f VS Carta 2: %.2f \n", cal_dp1, cal_dp2);
            printf("Carta 1, %s Venceu!!! \n",pais1);
        }
        else if (cal_dp2 < cal_dp1){ // Se carta 2 for maior.
            printf(" %s VS %s \n", pais1, pais2);
            printf("Comparando a Densidade Demográfica.\n");
            printf("Carta 1: %.2f VS Carta 2: %.2f \n", cal_dp1, cal_dp2);
            printf("Carta 2, %s Venceu!!! \n",pais2);
        }
        else{
            printf("Empate!"); // Se as cartas estiver o mesmo valor.
        }
        break;
    
    default:
        printf("Opcão inválida.");
        break;
    }
    return 0;
}