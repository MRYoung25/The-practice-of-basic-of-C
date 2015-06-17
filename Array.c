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
    int ARR[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            ARR[i][j] = 0;
            printf("index(%d,%d)%d\n", i, j, ARR[i][j]);
        }
    }
    printf("%d\n", ARR[2][1]);
    
    int arr1[3][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12}
                    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("index(%d,%d)%d\n", i, j, arr1[i][j]);
        }
    }
    return 0;
}
