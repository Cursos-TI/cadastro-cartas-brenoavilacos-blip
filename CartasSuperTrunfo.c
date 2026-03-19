#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // As varávies receberão os dados informados pelo usuários

  char estado1;
  char codigo1[3];
  char cidade1;
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  char estado2;
  char codigo2[3];
  char cidade2;
  int populacao2;
  float area2;
  float pib2;
  int pontos2;


  // Área para entrada de dados
  // Nesta área constarão os códigos para inprimir as mensagens de solicitação de entrada de dados.
  // Estarão também nesta área os códigos tipo scanf para armazenar os dados informados pelo usuário.
  
  printf("Digite o Estado em que a primeira cidade está localizada(Utilize uma letra de A a H para dar nome ao estado, use letra mauscula): ");
  scanf("%s", estado1 );

  printf("Digite o código identificador da primeira cidade(Exemplo: A01, B02, C03): ");
  scanf("$s", codigo1);

  printf("Digite o nome da primeira cidade: ");
  scanf("%s", cidade1);

  print("Digite a população da primeira cidade: ");
  scanf("%d", populacao1);

  printf("Digite a área, em quilômetros quadrados, da primeira cidade: ");
  scanf("%f", area1);

  prinf("Digite o PIB da  primeira cidade: ");
  scanf("%f", pib1);

  print("Digite o numero de pontos turísticos da primeira cidade: ");
  scanf("%d", pontos1);


  printf("Digite o Estado em que a segunda cidade está localizada(Utilize uma letra de A a H para dar nome ao estado, use letra mauscula): ");
  scanf("%s", estado2 );

  printf("Digite o código identificador da segunda cidade(Exemplo: A01, B02, C03): ");
  scanf("$s", codigo2);

  printf("Digite o nome da segunda cidade: ");
  scanf("%s", cidade2);

  print("Digite a população da segunda cidade: ");
  scanf("%d", populacao2);

  printf("Digite a área, em quilômetros quadrados, da segunda cidade: ");
  scanf("%f", area2);

  prinf("Digite o PIB da segunda cidade: ");
  scanf("%f", pib2);

  print("Digite o numero de pontos turísticos da segunda cidade: ");
  scanf("%d", pontos2);


  // Área para exibição dos dados da cidade
  // Nesta áre serão exinidos na tela do terminal os valores informados pelo usuário ao cadastras as 2 cartas.

    printf("Carta 1");
    printf("Estado: %s", estado1);
    printf("Código: %s", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Polulação %$d", populacao1);
    printf("Área %f:", area1);
    printf("PIB %f:", pib1);
    printf("Número de Pontos Turísticos %d:", pontos1);

    printf("Carta 2");
    printf("Estado: %s", estado2);
    printf("Código: %s", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Polulação %$d", populacao2);
    printf("Área %f:", area2);
    printf("PIB %f:", pib2);
    printf("Número de Pontos Turísticos %d:", pontos2);




  
  

return 0;
} 
