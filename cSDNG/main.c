#include <stdio.h>
#include "selector.h"
#include "classes.h"

//Bloco principal de execucao / Main execution block
int main()
{
	startMenu();
    return 0;
}

int startMenu() {
		int selection;
	    selection = 0;
	    printf("Hello Adventurer! Welcome to C Single Dungeon\n");
	    do{
	        printf("Type 1 for Portuguese, 2 for English: \n");
	        scanf("%d", &selection);
	        if (selection == 1){
	        extern lang_PtBR();
	    } else if (selection == 2){
	        extern lang_EnUS();
	        } else {
	            printf("Digite uma opcao valida! /  Choose a valid option!\n\n");
	            system("PAUSE");
	            system("CLS");
	        }
	
	    } while(selection > 2 || selection < 1);
	}