#include <stdio.h>

int main()
{
    char * str = "100";
    int a;
    sscanf(str, "%d", &a);
    printf("Int value is %d\n", a);
    double value = atof("3.14");
    printf("%.2f\n", value);
    int value1 = 1000;
    char buf[10];
    sprintf(buf, "%d", value1);
    printf("String is %d\n", value1);   //puts(buf);
    return 0;
}
