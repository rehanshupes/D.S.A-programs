#include<stdio.h>
#include<malloc.h>
struct node
{
int data;
struct node*next;
};
struct node*head=NULL;
void insstart(struct node *p);
void delstart();
void insend(struct node *p);
void delend();
void trav();
int main()
{
    int ch;
    struct node *ptr;
    while(1){
        printf("\n1.Insert at start \n2.Delete at start");
        printf("\n3.Insert at end \n4.Delete at end");
        printf("\n5.Traverse\n6.Exit\n");
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch){
            case(1):
            ptr=(struct node *)malloc(sizeof(struct node));
            printf("Enter data:");
            scanf("%d",&ptr->data);
            ptr->next=NULL;
            insstart(ptr);
            break;
            case(2):
            delstart();
            break;
            case(3):
            ptr=(struct node *)malloc(sizeof(struct node));
            scanf("%d",&ptr->data);
            ptr->next=NULL;
            insend(ptr);
            break;
            case(4):
            delend();
            break;
            case(5):
            trav();
            break;
            default:
            exit(1);
        }
    }
}
void insstart(struct node*n1){
    if(head==NULL){
        head=n1;
    }
    else{
        n1->next=head;
        head=n1;
    }
}
void delstart(){
    struct node *t=head;
    if(head==NULL){
        printf("Empty");
    }
    else{
        head=head->next;
        free(t);
        t=NULL;
    }
}
void trav(){
    struct node *t1=head;
    if(head==NULL){
        printf("Empty");
    }
    else{
        while(t1!=NULL){
            printf("%d\t",t1->data);
            t1=t1->next;
        }
    }
}
void delend(){
    struct node *temp,*temp1;
    temp=head;
    temp1=head;
    if(head==NULL){
        printf("Empty");
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        while(temp1->next!=temp){
            temp1=temp1->next;
        }
        temp1->next=NULL;
        free(temp);
        temp=NULL;
    }
}
void insend(struct node *p){
    struct node*temp=head;
    if(head==NULL){
        head=p;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
        p->next=NULL;
    }
}