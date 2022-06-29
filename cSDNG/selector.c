#include "selector.h"
#include <stdio.h>
#include <stdlib.h>

//Chamada para a linguagem Pt_BR
int lang_PtBR() {
	int tmp_class = 0;
	int confirmClass = 0;
	printf("Seja bem vindo ao C Single Dungeon!\n");
	printf("Escolha sua Classe:\n");
	printf("1 - Guerreiro\n2 - Mago\n");
	scanf("%d", &tmp_class);
	do {		
		if (tmp_class == 1) {
			printf("Guerreiros sao letais no combate corpo a corpo. Como guerreiro voce recebe os seguintes bonus:\n+2 de ataque\n+1 de defesa\n-1 de esquiva\n-2 de defesa magica\n");
			printf("Deseja mesmo ser um guerreiro?\n1 - SIM\n2 - Preciso pensar melhor...\n");
			scanf("%d", &confirmClass);
			if (confirmClass == 1) {
				int warriorPtBR();
			} else {
				confirmClass = 0;
				tmp_class = 0;
			}
		} else if (tmp_class == 2) {
			printf("Magos sao mestres no uso das forcas sobrenaturais. Como mago voce recebe os seguintes:\n+2 de ataque magico\n-1 de defesa\n+1 de esquiva\n");
			printf("Deseja mesmo ser um mago?\n1 - SIM\n2 - Preciso pensar melhor...");
			scanf("%d", &confirmClass);
			if (confirmClass == 1) {
				int magePtBR();
			} else {
				confirmClass = 0;
				tmp_class = 0;
			}
		} else {
			printf("Eu, seu narrador, sou um velho cansado, tenho dificuldade em entender algumas coisas, por favor, selecione uma das duas respostas que lhe pedi.\n");
		}

	} while (tmp_class > 2 || tmp_class < 1);
	return 0;
}

//Call to En_US language
int lang_EnUS() {
	int tmp_class = 0;
	int confirmClass = 0;
	printf("Welcome to C Single Dungeon!\n");
	printf("Choose your class:\n");
	printf("1 - Warrior\n2 - Mage\n");
	scanf("%d", &tmp_class);
	do {		
		if (tmp_class == 1) {
			printf("Warriors are lethal in hand-to-hand combat. As a warrior you receive the following bonuses:\n+2 attack\n+1 defense\n-1 dodge\n-2 magical defense\n");
			printf("Do you really want to be a warrior?\n1 - YES\n2 - I need to think better...\n");
			scanf("%d", &confirmClass);
			if (confirmClass == 1) {
				int warriorEnUS();
			} else {
				confirmClass = 0;
				tmp_class = 0;
			}
		} else if (tmp_class == 2) {
			printf("Mages are masters in the use of supernatural forces. As a mage you receive the following bonuses:\n+2 magical attack\n-1 defense\n+1 dodge\n");
			printf("Do you really want to be a mage?\n1 - YES\n2 - I need to think better...");
			scanf("%d", &confirmClass);
			if (confirmClass == 1) {
				int mageEnUS();
			} else {
				confirmClass = 0;
				tmp_class = 0;
			}
		} else {
			printf("I, your narrator, am a tired old man, I have difficulty understanding some things, please select one of the two answers I asked you.\n");
			extern int lang_EnUS();
		}
	} while (tmp_class > 2 || tmp_class < 1);
	return 0;
}

