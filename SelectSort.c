#include <stdio.h>

int main()
{
    int data[] = {5, 2, 3, 4, 6, 1};
    for(int i = 0; i < 6; ++i)
    {
        for(int j = i + 1;j < 6; ++j)
        {
            if (data[i] < data[j])
            {
                int temp;
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    
    printf("data[] = {");
    
    for (int i = 0; i < 5; i++) {
        printf("%d,", data[i]);
    }
    
    printf("%d}\n",data[5]);
    return 0;
}
