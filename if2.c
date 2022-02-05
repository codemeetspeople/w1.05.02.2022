#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if ( x % 2 == 0 ) {
        printf("x %% 2 == 0\n");
    } else if ( x % 3 == 0 ) {
        printf("x %% 3 == 0\n");
    } else if ( x % 5 == 0 ) {
        printf("x %% 5 == 0\n");
    } else {
        printf("not today...\n");
    }

    return 0;
}
