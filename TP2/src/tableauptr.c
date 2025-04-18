#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tabInt[TAILLE];
    float tabFloat[TAILLE];

    srand(time(NULL)); // Initialisation de la graine aléatoire

    // Remplissage des tableaux avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        *(tabInt + i) = rand() % 100 + 1;
        *(tabFloat + i) = (rand() % 1000) / 100.0f;
    }

    // Affichage avant manipulation
    printf("Tableau d'entiers (avant) :\n");
    for (int *p = tabInt; p < tabInt + TAILLE; p++) {
        printf("%d ", *p);
    }

    printf("\n\nTableau de flottants (avant) :\n");
    for (float *pf = tabFloat; pf < tabFloat + TAILLE; pf++) {
        printf("%.2f ", *pf);
    }

    // Multiplication par 3 pour les indices pairs (avec pointeurs)
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(tabInt + i) *= 3;
            *(tabFloat + i) *= 3;
        }
    }

    // Affichage après manipulation
    printf("\n\nTableau d'entiers (après) :\n");
    for (int *p = tabInt; p < tabInt + TAILLE; p++) {
        printf("%d ", *p);
    }

    printf("\n\nTableau de flottants (après) :\n");
    for (float *pf = tabFloat; pf < tabFloat + TAILLE; pf++) {
        printf("%.2f ", *pf);
    }

    printf("\n");
    return 0;
}
