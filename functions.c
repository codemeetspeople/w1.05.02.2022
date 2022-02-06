#include <stdio.h>

int increment(int n) {
    return n + 1;
}

int main() {
    int value = 10;

    printf("%d\n", value);

    value = increment(value);

    printf("%d\n", value);

    return 0;
}
