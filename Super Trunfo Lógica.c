#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");

int escolhaComputador;
int escolhaJogador;
srand(time(0));

printf("=====Bem-Vindo ao Super Trunfo=====\n");
printf("========Escolha um Número==========\n");
printf("1 - Primeira Carta\n");
printf("2 - Segunda Carta\n");
printf("3 - Terceira Carta\n");
printf("===================================\n");
scanf("%d", &escolhaJogador);

escolhaComputador = rand() % 3 + 1;

switch (escolhaJogador)
{
case 1:
    printf("Você escolheu a Primeira carta!\n -");
    printf("Atributos:\n -");
    printf("Estado: Rio de Janeiro\n -");
    printf("Nome da Cidade: Nova Iguaçu\n -");
    printf("População: 785.867\n -");
    printf("Área: 520,8 km2\n -");
    printf("PIB: 17,8 bilhões\n -");
    break;

case 2:
printf("Você escolheu a Segunda carta!\n -");
    printf("Atributos: \n -");
    printf("Estado: Rio de Janeiro\n -");
    printf("Nome da Cidade: Duque de Caxias\n -");
    printf("População: 866.347\n -");
    printf("Área: 467.319 km2\n -");
    printf("PIB: 45,3 milhões\n -");
    break;
    
case 3:
	printf("Você escolheu a Terceira Carta!\n -");
    printf("Atributos do Adversário: \n -");
    printf("Estado: Rio de Janeiro\n -");
    printf("Nome da Cidade: Cabo Frio\n -");
    printf("População: 222.161\n -");
    printf("Área: 410.415 km2\n -");
    printf("PIB: 52,8 milhões\n -");
    break;

default: printf("Opção Inválida!\n");
    break;
}

switch (escolhaComputador)
{
case 1:
    printf("Você escolheu a Primeira carta!\n");
    printf("Atributos do Adversário:\n");
    printf("Estado: Rio de Janeiro\n");
    printf("Nome da Cidade: Nova Iguaçu\n");
    printf("População: 785.867\n");
    printf("Área: 520,8 km2\n");
    printf("PIB: 17,8 bilhões\n ");
    break;

case 2:
printf("Você escolheu a Segunda carta!\n");
    printf("Atributos do Adversário: \n");
    printf("Estado: Rio de Janeiro\n");
    printf("Nome da Cidade: Duque de Caxias\n");
    printf("População: 866.347\n");
    printf("Área: 467.319 km2\n");
    printf("PIB: 45,3 milhões\n");
    break;

case 3:
	printf("Você escolheu a Terceira Carta!\n");
    printf("Atributos do Adversário: \n");
    printf("Estado: Rio de Janeiro\n");
    printf("Nome da Cidade: Cabo Frio\n");
    printf("População: 222.161\n");
    printf("Área: 410.415 km2\n");
    printf("PIB: 52,8 milhões\n");
    break;
    
default: printf("Opção Inválida!\n");
    break;
return 0;
}
 if(escolhaComputador == escolhaJogador)
 {
 	printf("***O Jogo Empatou***\n");	
 	
} else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
           (escolhaJogador == 2) && (escolhaComputador == 1) ||
           (escolhaJogador == 3) && (escolhaComputador == 2)) 
{
 printf("**Você ganhou**!\n");
 } else {
 	printf("**Você perdeu**!\n");
 }
 return 0;
}