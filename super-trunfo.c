#include <stdio.h>

int main() {
  printf("Vamos começar! Crie sua primeira carta de super trunfo!\n");

  char estado1;
  printf("Insira APENAS UMA letra do seu primeiro estado: ");
  scanf(" %c", &estado1);
  char codigo1[4]; 
  printf("Insira o seu correspondente código: ");
  scanf("%s", codigo1);
  char nomeCidade1[50]; 
  printf("O nome da cidade agora: ");
  scanf("%s", nomeCidade1);
  unsigned long int populacao1;
  printf("A população total: ");
  scanf("%lu", &populacao1);
  float area1;
  printf("Sua área em KM: ");
  scanf("%f", &area1);
  float pib1;
  printf("Seu atual PIB: ");
  scanf("%f", &pib1);
  int pontosTuristicos1;
  printf("E sua quantia de pontos túristicos: ");
  scanf("%d", &pontosTuristicos1);

  float densidade1 = populacao1 / area1;
  float capita1 = pib1 / populacao1;
  float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + capita1 + (1.0 / densidade1);

  printf("Agora para a próxima carta.\n");

  char estado2;
  printf("Insira APENAS UMA letra para seu segundo estado: ");
  scanf(" %c", &estado2);
  char codigo2[6]; 
  printf("Insira o seu correspondente código: ");
  scanf("%s", codigo2);
  char nomeCidade2[50]; 
  printf("O nome da cidade agora: ");
  scanf("%s", nomeCidade2);
  unsigned long int populacao2;
  printf("A população total: ");
  scanf("%lu", &populacao2);
  float area2;
  printf("Sua área em KM: ");
  scanf("%f", &area2);
  float pib2;
  printf("Seu atual PIB: ");
  scanf("%f", &pib2);
  int pontosTuristicos2;
  printf("E sua quantia de pontos túristicos: ");
  scanf("%d", &pontosTuristicos2);

  float densidade2 = populacao2 / area2;
  float capita2 = pib2 / populacao2;
  float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + capita2 + (1.0 / densidade2);

  printf("\n");

  printf("Agora os status de cada carta que você adicionou, sendo a primeira: \n");

  printf("Essa é a sua primeira carta: \n");
  printf("Estado número 1: %c\n", estado1);
  printf("Código número 1: %s\n", codigo1);
  printf("Nome da cidade é: %s\n", nomeCidade1);
  printf("A população dela é de: %lu habitantes.\n", populacao1);
  printf("Sua área em quadrados é de: %.2f\n", area1);
  printf("Com um PIB de: %.2f\n", pib1);
  printf("E por fim, tem um total de: %d pontos túristicos.\n", pontosTuristicos1);
  printf("A densidade populacional é de: %.2f\n", densidade1);
  printf("O seu PibPerCapita é de: %.2f\n", capita1);

  printf("\n");

  printf("Essa é a sua segunda carta: \n");
  printf("Estado número 2: %c\n", estado2);
  printf("Código número 2: %s\n", codigo2);
  printf("Nome da cidade é: %s\n", nomeCidade2);
  printf("A população dela é de: %lu habitantes.\n", populacao2);
  printf("Sua área em quadrados é de: %.2f\n", area2);
  printf("Com um PIB de: %.2f\n", pib2);
  printf("E por fim, tem um total de: %d pontos túristicos.\n", pontosTuristicos2);
  printf("A densidade populacional é de: %.2f\n", densidade2);
  printf("O seu PibPerCapita é de: %.2f\n", capita2);

  printf("\n");

  printf("Agora vamos comparar as cartas e seus atributos. Se der (0), significa que a carta 2 venceu e se der (1), significa que a 2 venceu, mas na densidade é vice-versa.\n");

  printf("\n");

  printf("População: (%d)\n", populacao1 > populacao2);
  printf("Área: (%d)\n", area1 > area2);
  printf("PIB: (%d)\n", pib1 > pib2);
  printf("Pontos Turísticos: (%d)\n", pontosTuristicos1 > pontosTuristicos2);
  printf("Densidade Populacional: (%d)\n", densidade1 < densidade2);
  printf("PIB per Capita: (%d)\n", capita1 > capita2);
  printf("Super Poder: (%d)\n", superPoder1 > superPoder2);

  return 0;
}
