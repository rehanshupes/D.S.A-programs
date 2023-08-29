#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
typedef struct node node;

void push(node *new)
{
    if (top == NULL)
    {
        top = new;
    }
    else
    {
        new->next = top;
        top = new;
    }
}
//pop
void pop()
{
    node *temp = top;
    top = top->next;
    free(temp);
    temp->next = NULL;
}
//travers
void _print()
{
    node *temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void _peek()
{
    printf("%d\n", top->data);
}
int main()
{
    int choice;
    int x = 1, data;
    node *ptr;
    while (x == 1)
    {
        printf("Choose any one\n1 to insert\n 2 to delete\n 3 to travers\n 4 to peek\n 5 to exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            ptr=(node *)malloc(sizeof(node));
            printf("Enter the data: ");
            scanf("%d", &ptr->data);
            ptr->next = NULL;
            push(ptr);
            break;
        case 2:
            pop();break;
        case 3:
            _print();break;
        case 4:
            _peek();break;
        case 5:
            x = 0;break;
        default:
            printf("Invalid input\n");
        }
    }
}