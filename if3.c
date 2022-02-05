#include <stdio.h>

int main() {
    int x;
    int isMultiple = 0;

    scanf("%d", &x);

    if ( x % 2 == 0 ) {
        printf("x %% 2 == 0\n");
        isMultiple = 1;
    }

    if ( x % 3 == 0 ) {
        printf("x %% 3 == 0\n");
        isMultiple = 1;
    }

    if ( x % 5 == 0 ) {
        printf("x %% 5 == 0\n");
        isMultiple = 1;
    }

    if ( isMultiple == 0 ) {
        printf("not today...\n");
    }

    return 0;
}
