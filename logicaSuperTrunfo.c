#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/*
O que você vai fazer
Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float 
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
 
Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo 

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50 

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30   

Atualização

Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.
 
Exemplo de Saída:

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais

*/

#include <stdio.h>

int main(){

    // variaveis da carta 1.
    char estado1;
    char codigo1[4];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontotur1;
    float cal_dp1;
    float cal_pibc1;

    // variaveis da carta 2.
    char estado2;
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontotur2;
    float cal_dp2;
    float cal_pibc2;


    // Recebendo informações da carta 1 do usuario.
    printf("Digite uma letra de 'A' a 'H'! (representando um dos oito estados): ");
    scanf(" %c", &estado1);

    printf("digite o código da carta: (A letra do estado seguida de um número de 01 a 04) ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade! ex: 'RioDeJaneiro'! ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade! ");
    scanf("%d", &populacao1);  
    
    printf("Digite a área da cidade em quilômetros quadrados! ");
    scanf("%f", &area1);  

    printf("Digite o Produto Interno Bruto da cidade! ");
    scanf("%f", &pib1);  

    printf("Digite a quantidade de pontos turísticos na cidade! ");
    scanf("%i", &pontotur1);

    //somente para organização no terminal.
    printf(" \n");

    //calcula a densidade populacional.
    cal_dp1 = (float)populacao1 / area1;

    //calcula o PIB per Capita.
    cal_pibc1 = (pib1*1000000000) / populacao1;

    // Exibindo as Informações da carta 1.
    printf("Carta 1: \n");
    printf("Estado: %c \n",estado1);
    printf("Código: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %d\n",populacao1);
    printf("Área: %.2f Km²\n",area1);
    printf("PIB: %.2f bilhões de reais\n",pib1);
    printf("Número de pontos Turísticos: %i\n",pontotur1);
    printf("Densidade Populacional: %.2f\n",cal_dp1);
    printf("PIB per Capita: %.2f Reais\n",cal_pibc1);

    //somente para organização no terminal.
    printf(" \n");
    printf(" \n");

    // Recebendo informações da carta 2 do usuario.
    printf("Digite uma letra de 'A' a 'H'! (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("digite o código da carta: (A letra do estado seguida de um número de 01 a 04) ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade! ex: 'RioDeJaneiro'! ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade! ");
    scanf("%d", &populacao2);  
    
    printf("Digite a área da cidade em quilômetros quadrados! ");
    scanf("%f", &area2);  

    printf("Digite o Produto Interno Bruto da cidade! ");
    scanf("%f", &pib2);  

    printf("Digite a quantidade de pontos turísticos na cidade!");
    scanf("%i", &pontotur2);

    //somente para organização no terminal.
    printf(" \n");

    //calcula a densidade populacional.
    cal_dp2 = (float)populacao2 / area2;

    //calcula o PIB per Capita.
    cal_pibc2 = (pib2*1000000000) / populacao2;

    // Exibindo as Informações da carta 2.
    printf("Carta 2: \n");
    printf("Estado: %c\n",estado2);
    printf("Código: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %d\n",populacao2);
    printf("Área: %.2f Km²\n",area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);
    printf("Número de pontos Turísticos: %i\n",pontotur2);
    printf("Densidade Populacional: %.2f\n",cal_dp2);
    printf("PIB per Capita: %.2f Reais\n",cal_pibc2);

    /*
    Comparação de cartas (Atributo: PIB):

    Carta 1 - São Paulo (SP): 12.300.000
    Carta 2 - Rio de Janeiro (RJ): 6.000.000
    Resultado: Carta 1 (São Paulo) venceu! 
    */

    //somente para organização no terminal.
    printf(" \n");

    // Mostra a o atributo que vai ser avaliado o os valores de cada carta.
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf(" \n");
    printf("Carta 1 - %s: %.2f\n",cidade1,pib1);
    printf("Carta 2 - %s: %.2f\n",cidade2,pib2);

    // if para condições.
    if (pib1>pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);
    }

    else{
        printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
    }


    return 0;

}