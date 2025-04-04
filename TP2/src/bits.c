#include <stdio.h>

int main() {
    unsigned int d = 0x01080000; // Exemple : 4e et 20e bits Ã 1
    int bit4 = (d >> (32 - 4)) & 1;
    int bit20 = (d >> (32 - 20)) & 1;

    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");
}