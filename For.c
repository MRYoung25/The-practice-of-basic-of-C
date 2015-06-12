#include <stdio.h>

int main()
{
    for (int32_t i = 0; i < 100; ++i) {
        printf("The Number is %d\n", i);
        for (int32_t j = 0; j < 10; ++j) {
            printf("%d", j);
        }
        printf("\n");
        if (i > 49) {
            break;
        }
    }
    
    for (int32_t c = 0; c <= 100; ++c) {
        printf("Item is %d\n", c);
        
        if (c == 50) {
            continue;
        }
        printf("The number is %d\n", c);
    }
    
    for (int32_t a = 1; a <= 9 ; ++a) {
        for (int32_t b = 1; b <= a ; ++b) {
            printf("%d * %d = %d\t", a, b, a * b);
        }
        printf("\n");
    }
    return 0;
}
