#include<stdio.h>
void function(int arr[])
{
    int*ptr=arr;
    for(int i=0; i<7; i++)
    {
    printf("%d\t",*(ptr+i));
    }
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    function(arr);

}
