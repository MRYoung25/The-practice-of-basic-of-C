#include <stdio.h>
#include <string.h>

int main()
{
    char * str = "Item";
    int a = 100;
    char dist[100];
    float b = 3.14;
    memset(dist, 0, 100);
    
    sprintf(dist, "%s %d,MATH_PI = %.2f", str, a, b);
    puts(dist);
    
    
    char * Str = "Item 100";
    char buf[10];
    memset(buf, 0, 10);
    int A;
    sscanf(Str,"%4s %d", buf, &A);
    printf("The string is %s,and int value is %d\n", buf, A);
    return 0;
}
