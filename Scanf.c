#include <stdio.h>

int main()
{
    int dist;
    printf("Please input the number: \n");
    scanf("%d", &dist);
    printf("User input is %d\n", dist);
    
    char buf[100];
    printf("Please input a string: \n");
    scanf("%s", buf);
    printf("Using input string is %s\n", buf);
    return 0;
}
