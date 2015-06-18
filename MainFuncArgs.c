#include <stdio.h>

int main(int argc,char ** argv){
    printf("Arguments counts is %d\n", argc);
    printf("First arg is %s\n",argv[0]);
    
    for (int i = 0; i < argc; i++) {
        printf("Arg index:%d,arg value is %s\n", i, argv[i]);
    }
    return 0;
}
