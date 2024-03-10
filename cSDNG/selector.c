#include "selector.h"
#include <stdio.h>
#include <stdlib.h>

int tmp_class = 0;
int confirmClass = 0;
int classSelected = 0;

//Chamada para a linguagem Pt_BR
int lang_PtBR() {
	printf("\n\t\tSeja bem vindo ao C Single Dungeon!");
	printf("\n\t\tEscolha sua Classe:");
	printf("\n\t\t1 - Guerreiro\n\t\t2 - Mago\n\t\t");
	scanf("%d", &tmp_class);
	do {
		if (tmp_class == 1) {
			printf("\n\t\tGuerreiros sao letais no combate corpo a corpo. Como guerreiro voce recebe os seguintes bonus:\n\t\t+2 de ataque\n\t\t+1 de defesa\n\t\t-1 de esquiva\n\t\t-2 de defesa magica");
			printf("\n\t\tDeseja mesmo ser um guerreiro?\n\t\t1 - SIM\n\t\t2 - Preciso pensar melhor...\n\t\t");
			scanf("%d", &confirmClass);
			if (confirmClass == 1) {
				classSelected = warriorPtBR();
			} else {
				confirmClass = 0;
				tmp_class = 0;
			}
		} else if (tmp_class == 2) {
			printf("\n\t\tMagos sao mestres no uso das forcas magicas do mundo. Como mago voce recebe os seguintes:\n\t\t+2 de ataque magico\n\t\t-1 de defesa\n\t\t+1 de esquiva");
			printf("\n\t\tDeseja mesmo ser um mago?\n\t\t1 - SIM\n\t\t2 - Preciso pensar melhor...\n\t\t");
			scanf("%d", &confirmClass);
			if (confirmClass == 1) {
				classSelected =  magePtBR();
			} else {
				confirmClass = 0;
				tmp_class = 0;
			}
		} else {
			printf("\n\t\tEu, seu narrador, sou um velho cansado, tenho dificuldade em entender algumas coisas, por favor, selecione uma das duas respostas que lhe pedi.\n\n\t\t");
			system("PAUSE");
			system("cls");			
			lang_PtBR();
		}

	} while (tmp_class > 2 || tmp_class < 1);
	return 0;
}

//Call to En_US language
int lang_EnUS() {
	printf("\n\t\tWelcome to C Single Dungeon!");
	printf("\n\t\tChoose your class:");
	printf("\n\t\t1 - Warrior\n\t\t2 - Mage\n\t\t");
	scanf("%d", &tmp_class);
	do {
		if (tmp_class == 1) {
			printf("\n\t\tWarriors are lethal in hand-to-hand combat. As a warrior you receive the following bonuses:\n\t\t+2 attack\n\t\t+1 defense\n\t\t-1 dodge\n\t\t-2 magical defense");
			printf("\n\t\tDo you really want to be a warrior?\n\t\t1 - YES\n\t\t2 - I need to think better...\n\t\t");
			scanf("%d", &confirmClass);
			if (confirmClass == 1) {
				classSelected = warriorEnUS();
			} else {
				confirmClass = 0;
				tmp_class = 0;
			}
		} else if (tmp_class == 2) {
			printf("\n\t\tMages are masters in the use of supernatural forces. As a mage you receive the following bonuses:\n\t\t+2 magical attack\n\t\t-1 defense\n\t\t+1 dodge");
			printf("\n\t\tDo you really want to be a mage?\n\t\t1 - YES\n\t\t2 - I need to think better...\n\t\t");
			scanf("%d", &confirmClass);
			if (confirmClass == 1) {
				classSelected = mageEnUS();
			} else {
				confirmClass = 0;
				tmp_class = 0;
			}
		} else {
			printf("\n\t\tI, your narrator, am a tired old man, I have difficulty understanding some things, please select one of the two answers I asked you.\n\n\t\t");
			system("PAUSE");
			system("cls");
			lang_EnUS();			
		}
	} while (tmp_class > 2 || tmp_class < 1);
	return 0;
}

