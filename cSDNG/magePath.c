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

	printf("\n\t\tVoce da uma boa olhada ao redor e consegue distinguir uma trilha. Ao caminhar por ela, logo percebe que o caminho fica mais largo e se depara com uma estrada.");
	printf("\n\t\tUm poste velho, enegrecido por alguma combustao passada, se ergue solitario. Duas placas estao penduradas precariamente no poste. Ao se aproximar dele voce le:");
	printf("\n\t\tVila da Agua Turva - 2km adiante");
	printf("\n\t\tPovoado do Charco - 1km nesta direcao");
	printf("\n\t\tOs nomes nao parecem animadores, mas voce sente que nao ha muita escolha. O que deseja fazer?");

	int chooseCity = 0;
	int cityChosen;

	printf("\n\t\t1 - Ir para a Vila da Agua Turva\n\t\t2 - Ir para o Povoado do Charco\n\t\t3 - Nao fazer nada\n\t\t");
	scanf("%d", &chooseCity);
	
	do{
		if(chooseCity == 1){
			cityChosen = cloudyWater();
		} else if(chooseCity == 2){
			cityChosen = swampVillage();
		} else{
			cityChosen = specialEvent();
		}
	} while (chooseCity > 2 || chooseCity < 1);

}

int magePathEnUS() {
}