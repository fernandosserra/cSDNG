#include <stdio.h>
#include <stdlib.h>

int main()
{
    int selection;
    selection = 0;
    printf("Hello Adventurer! Welcome to C Single Dungeon\n");
    printf("Type 1 for Portuguese, 2 for English: \n");
    scanf("%d", &selection);
    if (selection == 1){
        printf("Seja bem vindo ao C Single Dungeon!\n");
    } else{
        printf("Welcome to C Single Dungeon!\n");
        }
    return 0;
}
