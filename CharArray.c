#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = {'H','e','\0','l','l','o','\0'};
    memset(str, 0, 10);
    printf("String length: %ld\n", strlen(str));;
    
    char Str[] = "Hello World";
    for (int i = 0; i < 11; i++) {
        printf("[index:%d]%c\n", i, Str[i]);
    }
    return 0;
}
