#include<stdio.h>
#include<stdlib.h>
#define max 5

int struct  stack *s;
int top=-1;

void push(){
    int ele;
    printf("enter the element\n");
    scanf("%d",&ele);
    if(top==max-1)
        printf("stack overflow");
    else{
        top++;
        s->stack[top]=ele;
        printf("%d is a pushed element\n",ele);

    }

}
void pop(){
    if(top=-1){
        printf("stack underflow");
    }
    else{
        int value;
        stack[top]=value;
        top--;
    }
}
