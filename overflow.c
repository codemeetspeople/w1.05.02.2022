#include <stdio.h>

unsigned int average(unsigned int x, unsigned int y) {
    return (x / 2) + (y / 2) + (x % 2 + y % 2) / 2;
}

int main() {
    unsigned int x, y;

    scanf("%u %u", &x, &y);

    printf("%u\n", average(x, y));

    return 0;
}
