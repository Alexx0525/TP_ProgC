#include <stdio.h>

void afficher_octets(void *ptr, size_t taille) {
    unsigned char *octet = (unsigned char *)ptr;
    for (size_t i = 0; i < taille; i++) {
        printf("%02x ", octet[i]);
    }
    printf("\n");
}

int main() {
    short sh = 0x0302;
    int i = 0x04030201;
    long int li = 0x0807060504030201;
    float f = 3.14f;
    double d = 3.14;
    long double ld = 3.14L;

    printf("Octets de short :\n");
    afficher_octets(&sh, sizeof(sh));

    printf("\nOctets de int :\n");
    afficher_octets(&i, sizeof(i));

    printf("\nOctets de long int :\n");
    afficher_octets(&li, sizeof(li));

    printf("\nOctets de float :\n");
    afficher_octets(&f, sizeof(f));

    printf("\nOctets de double :\n");
    afficher_octets(&d, sizeof(d));

    printf("\nOctets de long double :\n");
    afficher_octets(&ld, sizeof(ld));

    return 0;
}
