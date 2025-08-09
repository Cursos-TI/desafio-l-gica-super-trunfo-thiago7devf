#include <stdio.h>
#include <string.h>

/*
DESAFIO MESTRE
Escolha de Dois Atributos: O sistema deve permitir que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas, através de menus interativos. Implemente a lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes.
 
Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos. Para cada atributo, a regra geral é: vence a carta com o maior valor. A exceção continua sendo a Densidade Demográfica, onde vence a carta com o menor valor.
 
Soma dos Atributos: Após comparar os dois atributos individualmente, o sistema deve somar os valores dos atributos para cada carta. A carta com a maior soma vence a rodada.
 
Tratamento de Empates: Implemente a lógica para tratar empates. Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".
 
Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, incluindo:
 
O nome dos dois países.
Os dois atributos usados na comparação.
Os valores de cada atributo para cada carta.
A soma dos atributos para cada carta.
Qual carta venceu (ou se houve empate).
*/

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
    int opcao1, resultado1;
    int opcao2, resultado2;

    //Guarda o nome do atributo para exibir o resultado.
    char atributousado1[30];
    char atributousado2[30];

    //Guarda o nome do atributo para exibir o resultado.
    char resul1atributo1[10];
    char resul1atributo2[10];
    char resul2atributo1[10];
    char resul2atributo2[10];


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

    //mostras as opcoes do primeiro atributo para o usuario.
    printf("\n");
    printf("====================================================\n");
    printf("------ESCOLHA O PRIMEIRO ATRIBUTO A COMPARAR--------\n");
    printf(" 1 - POPULAÇÃO                                     -\n");
    printf(" 2 - ÁREA                                          -\n");
    printf(" 3 - PRODUTO INTERNO BRUTO                         -\n");
    printf(" 4 - PONTOS TURISTICOS                             -\n");
    printf(" 5 - DENSIDADE DEMAGRÁFICA                         -\n");
    printf("====================================================\n");
    // recolhe a opcao que o usuario quer comparar.
    printf("*digite o número correspondente.");
    scanf("%i", &opcao1);

    switch (opcao1){
    case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0; // calculo de quem vence a primera rodada 
        //mostras as opcoes do segundo atributo para o usuario.
        strcpy(atributousado1, "População"); // atribuindo o nome do atributo á variavel
        printf("\n");
        printf("====================================================\n");
        printf("-------ESCOLHA O SEGUNDO ATRIBUTO A COMPARAR--------\n");
        //printf(" 1 - POPULAÇÃO                                     -\n");
        printf(" 2 - ÁREA                                          -\n");
        printf(" 3 - PRODUTO INTERNO BRUTO                         -\n");
        printf(" 4 - PONTOS TURISTICOS                             -\n");
        printf(" 5 - DENSIDADE DEMAGRÁFICA                         -\n");
        printf("====================================================\n");
        // recolhe a opcao que o usuario quer comparar.
        printf("*digite o número correspondente.");
        scanf("%i", &opcao2);
        break;
    case 2:
        resultado1 = area1 > area2 ? 1 : 0;
        //mostras as opcoes do segundo atributo para o usuario.
        strcpy(atributousado1, "Área"); // atribuindo o nome do atributo á variavel
        printf("\n");
        printf("====================================================\n");
        printf("-------ESCOLHA O SEGUNDO ATRIBUTO A COMPARAR--------\n");
        printf(" 1 - POPULAÇÃO                                     -\n");
        //printf(" 2 - ÁREA                                          -\n");
        printf(" 3 - PRODUTO INTERNO BRUTO                         -\n");
        printf(" 4 - PONTOS TURISTICOS                             -\n");
        printf(" 5 - DENSIDADE DEMAGRÁFICA                         -\n");
        printf("====================================================\n");
        // recolhe a opcao que o usuario quer comparar.
        printf("*digite o número correspondente.");
        scanf("%i", &opcao2);
        break;
    case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        //mostras as opcoes do segundo atributo para o usuario.
        strcpy(atributousado1, "PIB"); // atribuindo o nome do atributo á variavel
        printf("\n");
        printf("====================================================\n");
        printf("-------ESCOLHA O SEGUNDO ATRIBUTO A COMPARAR--------\n");
        printf(" 1 - POPULAÇÃO                                     -\n");
        printf(" 2 - ÁREA                                          -\n");
        //printf(" 3 - PRODUTO INTERNO BRUTO                         -\n");
        printf(" 4 - PONTOS TURISTICOS                             -\n");
        printf(" 5 - DENSIDADE DEMAGRÁFICA                         -\n");
        printf("====================================================\n");
        // recolhe a opcao que o usuario quer comparar.
        printf("*digite o número correspondente.");
        scanf("%i", &opcao2);
        break;
    case 4:
        resultado1 = pontotur1 > pontotur2 ? 1 : 0;
        //mostras as opcoes do segundo atributo para o usuario.
        strcpy(atributousado1, "Pontos turisticos"); // atribuindo o nome do atributo á variavel
        printf("\n");
        printf("====================================================\n");
        printf("-------ESCOLHA O SEGUNDO ATRIBUTO A COMPARAR--------\n");
        printf(" 1 - POPULAÇÃO                                     -\n");
        printf(" 2 - ÁREA                                          -\n");
        printf(" 3 - PRODUTO INTERNO BRUTO                         -\n");
        //printf(" 4 - PONTOS TURISTICOS                             -\n");
        printf(" 5 - DENSIDADE DEMAGRÁFICA                         -\n");
        printf("====================================================\n");
        // recolhe a opcao que o usuario quer comparar.
        printf("*digite o número correspondente.");
        scanf("%i", &opcao2);
        break;
    case 5:
        resultado1 = cal_dp1 < cal_dp2 ? 1 : 0;
        //mostras as opcoes do segundo atributo para o usuario.
        strcpy(atributousado1, "Densidade demográfica"); // atribuindo o nome do atributo á variavel
        printf("\n");
        printf("====================================================\n");
        printf("-------ESCOLHA O SEGUNDO ATRIBUTO A COMPARAR--------\n");
        printf(" 1 - POPULAÇÃO                                     -\n");
        printf(" 2 - ÁREA                                          -\n");
        printf(" 3 - PRODUTO INTERNO BRUTO                         -\n");
        printf(" 4 - PONTOS TURISTICOS                             -\n");
        //printf(" 5 - DENSIDADE DEMAGRÁFICA                         -\n");
        printf("====================================================\n");
        // recolhe a opcao que o usuario quer comparar.
        printf("*digite o número correspondente.");
        scanf("%i", &opcao2);
        break;    
    default:
        printf("Opção invalida.");
        break;
    }

    switch (opcao2){// faz a comparação da rodada 2 
    case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        strcpy(atributousado2, "População"); // atribuindo o nome do atributo á variavel
        break;
    case 2:
        resultado2 = area1 > area2 ? 1 : 0;
        strcpy(atributousado2, "Área"); // atribuindo o nome do atributo á variavel
        break;
    case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;
        strcpy(atributousado2, "PIB"); // atribuindo o nome do atributo á variavel
        break;
    case 4:
        resultado2 = pontotur1 > pontotur2 ? 1 : 0;
        strcpy(atributousado2, "Pontos Turisticos"); // atribuindo o nome do atributo á variavel
        break;
    case 5:
        resultado2 = cal_dp1 < cal_dp2 ? 1 : 0;
        strcpy(atributousado2, "Densidade demográfica"); // atribuindo o nome do atributo á variavel
        break;    
    default:
        printf("Opção invalida.");
        break;
    }
    
    if (opcao1 == opcao2){// se as opcoes for iguais
        printf("Opção invalida, você não pode escolher o mesmo atributo.");
    }
    else {
        if (resultado1 && resultado2){ //caso vitoria da carta 1
            strcpy(resul1atributo1,"Vitória");
            strcpy(resul1atributo2,"Derrota");
            strcpy(resul2atributo1,"Vitória");
            strcpy(resul2atributo2,"Derrota");
            /*vitoria carta1*/
            printf("Carta 1: %s, Carta 2: %s\n",pais1,pais2);
            printf("Atributos Usados: %s, %s\n", atributousado1,atributousado2);
            printf("Primeira Disputa Carta 1: %s / Cartar 2: %s\n",resul1atributo1,resul1atributo2);
            printf("Segunda Disputa Carta 1: %s / Cartar 2: %s\n",resul2atributo1,resul2atributo2);
            printf("Carta 1 %s, Venceu!\n", pais1);
        }
        else if (resultado1 != resultado2){ // em caso de empate
            if (resultado1 == 1){// em caso de empate revela em qual atributo venceu ou perdeu
            strcpy(resul1atributo1,"Vitória");
            strcpy(resul1atributo2,"Derrota");
            strcpy(resul2atributo1,"Derrota");
            strcpy(resul2atributo2,"Vitória");
        }
        else{//em caso de empate revela em qual atributo venceu ou perdeu
            strcpy(resul1atributo1,"Derrota");
            strcpy(resul1atributo2,"Vitória");
            strcpy(resul2atributo1,"Vitória");
            strcpy(resul2atributo2,"Derrota");
        }
            /*empate*/
            printf("Carta 1: %s, Carta 2: %s\n",pais1,pais2);
            printf("Atributos Usados: %s, %s\n", atributousado1,atributousado2);
            printf("Primeira Disputa Carta 1: %s Cartar 2: %s\n",resul1atributo1,resul1atributo2);
            printf("Segunda Disputa Carta 1: %s Cartar 2: %s\n",resul2atributo1,resul2atributo2);
            printf("Empate!\n");
        }
        else{ //caso vitoria da carta 1
            strcpy(resul1atributo1,"Derrota");
            strcpy(resul1atributo2,"Vitória");
            strcpy(resul2atributo1,"Derrota");
            strcpy(resul2atributo2,"Vitória");
            /*vitoria carta2*/
            printf("Carta 1: %s, Carta 2: %s\n",pais1,pais2);
            printf("Atributos Usados: %s, %s\n", atributousado1,atributousado2);
            printf("Primeira Disputa Carta 1: %s / Cartar 2: %s\n",resul1atributo1,resul1atributo2);
            printf("Segunda Disputa Carta 1: %s / Cartar 2: %s\n",resul2atributo1,resul2atributo2);
            printf("Carta 2 %s, Venceu!\n", pais2);
        }
        
        
    }

}   