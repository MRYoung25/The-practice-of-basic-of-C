#include <stdio.h>

typedef int32_t C_long;
typedef char XINKEDA_char;

int main()
{
    C_long a = 20;
    printf("%d\n", a);
    XINKEDA_char b = 'A';
    printf("%c\n", b+32);
    return 0;
}
