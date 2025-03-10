#include <stdio.h>

// Desafio Super Trunfo
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Prática Willams da Silva Gomes

int main() {

    
    printf("*** Desafio Super Trunfo: Cadastro das Cartas ***\n");
    
    /*Cadastro das variaveis represetam de 1 a 4
    As variaveis que representam o Estado1 são as variaveis 1 e 2
    As variaveis que representam o Estado2 são as variaveis de 3 e 4*/
    
    char pais1[30], pais2[30]; // País que vai atribuir junto os dados da carta
    char estado1, estado2; // Letra que representa o estado
    char codigo_da_cidade1[5], codigo_da_cidade2[5], codigo_da_cidade3[5], codigo_da_cidade4[5]; // Código que vai representar a cidade
    char cidade1[30], cidade2[30], cidade3[30], cidade4[30]; // Cidade do Estado
    unsigned long int populacao1, populacao2, populacao3, populacao4; // Quantidade total de pessoas
    float area1, area2, area3, area4; // Área total em km² da cidade
    double pib1, pib2, pib3, pib4; // PIB da cidade
    int turisticos1, turisticos2, turisticos3, turisticos4; // Número de pontos turísticos
    float densidade_demografica1, densidade_demografica2, densidade_demografica3, densidade_demografica4; // População dividida pela área da cidade
    float pib_per_capita1, pib_per_capita2, pib_per_capita3, pib_per_capita4; // PIB da cidade dividido pela população
    double inverso_densidade1, inverso_densidade2, inverso_densidade3, inverso_densidade4; // Inverso da densidade demografica = 1.0 / Densidade Demográfica
    double super_poder1, super_poder2, super_poder3, super_poder4; // É a soma das variaveis = População + Área + PIB + Pontos Turisticos + PIB per Capita + Inverso da Densidade Populacional
        
    /* Entrada de Dados da primeira carta em Scanf
    Solicitando ao usuario a cadastrar as informações das cartas */
    
    
    printf(" *** Digite os dados da primeira carta *** \n");
    
    printf("Digite uma letra de (A a H) que vai representar o estado: \n");
    scanf(" %c", &estado1);
    
    printf("Digite um código que tenha a letra do estado (A a H) + um número (01 a 04) exemplo (A01,B01) que vai representar a cidade: \n");
    scanf("%s", codigo_da_cidade1);

    printf("Digite o nome do País: \n");
    scanf("%s", pais1);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1); // Usando scanf com %[^\n]: Para usar espaço se necessário
    
    printf("Digite a quantidade total da população: \n");
    scanf("%lu", &populacao1);
    
    printf("Digite a area total da cidade: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib1);
    
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos1);
    
    densidade_demografica1 = (float) populacao1 / area1; // Atribuição a variavel densidade_populacional1
    pib_per_capita1 = (float) pib1 / populacao1; // Atribuição a variavel pib_per_capita1
    inverso_densidade1 = 1.0 / densidade_demografica1; // Atribuição a variavel inverso_densidade1
    super_poder1 = (float) populacao1 + area1 + pib1 + turisticos1 + pib_per_capita1 + inverso_densidade1; // Atribuição a variavel super_poder1
    
    printf("\n"); // Deixando um espaço entre as informações
    
    // Comandos de exibição das Cartas usando Printf
    // Imprimindo as informações 
    //Primeira Carta
    
    printf(" *** Exibindo os dados da Carta *** \n");
    
    printf("Carta 1: \n");
    printf("País: %s\n", pais1);
    printf("Letra do Estado: %c\n", estado1);   
    printf("Código da Carta: %s\n", codigo_da_cidade1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu pessoas\n", populacao1);
    printf("Área total: %.2f Km²\n", area1);
    printf("PIB da cidade: %.2f milhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);
    printf("Densidade demográfica: %.2f de habitantes por km²\n", densidade_demografica1);
    printf("PIB per capita por pessoa: %.2f reais\n", pib_per_capita1);
    printf("Inverso de Densidade Demográfica: %.4f habitantes por km²\n", inverso_densidade1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\n"); // Deixando um espaço entre as informações
    
    /* Entrada de Dados da segunda carta em Scanf
    Solicitando ao usuario a cadastrar as informações das cartas */
    
    printf(" *** Digite os dados da segunda carta *** \n");
    
    printf("Digite uma letra de (A a H) que vai representar o estado: \n");
    scanf(" %c", &estado2);
    
    printf("Digite um código que tenha a letra do estado (A a H) + um número (01 a 04) exemplo (A01,B01) que vai representar a cidade: \n");
    scanf("%s", codigo_da_cidade3);

    printf("Digite o nome do País: \n");
    scanf("%s", pais2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade3); // Usando scanf com %[^\n]: Para usar espaço se necessário
    
    printf("Digite a quantidade total da população: \n");
    scanf("%lu", &populacao3);
    
    printf("Digite a area total da cidade: \n");
    scanf("%f", &area3);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &pib3);
    
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos3);
        
    densidade_demografica3 = (float) populacao3 / area3; // Atribuição a variavel densidade_populacional3
    pib_per_capita3 = (float) pib3 / populacao3; // Atribuição a variavel pib_per_capita3
    inverso_densidade3 = 1.0 / densidade_demografica3; // Atribuição a variavel inverso_densidade3
    super_poder3 = (float) populacao3 + area3 + pib3 + turisticos3 + pib_per_capita3 + inverso_densidade3; // Atribuição a variavel super_poder3
    
    printf("\n"); // Deixando um espaço entre as informações
    
    // Comandos de exibição das Cartas
    // Imprimindo as informações
    // Segunda Carta
    
    printf(" *** Exibindo dados da Carta *** \n");
    
    printf("Carta 2: \n");
    printf("País: %s\n", pais2);
    printf("Letra do Estado: %c\n", estado2);   
    printf("Código da Carta: %s\n", codigo_da_cidade3);
    printf("Cidade: %s\n", cidade3);
    printf("População: %lu pessoas\n", populacao3);
    printf("Área total: %.2f Km²\n", area3);
    printf("PIB da cidade: %.2f Milhões de reais\n", pib3);
    printf("Pontos turísticos: %d\n", turisticos3);
    printf("Densidade demográfica: %.2f de habitantes por km²\n", densidade_demografica3);
    printf("PIB per capita por pessoa: %.2f reais\n", pib_per_capita3);
    printf("Inverso de Densidade Demográfica: %.4f habitantes por km²\n", inverso_densidade3);
    printf("Super Poder: %.2f\n", super_poder3);
    
    printf("\n"); // Deixando um espaço entre as informações
    
    /* Realizando a criação de dois menus interativos com Switch, para realizar a compração das cartas.
        O jogador deve escolher dois atributos e o sistema já mostra qual foi a carta que ganhou, referente ao atributo escolhido.
        Após a escolha dos atributos o sistema faz a soma, para saber quem é a vencedora na pontuação total.
        Fazendo uso de IF e ELSE-IF e operador Ternário.
        A carta com o maior atributo é a vencedora.
    */

    // Variáveis usados para realizar a comparação de atributos
    int primeiraEscolha, segundaEscolha; // Uso da escolha do Switch
    float primeiroAtributo1, primeiroAtributo2; // Valor a para atribuir dentro do primeiro switch
    float segundoAtributo1, segundoAtributo2; // Valor para atribuir dentro do segundo switch
    int resultado1, resultado2; // Resultado de Comparação das Cartas = Sendo 1 a carta 1 ganhou e 0 a carta 2 ganhou.
    float somaCarta1, somaCarta2; // Soma de Pontos da Carta 1 e Carta 2
    
    // Criação dos Menus

    printf("Bem-Vindo ao Jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("1. População.\n");
    printf("2. Área total.\n");
    printf("3. PIB da cidade.\n");
    printf("4. Pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("6. PIB per capita por pessoa.\n");
    printf("7. Super Poder.\n");
    printf("Escolha uma opção: ");
    scanf("%d", &primeiraEscolha);

    printf("\n"); // Deixando um espaço entre as informações

    switch (primeiraEscolha)
    {
    case 1:
        primeiroAtributo1 = populacao1;
        primeiroAtributo2 = populacao3;
        printf("Primeiro atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - População: %lu habitantes.\n", pais1, cidade1, populacao1);
        printf("Carta 2: País: %s - Cidade: %s - População: %lu habitantes.\n", pais2, cidade3, populacao3);
        resultado1 = primeiroAtributo1 > primeiroAtributo2 ? 1 : 2;
        break;
    
    case 2:
        primeiroAtributo1 = area1;
        primeiroAtributo2 = area3;
        printf("Primeiro atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - Área: %.2f Km².\n", pais1, cidade1, area1);
        printf("Carta 2: País: %s - Cidade: %s - Área: %.2f Km².\n", pais2, cidade3, area3);
        resultado1 = primeiroAtributo1 > primeiroAtributo2 ? 1 : 2;
        break;

    case 3:
        primeiroAtributo1 = pib1;
        primeiroAtributo2 = pib3;
        printf("Primeiro atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - PIB: %.2f Milhões de Reais.\n", pais1, cidade1, pib1);
        printf("Carta 2: País: %s - Cidade: %s - PIB: %.2f Milhões de Reais.\n", pais2, cidade3, pib3);
        resultado1 = primeiroAtributo1 > primeiroAtributo2 ? 1 : 2;

        break;

    case 4:
        primeiroAtributo1 = turisticos1;
        primeiroAtributo2 = turisticos3;
        printf("Primeiro atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - Pontos Turísticos: %d.\n", pais1, cidade1, turisticos1);
        printf("Carta 2: País: %s - Cidade: %s - Pontos Turísticos: %d.\n", pais2, cidade3, turisticos3);
        resultado1 = primeiroAtributo1 > primeiroAtributo2 ? 1 : 2;
        break;

    case 5:
        primeiroAtributo1 = densidade_demografica1;
        primeiroAtributo2 = densidade_demografica3;
        printf("Primeiro atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - Densidade Demográfica: %.2f pessoas km².\n", pais1, cidade1, densidade_demografica1);
        printf("Carta 2: País: %s - Cidade: %s - Densidade Demográfica: %.2f.pessoas km².\n", pais2, cidade3, densidade_demografica3);
        resultado1 = primeiroAtributo1 < primeiroAtributo2 ? 1 : 2;
        break;

    case 6:
        primeiroAtributo1 = pib_per_capita1;
        primeiroAtributo2 = pib_per_capita3;
        printf("Primeiro atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - PIB per Capita: %.2f reais por pessoa.\n", pais1, cidade1, pib_per_capita1);
        printf("Carta 2: País: %s - Cidade: %s - PIB per Capita: %.2f reais por pessoa.\n", pais2, cidade3, pib_per_capita3);
        resultado1 = primeiroAtributo1 > primeiroAtributo2 ? 1 : 2;
        break;

    case 7:
        primeiroAtributo1 = super_poder1;
        primeiroAtributo2 = super_poder3;
        printf("Primeiro atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - Super Poder: %.2f pontos.\n", pais1, cidade1, super_poder1);
        printf("Carta 2: País: %s - Cidade: %s - Super Poder: %.2f pontos.\n", pais2, cidade3, super_poder3);
        resultado1 = primeiroAtributo1 > primeiroAtributo2 ? 1 : 2;
        break;

    default:
        printf("Opção inválida, tente de novo!\n");
        break;
    }

    printf("Escolha o segundo atributo.\n");
    printf("1. População.\n");
    printf("2. Área total.\n");
    printf("3. PIB da cidade.\n");
    printf("4. Pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("6. PIB per capita por pessoa.\n");
    printf("7. Super Poder.\n");

    printf("Escolha uma opção: ");
    scanf("%d", &segundaEscolha);

    if (primeiraEscolha == segundaEscolha)
    {
        printf("Você escolheu o mesmo atributo, tente de novo!\n");
    } else switch (segundaEscolha)
    {
    
    case 1:
        segundoAtributo1 = populacao1;
        segundoAtributo2 = populacao3;
        printf("Segundo atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - População: %lu habitantes.\n", pais1, cidade1, populacao1);
        printf("Carta 2: País: %s - Cidade: %s - População: %lu habitantes.\n", pais2, cidade3, populacao3);
        resultado2 = segundoAtributo1 > segundoAtributo2 ? 1 : 2;

        break;
    
    case 2:
        segundoAtributo1 = area1;
        segundoAtributo2 = area3;
        printf("Segundo atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - Área: %.2f Km².\n", pais1, cidade1, area1);
        printf("Carta 2: País: %s - Cidade: %s - Área: %.2f Km².\n", pais2, cidade3, area3);
        resultado2 = segundoAtributo1 > segundoAtributo2 ? 1 : 2;
        break;

    case 3:
        segundoAtributo1 = pib1;
        segundoAtributo2 = pib3;
        printf("Segundo atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - PIB: %.2f Milhões de Reais.\n", pais1, cidade1, pib1);
        printf("Carta 2: País: %s - Cidade: %s - PIB: %.2f Milhões de Reais.\n", pais2, cidade3, pib3);
        resultado2 = segundoAtributo1 > segundoAtributo2 ? 1 : 2;
        break;

    case 4:
        segundoAtributo1 = turisticos1;
        segundoAtributo2 = turisticos3;
        printf("Segundo atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - Pontos Turísticos: %d.\n", pais1, cidade1, turisticos1);
        printf("Carta 2: País: %s - Cidade: %s - Pontos Turísticos: %d.\n", pais2, cidade3, turisticos3);
        resultado2 = segundoAtributo1 > segundoAtributo2 ? 1 : 2;
        break;

    case 5:
        segundoAtributo1 = densidade_demografica1;
        segundoAtributo2 = densidade_demografica3;
        printf("Segundo atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - Densidade Demográfica: %.2f pessoas por km².\n", pais1, cidade1, densidade_demografica1);
        printf("Carta 2: País: %s - Cidade: %s - Densidade Demográfica: %.2f pessoas por km².\n", pais2, cidade3, densidade_demografica3);
        resultado2 = segundoAtributo1 < segundoAtributo2 ? 1 : 2;
        break;

    case 6:
        segundoAtributo1 = pib_per_capita1;
        segundoAtributo2 = pib_per_capita3;
        printf("segundo atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - PIB per Capita: %.2f reais por pessoa.\n", pais1, cidade1, pib_per_capita1);
        printf("Carta 2: País: %s - Cidade: %s - PIB per Capita: %.2f reais por pessoa.\n", pais2, cidade3, pib_per_capita3);
        resultado2 = segundoAtributo1 > segundoAtributo2 ? 1 : 2;
        break;

    case 7:
        segundoAtributo1 = super_poder1;
        segundoAtributo2 = super_poder3;
        printf("Segundo atributo escolhido: \n");
        printf("Carta 1: País: %s - Cidade: %s - Super Poder: %.2f pontos.\n", pais1, cidade1, super_poder1);
        printf("Carta 2: País: %s - Cidade: %s - Super Poder: %.2f pontos.\n", pais2, cidade3, super_poder3);
        resultado2 = segundoAtributo1 > segundoAtributo2 ? 1 : 2;
        break;

    default:
        printf("Opção inválida, tente de novo!\n");
        break;
    }
    printf("\n"); // Deixando um espaço entre as informações

    // Realizando a comparação do Primeiro Atributo escolhido
    printf("*** Primeira Comparação ***\n");
    if (resultado1 == 1)
    {
        printf("Carta 1 Venceu a Primeira comparação.\n");
    } else if (resultado1 == 2){
        printf("Carta 2 Venceu a Primeira comparação.\n");
    } else {
        printf("Empate!\n");
    }
    // Realizando a compração do Segundo Atributo escolhido
    printf("*** Segunda Comparação ***\n");
    if (resultado2 == 1)
    {
        printf("Carta 1 Venceu a Segunda comparação.\n");
    } else if (resultado2 == 2){
        printf("Carta 2 Venceu a Segunda comparação.\n");
    } else {
        printf("Empate!\n");
    }
    printf("\n"); // Deixando um espaço entre as informações

    printf("Realizando a Comparação em Vitória nos Dois Atributos!\n");
    if ((resultado1 == 1) && (resultado2 == 1))
    {
        printf("A carta 1 venceu nos dois atributos escolhidos!\n");

    } else if ((resultado1 == 2) && (resultado2 == 2)) {
        printf("A carta 2 venceu nos dois atributos escolhidos\n");
    } else {
        printf("Empate!\n");
    }
    
    // Realizando a soma dos pontos dos atributos escolhidos

    somaCarta1 = primeiroAtributo1 + segundoAtributo1;
    somaCarta2 = primeiroAtributo2 + segundoAtributo2;
    printf("------- Rodada Bônus -------\n");
    printf("Realizando a comparação das Cartas atravéis da Soma de Atributos:\n");
    printf("O valor da soma de atributos da Carta 1 é: %.2f\n", somaCarta1);
    printf("O valor da soma de atributos da Carta 2 é: %.2f\n", somaCarta2);
    printf("\n"); // Deixando um espaço entre as informações

    // Realizando a compração
    if (somaCarta1 == somaCarta2)
    {
        printf("Empate, tente de novo!\n");
    } else if (somaCarta1 > somaCarta2) {
        printf("Carta 1 - País: %s - Cidade: %s - Pontos: %.2f - Venceu!\n", pais1, cidade1, somaCarta1);
    } else {
        printf("Carta 2 - País: %s - Cidade: %s - Pontos: %.2f - Venceu!\n", pais2, cidade3, somaCarta2);
    }

return 0;
}