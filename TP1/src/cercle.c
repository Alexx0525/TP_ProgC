#include <stdio.h>
#include <math.h>

int main() {
    double rayon = 5.0;
    double aire = M_PI * rayon * rayon;
    double perimetre = 2 * M_PI * rayon;

    printf("Rayon : %.2f\n", rayon);
    printf("Aire : %.2f\n", aire);
    printf("Périmètre : %.2f\n", perimetre);
}