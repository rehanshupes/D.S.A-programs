#include <stdio.h>
#include <malloc.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    printf("Enter a number: ");
    scanf("%d", ptr);
    printf("%d\n", *ptr);
    printf("Address is %u\n", ptr);
    free(ptr);
    ptr=NULL;
    printf("After deleting %u.",ptr);
}