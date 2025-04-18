#include <stdio.h>
#include <stdint.h>

int main() {
    // Déclaration des variables
    char c = 'A';
    short s = 123;
    int i = 1024;
    long int li = 100000L;
    long long int lli = 10000000000LL;
    float f = 2.5f;
    double d = 3.14159;
    long double ld = 1.234567890123456789L;

    // Pointeurs pour chaque variable
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");
    printf("Adresse de c  : %p, Valeur : 0x%02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s  : %p, Valeur : 0x%04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur : 0x%08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur : 0x%08lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur : 0x%016llx\n", (void*)plli, (unsigned long long)lli);

    // Astuce : afficher un float/double en hex, en le traitant comme une séquence d'octets
    printf("Adresse de f  : %p, Valeur : 0x%08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur : 0x%016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : ");
    for (int i = 0; i < sizeof(long double); i++) {
        printf("%02x", ((unsigned char*)pld)[i]);
    }
    printf("\n");

    // Manipulation via les pointeurs
    *pc = 'Z';
    *ps = 321;
    *pi = 2048;
    *pli = 200000L;
    *plli = 9999999999LL;
    *pf = 1.0f;
    *pd = 2.71828;
    *pld = 9.87654321L;

    printf("\nAprès la manipulation :\n");
    printf("Adresse de c  : %p, Valeur : 0x%02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s  : %p, Valeur : 0x%04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur : 0x%08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur : 0x%08lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur : 0x%016llx\n", (void*)plli, (unsigned long long)lli);

    printf("Adresse de f  : %p, Valeur : 0x%08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur : 0x%016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : ");
    for (int i = 0; i < sizeof(long double); i++) {
        printf("%02x", ((unsigned char*)pld)[i]);
    }
    printf("\n");

    return 0;
}