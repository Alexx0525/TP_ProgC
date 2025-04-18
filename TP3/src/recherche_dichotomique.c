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
                int tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}

int recherche_dichotomique(int tab[], int taille, int valeur) {
    int debut = 0, fin = taille - 1;
    while (debut <= fin) {
        int milieu = (debut + fin) / 2;
        if (tab[milieu] == valeur)
            return 1; // trouvé
        else if (valeur < tab[milieu])
            fin = milieu - 1;
        else
            debut = milieu + 1;
    }
    return 0; // non trouvé
}

int main() {
    int tableau[TAILLE];
    int valeurCherchee;

    srand(time(NULL));

    // Remplissage du tableau avec des entiers aléatoires entre 0 et 999
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000;
    }

    // Tri du tableau
    tri_a_bulles(tableau, TAILLE);

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    afficher_tableau(tableau, TAILLE);

    // Demande à l'utilisateur
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeurCherchee);

    // Recherche dichotomique
    if (recherche_dichotomique(tableau, TAILLE, valeurCherchee))
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
