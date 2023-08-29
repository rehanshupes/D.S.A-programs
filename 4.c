#include <stdio.h>
int main()
{
    int arr[50], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    { 

        printf("Enter a element: ");
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(ptr + i));
    }
}


