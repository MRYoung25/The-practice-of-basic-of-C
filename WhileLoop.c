#include <stdio.h>

int main()
{
    int32_t i = 0;
    while (i <= 100) {
        if (i % 2 == 1) {
        printf("The num is %d\n", i);
        }
        ++i;
    }
    
    do{
        printf("The num is %d\n", i);
        ++i;
    }while (i <= 100);
    return 0;
}
