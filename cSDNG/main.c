#include <stdio.h>
#include <stdlib.h>

int main()
{
    int selection;
    selection = 0;
    printf("Hello Adventurer! Welcome to C Single Dungeon\n");
    do{
        printf("Type 1 for Portuguese, 2 for English: \n");
        scanf("%d", &selection);
        if (selection == 1){
        lang_ptbr();
    } else if (selection == 2){
        lang_enus();
        } else {
            printf("Digite uma opcao valida! /  Choose a valid option!\n\n");
            system("pause");
            system("cls");
        }

    } while(selection > 2 || selection < 1);
    return 0;
}

int lang_ptbr(){
    int tmp_class = 0;
    printf("Seja bem vindo ao C Single Dungeon!\n");
    printf("Escolha sua Classe:\n");
    printf("1 - Guerreiro\n2 - Mago\n");
    scanf("%d", &tmp_class);
    return 0;
}


int lang_enus(){
    int tmp_class = 0;
    printf("Welcome to C Single Dungeon!\n");
    printf("Choose your class:\n");
    printf("1 - Warrior\n2 - Mage\n");
    scanf("%d", &tmp_class);
    return 0;
}
