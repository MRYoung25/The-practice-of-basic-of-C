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
    uint32_t color = 0xFFFEFAFB;
    uint32_t tmp = color & 0x00FF0000;
    uint8_t red = tmp >> 16;
    printf("%d\n", red);
    return 0;
}
