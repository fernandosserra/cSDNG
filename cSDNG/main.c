#include <stdio.h>
#include "selector.h"
#include "classes.h"

//Bloco principal de execucao / Main execution block
int main(int argc, char *argv[]) {
	int selection = 0;
	int selectedLanguage = 0;	
	printf("Hello Adventurer! Welcome to C Single Dungeon\n");
	printf("Type 1 for Portuguese, 2 for English: \n");
	scanf("%d", &selection);
	if (selection == 1) {
		printf("Voce escolheu jogar em Portugues\n");
		selectedLanguage = lang_PtBR();
	} else if (selection == 2) {
		printf("You have chosen to play in English\n");
		selectedLanguage =  lang_EnUS();
	} else {
		printf("Digite uma opcao valida! /  Choose a valid option!\n\n");
	}
	while (selection > 2 || selection < 1) {
		printf("Type 1 for Portuguese, 2 for English: \n");
		scanf("%d", &selection);
	}
	return 0;
}

