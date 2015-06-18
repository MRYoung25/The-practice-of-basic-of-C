#include <stdio.h>
#include <stdarg.h>

int sum(int n,...){
    int all = 0;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++) {
        all+= va_arg(args, int);
    }
    va_end(args);
    return all;
}

int main()
{
    printf("sum is %d\n", sum(3,1,2,3));
    return 0;
}
