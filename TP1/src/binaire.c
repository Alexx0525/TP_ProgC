#include <stdio.h>

void afficher_binaire(unsigned int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 4 == 0) printf(" "); // pour lisibilitÃ©
    }
    printf("\n");
}

int main() {
    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        printf("%d en binaire : ", valeurs[i]);
        afficher_binaire(valeurs[i]);
    }
}