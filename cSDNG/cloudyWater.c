#include <stdio.h>
#include <stdlib.h>
#include "classes.h"

//Variáveis de escolha local
int localOption, apotecharyMenu;
int healthPotion =3;
int suspiciousLiquid =-3;


// Função global em português
int cloudyWaterPtBR(){
	printf("\n\t\t A pequena fila de casas parece ter sido construida de modo a se alinhar com\n\t\tuma velha igreja, construida em pedra.");
	printf("\n\t\t O cheiro inconfundivel de peixe velho e cachorro molhado chega as suas narinas.\n\t\tVoce se sente nauseado, nao sabe se ainda e o efeito da bebida do velho,\n\t\tou se e o cheiro que o incomoda mais.");	
	printf("\n\t\t O que e certo, e que esse lugar tem um certo charme, parece mesmo uma vila\n\t\tonde as pessoas sao reservadas e vivem sua vida sem se preocupar com o mundo ao redor...");
	printf("\n\t\t Ao passar pelo que seria um velho portao, ladeado por muros caidos,\n\t\tvoce nota uma placa que diz em letras desgastadas \'Boticario\'");
	printf("\n\t\t Mais adiante, ha uma outra placa, ainda mais deteriorada que diz \'Estalagem\'");
	printf("\n\t\t Onde voce deseja ir?\n\t\t");
	printf("\n\t\t 1 - Boticario");
	printf("\n\t\t 2 - Estalagem\n\t\t");
	scanf("%d", &localOption);
	switch(localOption){
		case 1 :
		apothecaryPtBR();
		break;

		case 2 :
		innPtBR();
		break;

		default :
		printf("Voce esta indeciso?\n");
	}
}

// Global function in English
int cloudyWaterEnUS(){
	printf("\n\t\t The small row of houses appears to have been built to line up\n\t\twith an old stone church.");
	printf("\n\t\t The unmistakable smell of old fish and wet dog reaches your nostrils.\n\t\tYou feel nauseous, you don't know if it's still the effect of the old man's drink,\n\t\tor if it's the smell that bothers you more.");	
	printf("\n\t\t What is certain is that this place has a certain charm,\n\t\tit really seems like a village where people are reserved and live their lives without worrying about the world around them...");
	printf("\n\t\t As you pass by what would be an old gate, flanked by fallen walls,\n\t\tyou notice a sign that says in worn letters \'Apothecary\'");
	printf("\n\t\t Further on, there is another sign, even more deteriorated, that says \'Inn\'");
	printf("\n\t\t Where do you want to go?\n\t\t");
	printf("\n\t\t 1 - Apothecary");
	printf("\n\t\t 2 - Inn\n");
	scanf("%d", &localOption);
	switch(localOption){
		case 1 :
		apothecaryEnUS();
		break;

		case 2 :
		innEnUS();
		break;

		default :
		printf("Are you undecided?\n");
	}
}

// Função do Apotecário em português
int apothecaryPtBR(){
	printf("\n\t\t Ao entrar no casebre, um homem encurvado, ostentando um tapa olho te cumprimenta:");
	printf("\n\t\t Saudacoes, estrangeiro. Nao e todo dia que recebemos visitantes por aqui. O que vai ser?");
	printf("\n\t\t Notando sua indecisao, ele continua: ");
	printf("\n\t\t Aqui nao tem muita opcao, nos temos uma Pocao Roxa e uma Pocao Verde, qual delas voce quer tomar?");
	printf("\n\t\t 1- Tomar a Pocao Roxa");
	printf("\n\t\t 2- Tomar a Pocao Verde");
	printf("\n\t\t 3- Nao tomar nada\n\t\t");
	do {scanf("%d", &apotecharyMenu);
		if(apotecharyMenu == 1){
			printf("\n\t\t Voce toma a pocao roxa e sente um fluxo de poder correndo em suas veias.");
		}else if(apotecharyMenu == 2){
			printf("\n\t\t Voce toma a pocao verde e sente uma pontada no estomago, algo nao esta certo.");			
		}else{
			printf("\n\t\t O velho da uma risada enquanto diz:\n");
			printf("\n\t\t Nao sao todos que tem estomago para as minhas garrafadas!");
		}
	} while (apotecharyMenu > 3 && apotecharyMenu < 1);
}

// Function of the Apothecary in English
int apothecaryEnUS(){
	printf("\n\t\t Upon entering the hut, a hunched man, wearing an eye patch, greets you:");
	printf("\n\t\t Greetings, foreigner. It's not every day that we receive visitors here. What will it be?");
	printf("\n\t\t Noticing your indecision, he continues: ");
	printf("\n\t\t There aren't many options here, we have a Purple Potion and a Green Potion, which one do you want to take?");
	printf("\n\t\t 1- Take the Purple Potion");
	printf("\n\t\t 2- Take the Green Potion");
	printf("\n\t\t 3- Don't drink anything\n\t\t");
	do {scanf("%d", &apotecharyMenu);
		if(apotecharyMenu == 1){
			printf("\n\t\t You drink the purple potion and feel a flow of power running through your veins.");
		}else if(apotecharyMenu == 2){
			printf("\n\t\t You drink the green potion and feel an intense pain in your stomach, something is not right.");
		}else{
			printf("\n\t\t The old man laughs while saying:\n");
			printf("\n\t\t Not everyone has the stomach for my drinks!");						
		}
	} while (apotecharyMenu > 3 && apotecharyMenu < 1);
}

int innPtBR(){
	int innMenuPtBR;
	
	printf("\n\t\t A velha estalagem tem um cheiro de mofo e velas queimadas.\n\t\tNo balcao, uma mulher baixinha e robusta sorri:");
	printf("\n\t\t Bem vindo ao Caramujo Caolho! O que vai querer?");
	printf("\n\t\t 1 - Eu quero um quarto");
	printf("\n\t\t 2 - Eu quero uma refeicao");
	printf("\n\t\t 3 - Voce sabe de alguma coisa interessante?");
	
	switch (innMenuPtBR)
	{
	case 1:
		int roomPtBR;
		
		printf("\n\t\t Ah, voce quer um quarto? Claro que temos um!\n\t\tVoce gostaria de um quarto duplo, ou simples?");
		printf("\n\t\t 1 - Quarto Simples");
		printf("\n\t\t 2 - Quarto Duplo");
		
		do(scanf("%d",&roomPtBR)){
		}while (roomPtBR < 0 && roomPtBR > 2);
		
		if(roomPtBR == 1){
			printf("\n\t\t Aqui esta sua chave! Tenha um bom descanso");
		}else{
			printf("\n\t\t Aqui esta sua chave. Por favor, tome cuidado com a lareira");
		}


		break;
	
	case 2:
		printf("\n\t\t Por hora so temos carne de porco e peixe frito!");
		break;

	case 3:
		printf("\n\t\t Hummm... Depende, por algums moedas, eu posso saber...");
	
	default:
		break;
	}
}

int innEnUS(){
	int innMenuEnUS;
	printf("\n\t\t The old inn has a musty smell and burnt candles.\n\t\tAt the counter, a short, stout woman smiles:");
	printf("\n\t\t Welcome to One-Eyed Caramujo! What do you want?");
	printf("\n\t\t 1 - I want a room");
	printf("\n\t\t 2 - I want a meal");
	printf("\n\t\t 3 - Do you know anything interesting?");
	switch (innMenuEnUS)
	{
	case 1:
		int roomEnUS;

		printf("\n\t\t Oh! Do you want a room? Sure, we have one!");
		printf("\n\t\t 1 - Simple Room");
		printf("\n\t\t 2 - Double Room");

		do(scanf("%d",&roomEnUs)){
		}while (roomEnUs < 0 && roomEnUs > 2);
		
		if(roomPtBR == 1){
			printf("\n\t\t Here is your key! Have a nice rest");
		}else{
			printf("\n\t\t Here is your key. Please be careful with the fireplace");
		}
		break;
	
	case 2:
		printf("\n\t\t For now, we hake some pork and fried fish!");
		break;
	
	case 3:
		printf("\n\t\t Hmm... It depends, for a few coins, I might have heard something...");
		break;

	default:
		break;
	}
}