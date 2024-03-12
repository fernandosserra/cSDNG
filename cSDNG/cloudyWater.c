#include <stdio.h>
#include <stdlib.h>

//Variáveis de escolha local
int localOption, apotecharyMenu, healthPotion, suspiciousLiquid;


// Função global em português
int cloudyWaterPtBR(){
	printf("\n\t\t A pequena fila de casas parece ter sido construida de modo a se alinhar com uma velha igreja, construida em pedra.");
	printf("\n\t\t O cheiro inconfundivel de peixe velho e cachorro molhado chega as suas narinas. Voce se sente nauseado, nao sabe se ainda e o efeito da bebida do velho, ou se e o cheiro que o incomoda mais.");	
	printf("\n\t\t O que e certo, e que esse lugar tem um certo charme, parece mesmo uma vila onde as pessoas sao reservadas e vivem sua vida sem se preocupar com o mundo ao redor...");
	printf("\n\t\t Ao passar pelo que seria um velho portao, ladeado por muros caidos, voce nota uma placa que diz em letras desgastadas \'Boticario\'");
}

// Função global em inglês
int cloudyWaterEnUS(){
	printf("\n\t\t The small row of houses appears to have been built to line up with an old stone church.");
	printf("\n\t\t The unmistakable smell of old fish and wet dog reaches your nostrils. You feel nauseous, you don't know if it's still the effect of the old man's drink, or if it's the smell that bothers you more.");	
	printf("\n\t\t What is certain is that this place has a certain charm, it really seems like a village where people are reserved and live their lives without worrying about the world around them...");
	printf("\n\t\t As you pass by what would be an old gate, flanked by fallen walls, you notice a sign that says in worn letters \'Apothecary\'");
}

// Função do Apotecário em português
int apotecharyPtBR(){
	printf("\n\t\t Ao entrar no casebre, um homem encurvado, ostentando um tapa olho te cumprimenta:");
	printf("\n\t\t — Saudacoes, estrangeiro. Nao e todo dia que recebemos visitantes por aqui. O que vai ser?");
	printf("\n\t\t Notando sua indecisao, ele continua: ");
	printf("\n\t\t Aqui nao tem muita opcao, nos temos uma Pocao Roxa e uma Pocao Verde, qual delas voce quer tomar?");
	printf("\n\n 1- Tomar a Poção Roxa");
	printf("\n\n 2- Tomar a Poção Verde");
	scanf("%d", &apotecharyMenu);
}

// Função do Apotecário em Inglês
int apotecharyEnUS(){
	printf("\n\t\t Upon entering the hut, a hunched man, wearing an eye patch, greets you:");
	printf("\n\t\t — Greetings, foreigner. It's not every day that we receive visitors here. What will it be?");
	printf("\n\t\t Noticing your indecision, he continues: ");
	printf("\n\t\t There aren't many options here, we have a Purple Potion and a Green Potion, which one do you want to take?");
	printf("\n\n 1- Take the Purple Potion");
	printf("\n\n 2- Take the Green Potion");
	scanf("%d", &apotecharyMenu);
}