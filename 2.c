#include <stdio.h>
int fun(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
        printf("%d", fact);
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Your resulting factorial is %d", fun(n));
    return 0;
}