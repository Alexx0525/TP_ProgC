#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int min, max;

    srand(time(NULL)); // Initialiser la graine pour rand()

    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 1000
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    // Initialisation des valeurs min et max
    min = max = tableau[0];

    // Parcours pour trouver le plus petit et le plus grand
    for (int i = 1; i < TAILLE; i++) {
        if (tableau[i] < min) min = tableau[i];
        if (tableau[i] > max) max = tableau[i];
    }

    // Affichage des résultats
    printf("Le numéro le plus petit est : %d\n", min);
    printf("Le numéro le plus grand est : %d\n", max);

    return 0;
}
