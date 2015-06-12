#include <stdio.h>

int main()
{
    int32_t a = 13;
    int32_t b = 12;
    
    if (a < b) {
        printf("The Num is %d\n", a);
    }
    else{
        printf("The Num is %d\n", b);
    }
    
    int32_t score = 90;
    
    if (score > 80) {
        printf("Fine\n");
    }else if (score >= 60){
        printf("OK\n");
    }else{
        printf("Fail\n");
    }
    return 0;
}
