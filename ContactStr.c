#include <stdio.h>
#include <string.h>
typedef int DIST_LEN;

int main()
{
    char * str = "Hello";
    char * Str = "World";
    
    const int DIST_LEN = 100;
    char dist[DIST_LEN];
    memset(dist, 0, DIST_LEN);
    
    strcat(dist, str);
    strcat(dist, " ");
    strcat(dist, Str);
    
    
    strncat(dist, Str, 3);
    
    puts(dist);
    return 0;
}
