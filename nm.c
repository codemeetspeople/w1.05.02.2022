#include <stdio.h>

int main() {
    int dividend, divisor, result;
    
    scanf("%d %d", &dividend, &divisor);
    
    result = dividend - dividend % divisor;
    if ( dividend > 0 ) {
        result += divisor;
    }

    printf("%d\n", result);
    
    return 0;
}
