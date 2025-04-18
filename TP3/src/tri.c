#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

void afficher_tableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void tri_a_bulles(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[TAILLE];
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires entre -100 et 100
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 201 - 100; // [-100, 100]
    }

    printf("Tableau non trié :\n");
    afficher_tableau(tableau, TAILLE);

    tri_a_bulles(tableau, TAILLE);

    printf("\nTableau trié par ordre croissant :\n");
    afficher_tableau(tableau, TAILLE);

    return 0;
}
