#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    // if ( x > 0 ) {
    //     if ( x % 2 == 0 ) {
    //         if ( x % 3 == 0 ) {
    //             printf("yes\n");
    //         } else {
    //             printf("no\n");
    //         }
    //     } else {
    //         printf("no\n");
    //     }
    // } else {
    //     printf("no\n");
    // }

    // if ( x > 0 && x % 2 == 0 && x % 3 == 0 ) {
    //     printf("yes\n");
    // } else {
    //     printf("no\n");
    // }

    if ( x % 3 == 0 || x % 5 == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
