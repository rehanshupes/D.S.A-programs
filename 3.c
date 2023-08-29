#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int * ptr = a;
    int b = *ptr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d", b+i);
    }
    return 0;
}