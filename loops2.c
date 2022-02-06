#include <stdio.h>

void printSequence(int last) {
    for ( int i = 0; i < last; i++ ) {
        printf("%d, ", i);
    }
    printf("%d\n", last);
}


int main() {
    int limit = 10;

    printSequence(limit);
    limit = 5;
    printSequence(limit);
    limit = 15;
    printSequence(limit);

    return 0;
}
