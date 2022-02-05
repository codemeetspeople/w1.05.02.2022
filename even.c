#include <stdio.h>

int main() {
    int limit;

    scanf("%d", &limit);

    for ( int i = 1; i <= limit; i += 2 ) {
        printf("%d\n", i);
    }

    return 0;
}
