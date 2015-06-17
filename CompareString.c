#include <stdio.h>
#include <string.h>

int main()
{
    char * str = "Hello";
    char * str1 = "Hello";
    char str2[] = "Hello";
    printf("The result is %d\n", str == str1);
    printf("Pointer str %p, Pointer str1 %p,Pointer str2 %p\n", str, str1, str2);
    
    int result = strcmp(str, str1);
    if (result == 0) {
        printf("str is equal with str1");
    }
    else if (result > 0)
    {
        printf("str is bigger than str1");
    }
    else{
        printf("str is lower than str1");
    }
    return 0;
}
