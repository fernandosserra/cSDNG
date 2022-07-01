#include "classes.h"
#include "magePath.h"
#include "warriorPath.h"
#include <stdio.h>
#include <stdlib.h>

//Funco para invocar e selecionar a classe de guerreiro, em lingua portuguesa
int warriorPtBR() {
	int atk = 3;
	int magicalAtk = 0;
	int defense = 3;
	int magicalDefense = 0;
	int dodge = 1;
	int healthPoints = 8;

	system("cls");
	printf("\n\t\tAo notar que finalmente voce se decidiu, o velho contador de historias em sua frente da um sorriso e lhe oferece uma caneca que contem um liquido borbulhante. Esta frio e voce toma, pensando em se aquecer.");
	printf("\n\t\tSeus pensamentos sao interrompidos quase que imediatamente, uma dor repentina surge na base da sua nuca e tudo fica escuro...");
}

//Function to summon and select the warrior class in english language
int warriorEnUS() {
	int atk = 3;
	int magicalAtk = 0;
	int defense = 3;
	int magicalDefense = 0;
	int dodge = 1;
	int healthPoints = 8;

	system("cls");
	printf("\n\t\tNoting that you finally decided, the old storyteller in front of you a smile and offers you a mug that contains a bubbling liquid. It's cold and you take it, thinking of warming up.");
	printf("\n\t\tYour thoughts are interrupted almost immediately, a sudden pain appears at the base of your neck and everything goes dark...");
}

//Funcao para invocar e selecionar a classe de mago, em lingua portuguesa
int magePtBR() {
	int mageSelected;
	int atk = 1;
	int magicalAtk = 2;
	int defense = 1;
	int magicalDefense = 2;
	int dodge = 2;
	int healthPoints = 5;

	system("cls");
	printf("\n\t\tAo notar que finalmente voce se decidiu, o velho contador de historias em sua frente da um sorriso e lhe oferece uma caneca que contem um liquido borbulhante. Esta frio e voce toma, pensando em se aquecer.");
	printf("\n\t\tSeus pensamentos sao interrompidos quase que imediatamente, voce sente uma energia potente correndo em suas veias, em seguida uma dor repentina surge na base da sua nuca e tudo fica escuro...\n");
	mageSelected = magePathPtBR();
}

//Function to summon and select the mage class in english language
int mageEnUS() {
	int mageSelected;
	int atk = 1;
	int magicalAtk = 2;
	int defense = 1;
	int magicalDefense = 2;
	int dodge = 2;
	int healthPoints = 5;

	system("cls");
	printf("\n\t\tNoting that you finally decided, the old storyteller in front of you a smile and offers you a mug that contains a bubbling liquid. It's cold and you take it, thinking of warming up.");
	printf("\n\t\tYour thoughts are interrupted almost immediately, you feel a potent energy running in your veins, then a sudden pain appears at the base of your neck and everything is dark...");
}
