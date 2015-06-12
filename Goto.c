#include <stdio.h>

int main()
{
    int32_t i = 0;
    label:
    printf("%d\n", i);
    ++i;
    if (i < 100) {
    goto label;
    }
    return 0;
}
