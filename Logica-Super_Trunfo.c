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
    super_poder3 = (float) populacao1 + area3 + pib3 + turisticos3 + pib_per_capita3 + inverso_densidade3; // Atribuição a variavel super_poder3
    
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
    
    /* Realizando a criação de um menu interativo com Switch, para realizar a compração das cartas.
        Para saber quem é a vencedora, fazendo uso de IF e ELSE-IF.
        A carta com o maior atributo é a vencedora, exceto para densidade demográfica, que vence a carta com o menor atributo
    */

    int opcao; // Variável para atribuir os números a ser selecionados no Switch

    printf("### Realizando as comparações de atributos entre as Cartas ###\n");
    printf("1. População.\n");
    printf("2. Área total.\n");
    printf("3. PIB da cidade.\n");
    printf("4. Pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("6. PIB per capita por pessoa.\n");
    printf("7. Inverso de Densidade Demográfica.\n");
    printf("8. Super Poder.\n");
    printf("9. Ver as regras sobre as comparações.\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n"); // Deixando um espaço entre as informações

    switch (opcao)
    {
    case 1:
        if (populacao1 > populacao3)
        {
            printf("Carta 1\n");
            printf("Código da Carta: %s\n", codigo_da_cidade1);
            printf("País: %s \n", pais1);
            printf("Cidade: %s \n", cidade1);
            printf("População: %lu habitantes\n", populacao1);
            printf("Venceu!\n");
        } else if (populacao1 < populacao3) {
            printf("Carta 2\n");
            printf("Código da Carta: %s\n", codigo_da_cidade3);
            printf("País: %s \n", pais2);
            printf("Cidade: %s \n", cidade3);
            printf("População: %lu habitantes\n", populacao3);
            printf("Venceu!\n");
        } else {
            printf("Empate!\n");
        }    
    break;
    case 2:
        if (area1 > area3)
        {
            printf("Carta 1\n");
            printf("Código da Carta: %s\n", codigo_da_cidade1);
            printf("País: %s \n", pais1);
            printf("Cidade: %s \n", cidade1);
            printf("Área: %.2f Km²\n", area1);
            printf("Venceu!\n");
        } else if (area1 < area3) {
            printf("Carta 2\n");
            printf("Código da Carta: %s\n", codigo_da_cidade3);
            printf("País: %s \n", pais2);
            printf("Cidade: %s \n", cidade3);
            printf("Área: %.2f Km²\n", area3);
            printf("Venceu!\n");
        } else {
            printf("Empate!\n");
        }    
    break;
    case 3:
        if (pib1 > pib3)
    {
            printf("Carta 1\n");
            printf("Código da Carta: %s\n", codigo_da_cidade1);
            printf("País: %s \n", pais1);
            printf("Cidade: %s \n", cidade1);
            printf("PIB: %.2f Milhões de reais\n", pib1);
            printf("Venceu!\n");
    }   else if (pib1 < pib3) {
            printf("Carta 2\n");
            printf("Código da Carta: %s\n", codigo_da_cidade3);
            printf("País: %s \n", pais2);
            printf("Cidade: %s \n", cidade3);
            printf("PIB: %.2f Milhões de reais\n", pib3);
            printf("Venceu!\n");
    } else {
        printf("Empate!\n");
    }    
    break; 
    case 4:
    if (turisticos1 > turisticos3)
    {
            printf("Carta 1\n");
            printf("Código da Carta: %s\n", codigo_da_cidade1);
            printf("País: %s \n", pais1);
            printf("Cidade: %s \n", cidade1);
            printf("Pontos Turísticos: %d \n", turisticos1);
            printf("Venceu!\n");
        } else if (turisticos1 < turisticos3) {
            printf("Carta 2\n");
            printf("Código da Carta: %s\n", codigo_da_cidade3);
            printf("País: %s \n", pais2);
            printf("Cidade: %s \n", cidade3);
            printf("Pontos Turísticos: %d \n", turisticos3);
            printf("Venceu!\n");
        } else {
            printf("Empate!\n");
    }    
    break;
    case 5:
    if (densidade_demografica1 < densidade_demografica3)
    {
            printf("Carta 1\n");
            printf("Código da Carta: %s\n", codigo_da_cidade1);
            printf("País: %s \n", pais1);
            printf("Cidade: %s \n", cidade1);
            printf("Densidade Demográfica: %.2f pessoas por Km²\n", densidade_demografica1);
            printf("Venceu!\n");
        } else if (densidade_demografica3 < densidade_demografica1) {
            printf("Carta 2\n");
            printf("Código da Carta: %s\n", codigo_da_cidade3);
            printf("País: %s \n", pais2);
            printf("Cidade: %s \n", cidade3);
            printf("Densidade Demográfica: %.2f pessoas por Km²\n", densidade_demografica3);
            printf("Venceu!\n");
        } else {
            printf("Empate!\n");
    }    
    break;
    case 6:
    if (pib_per_capita1 > pib_per_capita3)
    {
            printf("Carta 1\n");
            printf("Código da Carta: %s\n", codigo_da_cidade1);
            printf("País: %s \n", pais1);
            printf("Cidade: %s \n", cidade1);
            printf("PIB per Capita: %.2f reais por pessoa\n", pib_per_capita1);
            printf("Venceu!\n");
        } else if (pib_per_capita1 < pib_per_capita3) {
            printf("Carta 2\n");
            printf("Código da Carta: %s\n", codigo_da_cidade3);
            printf("País: %s \n", pais2);
            printf("Cidade: %s \n", cidade3);
            printf("PIB per Capita: %.2f reais por pessoa\n", pib_per_capita3);
            printf("Venceu!\n");
        } else {
            printf("Empate!\n");
    }    
    break;
    case 7:
    if (inverso_densidade1 < inverso_densidade3)
    {
            printf("Carta 1\n");
            printf("Código da Carta: %s\n", codigo_da_cidade1);
            printf("País: %s \n", pais1);
            printf("Cidade: %s \n", cidade1);
            printf("Inverso de Densidade Demográfica: %.4f pessoas\n", inverso_densidade1);
            printf("Venceu!\n");
        } else if (inverso_densidade3 < inverso_densidade1) {
            printf("Carta 2\n");
            printf("Código da Carta: %s\n", codigo_da_cidade3);
            printf("País: %s \n", pais2);
            printf("Cidade: %s \n", cidade3);
            printf("Inverso de Densidade Demográfica: %.4f pessoas\n", inverso_densidade3);
            printf("Venceu!\n");
        } else {
            printf("Empate!\n");
    }    
    break;
    case 8:
    if (super_poder1 > super_poder3)
    {
            printf("Carta 1\n");
            printf("Código da Carta: %s\n", codigo_da_cidade1);
            printf("País: %s \n", pais1);
            printf("Cidade: %s \n", cidade1);
            printf("Super Poder: %.2f pontos\n", super_poder1);
            printf("Venceu!\n");
        } else if (super_poder1 < super_poder3) {
            printf("Carta 2\n");
            printf("Código da Carta: %s\n", codigo_da_cidade3);
            printf("País: %s \n", pais2);
            printf("Cidade: %s \n", cidade3);
            printf("Super Poder: %.2f pontos\n", super_poder3);
            printf("Venceu!\n");
        } else {
            printf("Empate!\n");
    }    
    break;
    case 9:
            printf("As regras são:\n"); 
            printf("A carta com o maior atributo vence.\n");
            printf("Exceto a Densidade Demográfica e o Inverso da Densidade Demográfica, ");
            printf("vence a carta com o menor atributo.\n");
    break;
    
    default:
            printf("Opção inválida, tente de novo!\n");
    break;
    }

return 0;
}