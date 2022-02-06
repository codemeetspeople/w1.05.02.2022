#include <stdio.h>

int increment(int n) {
    return n + 1;
}

int multiply(int x, int y) {
    return x * y;
}

int myPow(int base, int pow) {
    if ( base == 1 || pow == 0 ) {
        return 1;
    }
    if ( pow == 1 ) {
        return base;
    }

    int result = base;

    for ( int i = 2; i <= pow; i++ ) {
        result *= base;
    }

    return result;
}

int main() {
    int base, pow;

    scanf("%d %d", &base, &pow);

    printf("%d\n", multiply(base, pow));

    return 0;
}
