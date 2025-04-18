#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

#define TAILLE 100

// Structure pour représenter une couleur RGBA
typedef struct {
    uint8_t r, g, b, a;
} Couleur;

// Structure pour stocker une couleur distincte + compteur
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurCompteur;

// Fonction pour comparer deux couleurs
int couleurs_egales(Couleur c1, Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

// Fonction d'affichage d'une couleur
void afficher_couleur(Couleur c) {
    printf("%02x %02x %02x %02x", c.r, c.g, c.b, c.a);
}

int main() {
    Couleur couleurs[TAILLE];
    CouleurCompteur distincts[TAILLE];
    int nb_distincts = 0;

    srand(time(NULL));

    // Générer 100 couleurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        couleurs[i].r = rand() % 256;
        couleurs[i].g = rand() % 256;
        couleurs[i].b = rand() % 256;
        couleurs[i].a = 255; // Alpha toujours opaque ici
    }

    // Comptage des couleurs distinctes
    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (int j = 0; j < nb_distincts; j++) {
            if (couleurs_egales(couleurs[i], distincts[j].couleur)) {
                distincts[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distincts[nb_distincts].couleur = couleurs[i];
            distincts[nb_distincts].compteur = 1;
            nb_distincts++;
        }
    }

    // Affichage des résultats
    printf("Couleurs distinctes et occurrences :\n\n");
    for (int i = 0; i < nb_distincts; i++) {
        afficher_couleur(distincts[i].couleur);
        printf(" : %d\n", distincts[i].compteur);
    }

    return 0;
}
