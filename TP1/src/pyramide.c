#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        // espaces
        for (int s = 1; s <= n - i; s++)
            printf(" ");

        // chiffres croissants
        for (int j = 1; j <= i; j++)
            printf("%d", j);

        // chiffres décroissants
        for (int j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    printf("Pyramide terminée.\n");
}
