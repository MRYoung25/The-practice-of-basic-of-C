#include <stdio.h>
#include <string.h>

int main()
{
    char * str = "Hello World";
    char * str1 = strchr(str, 'o');
    char * str2 = strrchr(str, 'o');
    char * str3 = strstr(str, "Wo");
    char str5[10];
    memset(str5, 0, 10);
    strncpy(str5, str, 4);
    puts(str);
    puts(str1);
    puts(str2);
    puts(str3);
    puts(str5);
    char * str6 = str + 1;
    puts(str6);
    char * tmp = str + 6;
    char str7[10];
    memset(str7, 0, 10);
    strncpy(str7, tmp, 3);
    puts(str7);
    return 0;
}
