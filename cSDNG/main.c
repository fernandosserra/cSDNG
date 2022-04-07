#include <stdio.h>
#include <stdlib.h>

//Bloco principal de execu��o / Main execution block
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
            system("PAUSE");
            system("CLS");
        }

    } while(selection > 2 || selection < 1);
    return 0;
}

//Fun��o de Sele��o em Portugu�s
int lang_ptbr(){
    int tmp_class = 0;
    int chClass = 0;
    do{
        printf("Seja bem vindo ao C Single Dungeon!\n");
        printf("Escolha sua Classe:\n");
        printf("1 - Guerreiro\n2 - Mago\n");
        scanf("%d", &tmp_class);
        if (tmp_class == 1){
            printf("Guerreiros sao letais no combate corpo a corpo. Como guerreiro voce recebe os seguintes bonus:\n+2 de ataque\n+1 de defesa\n-1 de esquiva\n-2 de defesa magica\n");
            printf("Deseja mesmo ser um guerreiro?\n1 - SIM\n2 - Preciso pensar melhor...\n");
            scanf("%d", &chClass);
            if (chClass == 1){
                warriorPtBr();
            } else {
                chClass = 0;
                tmp_class = 0;
            }
            } else if (tmp_class == 2) {
                printf("Magos sao mestres no uso das for�as sobrenaturais. Como mago voce recebe os seguintes:\n+2 de ataque magico\n-1 de defesa\n+1 de esquiva\n");
                printf("Deseja mesmo ser um mago?\n1 - SIM\n2 - Preciso pensar melhor...");
            } else {
                printf("Eu, seu narrador, sou um velho cansado, tenho dificuldade em entender algumas coisas, por favor, selecione uma das duas respostas que lhe pedi.\n");
                system("PAUSE");
                system("CLS");
                int lang_ptbr();
            }

    } while (tmp_class > 2 || tmp_class < 1);
    return 0;
}

//English Selection Function
int lang_enus(){
    int tmp_class = 0;
    do{
        printf("Welcome to C Single Dungeon!\n");
        printf("Choose your class:\n");
        printf("1 - Warrior\n2 - Mage\n");
        scanf("%d", &tmp_class);
        if (tmp_class == 1){
        printf("Warriors are lethal in hand-to-hand combat. As a warrior you receive the following bonuses:\n+2 attack\n+1 defense\n-1 dodge\n-2 magical defense\n");
        printf("Do you really want to be a warrior?\n1 - YES\n2 - I need to think better...");
    } else if (tmp_class == 2) {
        printf("Mages are masters in the use of supernatural forces. As a mage you receive the following bonuses:\n+2 magical attack\n-1 defense\n+1 dodge\n");
        printf("Do you really want to be a mage?\n1 - YES\n2 - I need to think better...");
    } else {
        printf("I, your narrator, am a tired old man, I have difficulty understanding some things, please select one of the two answers I asked you.\n");
        system("PAUSE");
        system("CLS");
    }
    } while (tmp_class > 2 || tmp_class < 1);
    return 0;
}

int warriorPtBr(){
    int atk = 3;
    int magicalAtk = 0;
    int defense = 3;
    int magicalDefense = 0;
    int dodge = 1;
    int healthPoints = 8;

    printf("Ao finalmente se decidir, o velho contador de historias em sua frente da um sorriso e lhe oferece uma caneca que contem um liquido borbulhante. Esta frio e voce toma, pensando em se aquecer\n");
    printf("\nSeus pensamentos sao interrompidos quase que imediatamente, uma dor repentina surge na base da sua nuca e tudo fica escuro...");
}

int warriorEnUs(){
    int atk = 3;
    int magicalAtk = 0;
    int defense = 3;
    int magicalDefense = 0;
    int dodge = 1;
    int healthPoints = 8;
}

int mage(){
    int atk = 1;
    int magicalAtk = 2;
    int defense = 1;
    int magicalDefense = 2;
    int dodge = 2;
    int healthPoints = 5;
}

int tinyOrc (){
    int atk = 2;
    int defense = 2;
    int magicalDefense = 0;
    int dodge = 1;
    int healthPoints = 6;
}
