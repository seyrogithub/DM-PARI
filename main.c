#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int argent = 100;
    int sommePariee = 0;
    int jeu;
    srand(time(NULL));
    int randomNumberInRange = rand() % 2 + 1;

    printf("Veuillez choisir 1 pour jouer et 2 pour vous retirer\n");
    scanf("%d", &jeu);

    if (jeu == 1) {
        printf("Veuillez choisir la somme que vous allez parier\n");
        scanf("%d", &sommePariee);

        if (sommePariee > argent) {
            printf("Vous ne pouvez pas parier car vous n'avez pas assez d'argent.\n");
        } else if (randomNumberInRange == 2) {
            argent = argent - sommePariee;
            sommePariee = sommePariee * 2;
            argent = argent + sommePariee;
            printf("Vous avez gagné, voici votre argent : %d\n", argent);
        } else {
            argent = argent - sommePariee;
            sommePariee = 0;
            printf("Vous avez perdu, votre argent est : %d\n", argent);
        }
    } else if (jeu == 2) {
        printf("Vous vous êtes retiré, votre argent est : %d\n", argent);
    }

    return 0;
}
