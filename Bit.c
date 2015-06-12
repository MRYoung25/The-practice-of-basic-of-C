#include <stdio.h>

int main()
{
    //  &
    //  |
    //  ~
    //  ^
    //  >>
    //  <<
    
    int a = 0b1;
    int b = 0b0;
    uint8_t c = 2;
    c = ~c;
    printf("%d\n", a & b);
    printf("%d\n", a | b);
    printf("%d\n", c);
    printf("%d\n", a ^ b);
    int f = 8;
    printf("%d\n", f >> 1);
    return 0;
}
