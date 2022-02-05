#include <stdio.h>

int main() {
    int limit;

    scanf("%d", &limit);

    for ( int i = limit; i >= 0; i-- ) {
        printf("%d\n", i);
    }

    return 0;
}
