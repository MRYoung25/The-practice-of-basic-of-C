#include <stdio.h>

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

int main()
{
    int32_t Dir = LEFT;
    
    switch (Dir) {
        case UP:
            printf("GO UP\n");
            break;      //Break judge
        case DOWN:
            printf("GO DOWN\n");
            break;      //Break judge
        case LEFT:
            printf("GO LEFT\n");
            break;      //Break judge
        case RIGHT:
            printf("GO RIGFT\n");
            break;      //Break judge
        default:
            printf("Dir unknow\n");
    }
    return 0;
}
