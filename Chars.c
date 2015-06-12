#include <stdio.h>

int main()
{
    printf("Hello\nWorld\n");   // '\n'newline--From the current position to the next line
    printf("Hello\rWorld\n");   // '\r'carriage return--Starting from the beginning of the bank input, the input is located at the beginning of the \r
    printf("Hello\bWorld\n");   // '\b'backspace charact--Similar to delete, delete the previous character
    printf("Hello\tWorld\nHaHa\tMR\n");  //tabs--Similar to the Tab key, the effect of indentation is
    printf("Hello\fWorld\n");   // '\f'form feed character--In the'\f'position, the other row is performed, with an indentation effect
    printf("Hello\\\n");
    printf("\"Hello World\"\n");
    char ch = 'B';
    printf("%c\n", ch+32);
    return 0;
}
