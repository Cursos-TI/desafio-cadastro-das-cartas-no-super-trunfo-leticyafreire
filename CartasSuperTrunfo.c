#include <stdio.h>

int main (){

int carta;
int populacao;
int numerodepontosturisticos;
char estado[50];
char codigodacarta[50];
char nomedacidade[50];
float pib;
float area;

printf("Digite a o Número da Carta: \n");
scanf("%d", &carta);

printf("Digite o Estado: \n");
scanf("%s", &estado);

printf("Digite o Código da Carta: \n");
scanf("%s", &codigodacarta);

printf("Digite o Nome da Cidade: \n");
scanf("%s", &nomedacidade);

printf("Digite o Número de População: \n");
scanf("%d", &populacao);

printf("Digite a Área: \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &pib);

printf("Digite o Número de Pontos Turísticos: \n");
scanf("%d", &numerodepontosturisticos);

printf("Carta: %d \n", carta);
printf("Estado: %s \n", estado);
printf("Código da Carta: %s \n", codigodacarta);
printf("Nome da Cidade: %s \n", nomedacidade);
printf("População: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB: %f \n", pib);
printf("Número de Pontos Turísticos: %d \n", numerodepontosturisticos);


return 0;
}