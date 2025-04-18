#include <stdio.h>

#define TAILLE 5
#define LONGUEUR_MAX 100

int main() {
    char noms[TAILLE][LONGUEUR_MAX] = {
        "Dupont", "Lemoine", "Marque", "Martin", "Bernard"
    };

    char prenoms[TAILLE][LONGUEUR_MAX] = {
        "Alice", "Jean", "Linh", "Sophie", "Thomas"
    };

    char adresses[TAILLE][LONGUEUR_MAX] = {
        "12 rue des Lilas, Paris",
        "45 avenue de la République, Lyon",
        "8 boulevard Haussmann, Marseille",
        "14 rue du bourg nouveau, Rennes",
        "33 place Bellecour, Lille"
    };

    float notesProgC[TAILLE] = {14.5, 12.0, 16.5, 11.0, 13.5};
    float notesSys[TAILLE] = {13.0, 14.5, 15.0, 10.0, 12.5};

    printf("=== Liste des étudiant.e.s ===\n\n");

    for (int i = 0; i < TAILLE; i++) {
        printf("Étudiant.e %d:\n", i + 1);
        printf("Nom       : %s\n", noms[i]);
        printf("Prénom    : %s\n", prenoms[i]);
        printf("Adresse   : %s\n", adresses[i]);
        printf("Note en Programmation en C     : %.2f\n", notesProgC[i]);
        printf("Note en Système d'exploitation : %.2f\n", notesSys[i]);
        printf("-----------------------------\n");
    }

    return 0;
}