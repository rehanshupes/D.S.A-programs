#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int r = -1;
int front = -1;
int n; 
void enqueue(int n){
     if (r >=max-1){printf("overflow");
     }
     else{
        if (r == -1){
            r=front=0;
            queue[r] = n;

        }
        else{r=r+1;
       queue[r] = n;}
     }
}
void dequeue(){
    if(front==-1){printf("underflow");}
    else{ if (
         r==front) 
         {r=front=-1;}
    else{
        front =front+1;
        
    }
}
}
void display(){int i=front;
if( r== -1)
{printf("underflow");
}
else
{while(i<=r)
{printf("%d",queue[i++]);}
}
}

int main(){
int ch;
while(1){
    printf ( "1- enqueue, 2- dequeue, 3 - traverse");
    scanf ("%d", &ch);
    switch (ch){     
        case (1) :

printf("enter the data\n");
scanf("%d",&n);
enqueue( n);
break;
case (2):
dequeue();
break;
case (3):
display();
default:
exit(0);
    }
}}
    



