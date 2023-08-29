#include<stdio.h>
#include<malloc.h>
struct str{
int a;
char b;
};
int main(){
struct str *ptr;
ptr= (struct str*)malloc(sizeof(struct str));
printf("Enter a no: ");
scanf("%d", &ptr->a);
printf("Enter a charactor: ");
scanf(" %c", &ptr->b);
printf("\n");
printf("%d", ptr->a);
printf("%c", ptr->b);
return 0;
}
