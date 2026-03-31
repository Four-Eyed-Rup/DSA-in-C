// Write a progrma to implement the stack 

#include <stdio.h>
#include <stdio.h>
#define MAX 20
int st[MAX], top = -1; 

void push(int st[], int val){
    if(top == MAX-1){
        printf("\n OVERFLOW");
    }
    else{
        top++;
        st[top] = val;
    }
}
int pop(int st[]){
    int val;
    if(top == -1){
        printf("\n UNDERFLOW");
        return -1;
    }
    else{
        top--;
        val = st[top];
        return val;
    }
}
int peek(int st[]){
    printf("Top : %d", st[top]);
    return st[top];
}
void display(int st[]){
    int i;
    printf("\nSTACK-----------------");
    for(i=top; i>=0; i--){
        printf("\n%d", st[i]);
    }
}
int main(){
    int choice, val;
    printf("\n 1) Push 2) Pop 3) Peek  4) Display 0) Exit");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
    while(choice != 0){
        switch(choice){
            case 1:{
                printf("\nEnter the value that has to be push: ");
                scanf("%d", &val);
                push(st , val);
                break;
            }
            case 2:{
                val = pop(st);
                break;
            }
            case 3:{
                val = peek(st);
                break;
            }
            case 4:{
                display(st);
                break;
            }
            case 0:{
                break;
            }
        }
        printf("\n 1) Push 2) Pop 3) Peek  4) Display 0) Exit");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
    }
    return 0;
}