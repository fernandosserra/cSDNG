#include <stdio.h>
#include "selector.h"
#include "classes.h"

//Bloco principal de execucao / Main execution block
int main(int argc, char *argv[]) {
	int selection = 0;
	int selectedLanguage = 0;
	printf("\n\t\tHello Adventurer! Welcome to C Single Dungeon");
	printf("\n\t\tType 1 for Portuguese, 2 for English:\n\t\t");
	scanf("%d", &selection);
	if (selection == 1) {
		printf("\n\t\tVoce escolheu jogar em Portugues");
		selectedLanguage = lang_PtBR();
	} else if (selection == 2) {
		printf("\n\t\tYou have chosen to play in English");
		selectedLanguage = lang_EnUS();
	} else {
		printf("\n\t\tDigite uma opcao valida! / Choose a valid option!");
	}
	while (selection > 2 || selection < 1) {
		printf("\n\t\tType 1 for Portuguese, 2 for English:\n\t\t");
		scanf("%d", &selection);
	}
	return 0;
}

