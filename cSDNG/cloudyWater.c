#include <stdio.h>
#include <stdlib.h>
#include "classes.h"

//Variáveis de escolha local
int localOption, apotecharyMenu;
int healthPotion =3;
int suspiciousLiquid =-3;


// Função global em português
int cloudyWaterPtBR(){
	printf("\n\t\t A pequena fila de casas parece ter sido construida de modo a se alinhar com uma velha igreja, construida em pedra.");
	printf("\n\t\t O cheiro inconfundivel de peixe velho e cachorro molhado chega as suas narinas. Voce se sente nauseado, nao sabe se ainda e o efeito da bebida do velho, ou se e o cheiro que o incomoda mais.");	
	printf("\n\t\t O que e certo, e que esse lugar tem um certo charme, parece mesmo uma vila onde as pessoas sao reservadas e vivem sua vida sem se preocupar com o mundo ao redor...");
	printf("\n\t\t Ao passar pelo que seria um velho portao, ladeado por muros caidos, voce nota uma placa que diz em letras desgastadas \'Boticario\'");
	printf("\n\t\t Mais adiante, ha uma outra placa, ainda mais deteriorada que diz \'Estalagem\'");
	printf("\n\t\t Onde voce deseja ir?\n");
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
	printf("\n\t\t The small row of houses appears to have been built to line up with an old stone church.");
	printf("\n\t\t The unmistakable smell of old fish and wet dog reaches your nostrils. You feel nauseous, you don't know if it's still the effect of the old man's drink, or if it's the smell that bothers you more.");	
	printf("\n\t\t What is certain is that this place has a certain charm, it really seems like a village where people are reserved and live their lives without worrying about the world around them...");
	printf("\n\t\t As you pass by what would be an old gate, flanked by fallen walls, you notice a sign that says in worn letters \'Apothecary\'");
	printf("\n\t\t Further on, there is another sign, even more deteriorated, that says \'Inn\'");
	printf("\n\t\t Where do you want to go?\n");
	printf("\n\t\t 1 - Apothecary\n");
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
	printf("\n\t\t — Saudacoes, estrangeiro. Nao e todo dia que recebemos visitantes por aqui. O que vai ser?");
	printf("\n\t\t Notando sua indecisao, ele continua: ");
	printf("\n\t\t Aqui nao tem muita opcao, nos temos uma Pocao Roxa e uma Pocao Verde, qual delas voce quer tomar?");
	printf("\n\t\t 1- Tomar a Pocao Roxa");
	printf("\n\t\t 2- Tomar a Pocao Verde");
	printf("\n\t\t 3- Nao tomar nada");
	do {scanf("%d", &apotecharyMenu);
		if(apotecharyMenu == 1){
			printf("\n\t\t Voce toma a pocao roxa e sente um fluxo de poder correndo em suas veias.");
		}else if(apotecharyMenu == 2){
			printf("\n\t\t Voce toma a pocao verde e sente uma pontada no estômago, algo nao esta certo.");			
		}else{
			printf("\n\t\t O velho da uma risada enquanto diz:\n");
			printf("\n\t\t — Nao sao todos que tem estomago para as minhas garrafadas!");
		}
	} while (apotecharyMenu > 3 && apotecharyMenu < 1);
}

// Function of the Apothecary in English
int apothecaryEnUS(){
	printf("\n\t\t Upon entering the hut, a hunched man, wearing an eye patch, greets you:");
	printf("\n\t\t — Greetings, foreigner. It's not every day that we receive visitors here. What will it be?");
	printf("\n\t\t Noticing your indecision, he continues: ");
	printf("\n\t\t There aren't many options here, we have a Purple Potion and a Green Potion, which one do you want to take?");
	printf("\n\t\t 1- Take the Purple Potion");
	printf("\n\t\t 2- Take the Green Potion");
	printf("\n\t\t 3- Don't drink anything");
	do {scanf("%d", &apotecharyMenu);
		if(apotecharyMenu == 1){
			printf("\n\t\t You drink the purple potion and feel a flow of power running through your veins.");
		}else if(apotecharyMenu == 2){
			printf("\n\t\t You drink the green potion and feel an intense pain in your stomach, something is not right.");
		}else{
			printf("\n\t\t The old man laughs while saying:\n");
			printf("\n\t\t — Not everyone has the stomach for my drinks!");						
		}
	} while (apotecharyMenu > 3 && apotecharyMenu < 1);
}

int innPtBR(){

}

int innEnUS(){
	
}