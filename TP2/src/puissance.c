#include <stdio.h>

int main() {
    int a = 2, b = 3;
    int result = 1;

    for (int i = 0; i < b; i++) {
        result *= a;
    }

    printf("%d^%d = %d\n", a, b, result);
    return 0;
}
