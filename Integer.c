#include <stdio.h>

int main()
{
    int a = 10;     //integer data
    int b = -10;    //integer data
    long c = 20;    //long integer data
    printf("a = %d,\nb = %d，\nc = %ld\n", a, b, c);
    int d = 0b100;
    printf("d = %d\n", d);
    int e = 0xA15;
    printf("e = %d\n", e);
    int f = 010;
    printf("f = %d\n", f);
    unsigned int g = 12;
    printf("g = %d\n", g);
    int32_t i = 10;
    printf("h = %d\n", i);
    return 0;
}
