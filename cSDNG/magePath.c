#include <stdio.h>
#include <stdlib.h>
#include "cloudyWater.h"
#include "swampVillage.h"
#include "specialEvent.h"

int magePathPtBR() {
	int baseHP = 5;
	int baseMP = 12;
	int currentHP = baseHP;
	int currentMP = baseMP;

	system("cls");

	printf("\n\t\tVoce acorda, aparentemente, no mesmo lugar que caiu");
	printf("\n\t\tO chao nao pareceu uma cama muito confortavel, mas serviu bem, voce esta descansado");
	printf("\n\t\tAo olhar para o lado, voce se assusta ao notar uma barra flutuante, nas cores vermelha e azul");
	printf("\n\t\tAo lado de cada cor, um pequeno texto mostra para voce os seguintes indicadores:\n");
	printf("\n\t\t%dHP / %dMP\n\n", currentHP, currentMP);

	system("PAUSE");
	system("cls");

	printf("\n\t\tVoce da uma boa olhada ao redor e consegue distinguir uma trilha.\n\t\tAo caminhar por ela, logo percebe que o caminho fica mais\n\t\tlargo e se depara com uma estrada.\n");
	printf("\n\t\tUm poste velho, enegrecido por alguma combustao passada,\n\t\tse ergue solitario. Duas placas estao penduradas precariamente\n\t\tno poste. Ao se aproximar dele voce le:\n");
	printf("\n\t\tVila da Agua Turva - 2km adiante");
	printf("\n\t\tPovoado do Charco - 1km nesta direcao\n\n");
	printf("\n\t\tOs nomes nao parecem animadores, mas voce sente que nao ha muita escolha. O que deseja fazer?");

	int chooseCity = 0;
	int cityChosen;

	printf("\n\t\t1 - Ir para a Vila da Agua Turva\n\t\t2 - Ir para o Povoado do Charco\n\t\t3 - Nao fazer nada\n\t\t");
	scanf("%d", &chooseCity);
	
	do{
		if(chooseCity == 1){
			cityChosen = cloudyWaterPtBR();
		} else if(chooseCity == 2){
			cityChosen = swampVillagePtBR();
		} else{
			cityChosen = specialEventPtBR();
		}
	} while (chooseCity > 2 || chooseCity < 1);

}

int magePathEnUS() {
	int baseHP = 5;
	int baseMP = 12;
	int currentHP = baseHP;
	int currentMP = baseMP;

	system("cls");

	printf("\n\t\tYou wake up, apparently, in the same place you fell");
	printf("\n\t\tThe floor didn't seem like a very comfortable bed, but it served well, you're rested");
	printf("\n\t\tWhen you look to the side, you are startled to notice a floating in red and blue colors.");
	printf("\n\t\tNext to each color, a small text shows the following numbers:\n");
	printf("\n\t\t%dHP / %dMP\n\n", currentHP, currentMP);

	system("PAUSE");
	system("cls");

	printf("\n\t\tYou take a good look around and can make out a trail.\n\t\tAs you walk along it, you soon notice that the path becomes wider and comes across a road.");
	printf("\n\t\tAn old pole, blackened by some past combustion, stands alone.\n\t\tTwo signs hang precariously from the post.\n\t\tAs you approach him you read:");
	printf("\n\t\tBlackwater Swamps - 2km further");
	printf("\n\t\tPond Village - 1km in this direction");
	printf("\n\t\tThe names don't sound exciting, but you feel like there isn't much choice. What do you want to do?\n\t\t");

	int chooseCity = 0;
	int cityChosen;

	printf("\n\t\t1 - Go to Blackwater Swamps\n\t\t2 - Go to Pond Village\n\t\t3 - Do nothing\n\t\t");
	scanf("%d", &chooseCity);
	
	do{
		if(chooseCity == 1){
			cityChosen = cloudyWaterEnUS();
		} else if(chooseCity == 2){
			cityChosen = swampVillageEnUS();
		} else{
			cityChosen = specialEventEnUS();
		}
	} while (chooseCity > 2 || chooseCity < 1);


}