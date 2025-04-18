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

int main() {
    int tableau[TAILLE];
    int nombreCherche;
    int trouve = 0;

    srand(time(NULL));

    // Remplissage du tableau avec des entiers aléatoires entre 0 et 99
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 100;
    }

    // Affichage du tableau
    printf("Tableau :\n");
    afficher_tableau(tableau, TAILLE);

    // Demande à l'utilisateur de saisir un entier
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &nombreCherche);

    // Recherche dans le tableau
    for (int i = 0; i < TAILLE; i++) {
        if (tableau[i] == nombreCherche) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
