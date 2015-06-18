#include <stdio.h>

void printHelloWorld(){
    printf("Hello World\n");
}

void Hello(char * name, int age){
    printf("Hello %s, You age is %d\n", name, age);
}

int add(int a, int b){
    return a + b;
}

int main()
{
    printHelloWorld();
    
    Hello("Young",33);
    
    int c = add(1,2);
    printf("The result is %d\n", c);
    
    return 0;
}
