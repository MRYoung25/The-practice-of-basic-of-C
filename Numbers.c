#include <stdio.h>

int main()
{
    float a = 3.1; //Single precision real data，4Bytes，32Bits
    double b = 3.1;  //Double precision real data，8Bytes，64Bits
    long double c = 3.1;  //Long double precision real data，16Bytes，128Bits
    printf("a = %.1f,\nb = %.1f,\nc = %.1Lf\n", a, b, c);
    return 0;
}
