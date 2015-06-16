#include <stdio.h>
#include <stdint.h>

int main()
{
    int32_t len = 10;
    int32_t arr[len];
    for (int a = 0; a < len; a++) {
        arr[a] = 0;
    }
    for (int32_t i = 0 ; i < len; i++) {
        printf("Index %d and the Value is %d\n", i, arr[i]);
    }
    
    int Arr[] = {1, 3, 5, 2, 6, 4};
    for (int i = 0; i < 6; i++) {
        printf("%d\n", Arr[i]);
    }
    return 0;
}
