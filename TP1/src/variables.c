#include <stdio.h>

int main() {
    char c = 'A';
    unsigned char uc = 200;

    short s = -1234;
    unsigned short us = 1234;

    int i = -56789;
    unsigned int ui = 56789;

    long int li = -123456789L;
    unsigned long int uli = 123456789UL;

    long long int lli = -9876543210LL;
    unsigned long long int ulli = 9876543210ULL;

    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.61803398875L;

    printf("char : %c\n", c);
    printf("unsigned char : %u\n", uc);
    printf("short : %d\n", s);
    printf("unsigned short : %u\n", us);
    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);
    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);
    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);
}