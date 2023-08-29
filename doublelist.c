#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertstart(struct node *new);
void insertend(struct node *new);
void print();
void deletestart();
void deleteend();
int main()
{
    int choice;
    struct node *new;
    int x = 1;
    while (x == 1)
    {

        printf("\n press 1 for insertion at start;\n press 2 for insertion at the end;\n press 3 for deletion from the end;\npress 4 to deletion at the start;\npress 5 to print all the entries;\n press 6 to exit;\n Enter: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            new = (struct node *)malloc(sizeof(struct node));
            printf("Enter you data: ");
            scanf("%d", &new->data);
            new->next = NULL;
            new->prev = NULL;
            insertstart(new);
            break;
        case 2:
            new = (struct node *)malloc(sizeof(struct node));
            printf("Enter you data: ");
            scanf("%d", &new->data);
            new ->next = NULL;
            new ->prev = NULL;
            insertend(new);
            break;
        case 3:
            deleteend();
            break;
        case 4:
            deletestart();
            break;
        case 5:
            print();
            break;
        case 6:
            x = 0;
            break;
        default:
            printf("Invalid input.\n");
        }
    }
}
void insertstart(struct node *new)
{
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head->prev = new;
        head = new;
    }
}
void insertend(struct node *new)
{
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->prev = temp;
    }
}
void print()
{
    if (head == NULL)
    {
        printf("uf");
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
void deleteend()
{
    if (head == NULL)
    {
        printf("uf");
    }
    else
    {
        struct node *temp1 = head;
        struct node *temp2 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        while (temp2->next != temp1)
        {

            temp2 = temp2->next;
        }
        temp2->next = NULL;
        printf("you have deleted: %d", temp1->data);
        temp1->prev = NULL;
        free(temp1);
    } 
}
void deletestart()
{
    if (head == NULL)
    {
        printf("uf");
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        printf("you have deleted: %d", temp->data);
        temp->next = NULL;
        free(temp);
        head->prev = NULL;
    }
} 