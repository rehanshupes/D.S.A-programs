#include <stdio.h>
struct aa
{
    char a;
    int b;
} a1;
int main()
{
    printf("Enter a char: ");
    scanf("%c", &a1.a);
    printf("Enter a integer: ");
    scanf("%d", &a1.b);
    
    printf("%c %d", a1.a, a1.b);
    return 0;
}