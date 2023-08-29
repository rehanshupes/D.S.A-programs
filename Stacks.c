#include<stdio.h>
#define max 5
int top=-1;
int stack[max];
void push(int n)
{
    if (top>=max-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top=top+1;
        stack[top]=n;
        printf("Done\n");
    } 
}

void pop()
{
    if (top==-1)
    {
        printf("stack underflow");
    }
    else
    {
        top=top-1;
}
}

void traverse()
{
    int i=top;
    if (top==-1)
    {
         printf("Underflow");
    }
    else
    {
        printf("Elements are:\n");
        while (i>=0)
        {
            printf("%d\n",stack[i]);
            i--;
        }
        printf("Done\n");
        
    }
    
}

int main()
{

    int choice,x;
    while (1)
    {
        printf("Select from below \n 1:Push \n 2:Pop \n 3:Traverse\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            
            printf("Enter data to push:");
            scanf("%d",&x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            traverse();
            break;
        default:
            printf("Wrong Choice!!! Try Again\n");
        }
    }
    
}