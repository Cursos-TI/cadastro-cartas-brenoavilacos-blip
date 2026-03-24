#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // As varávies receberão os dados informados pelo usuários

  char estado1, codigo1[4], cidade1[30];
  unsigned long int populacao1;
  float area1, pib1, super_poder1, densidade1, pibpercapta1, inverso_densidade1;
  int pontos1;
  
  char estado2, codigo2[4], cidade2[30];
  unsigned long int populacao2;
  float area2, pib2, super_poder2, densidade2, pibpercapta2, inverso_densidade2;
  int pontos2;
  

  
  // Área para entrada de dados
  // Nesta área constarão os códigos para inprimir as mensagens de solicitação de entrada de dados.
  // Estarão também nesta área os códigos tipo scanf para armazenar os dados informados pelo usuário.
  
  


  
  printf("Digite o Estado em que a primeira cidade está localizada(Utilize uma letra de A a H para dar nome ao estado, use letra mauscula):\n");
  scanf(" %c", &estado1 );

  printf("Digite o código identificador da primeira cidade(Exemplo: A01, B02, C03):\n");
  scanf(" %4c", &codigo1);

  printf("Digite o nome da primeira cidade:\n");
  scanf("%s", cidade1);

  printf("Digite a população da primeira cidade:\n");
  scanf(" %ul", &populacao1);

  printf("Digite a área, em quilômetros quadrados, da primeira cidade:\n");
  scanf("%f", &area1);

  printf("Digite o PIB da  primeira cidade:\n");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turísticos da primeira cidade:\n");
  scanf("%d", &pontos1);


  printf("Digite o Estado em que a segunda cidade está localizada(Utilize uma letra de A a H para dar nome ao estado, use letra mauscula):\n");
  scanf(" %c", &estado2 );

  printf("Digite o código identificador da segunda cidade(Exemplo: A01, B02, C03):\n");
  scanf(" %4c", &codigo2);

  printf("Digite o nome da segunda cidade:\n");
  scanf("%s", cidade2);

  printf("Digite a população da segunda cidade:\n");
  scanf(" %ul", &populacao2);

  printf("Digite a área, em quilômetros quadrados, da segunda cidade:\n");
  scanf("%f", &area2);

  printf("Digite o PIB da segunda cidade:\n");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turísticos da segunda cidade:\n");
  scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade
  // Nesta áre serão exinidos na tela do terminal os valores informados pelo usuário ao cadastras as 2 cartas.
  // Área para o calculo da densidade populacional e PIB per capta.
  // Área para o calculo da variavél Super Poder.
    
  
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpercapta1 = pib1 / populacao1;
    pibpercapta2 = pib2 / populacao2;

    inverso_densidade1 = 1.0 / densidade1;
    inverso_densidade2 = 1.0 / densidade2;

    super_poder1 = (float) populacao1 + (float)area1 + (float)pib1 + (float)pontos1 +  (float)pibpercapta1 + (float)densidade1, (float)inverso_densidade1;
    super_poder2 = (float) populacao2 + (float)area2 + (float)pib2 + (float)pontos2 +  (float)pibpercapta2 + (float)densidade2 + (float)inverso_densidade2;

    printf("Carta 1");
    printf("Estado: %c", estado1);
    printf("Código: %s", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Polulação %ul", populacao1);
    printf("Área %.2f:", area1);
    printf("PIB %.2f:", pib1);
    printf("Número de Pontos Turísticos %d:", pontos1);
    printf("O Super Poder é: %.2f", super_poder1);

    printf("Carta 2");
    printf("Estado: %c", estado2);
    printf("Código: %s", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Polulação %ul", populacao2);
    printf("Área %.2f:", area2);
    printf("PIB %.2f:", pib2);
    printf("Número de Pontos Turísticos %d:", pontos2);
    printf("O Super Poder é: %.2f", super_poder2);  



  
  

return 0;
} 
