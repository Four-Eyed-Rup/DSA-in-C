// Write a program to traverse a linked list and display all the elements

#include <stdio.h>
#include <stdlib.h>
// node structure
struct node{
    int data;
    struct node *next;
};
// start pointer
struct node *start;
// creating new node
struct node *create(struct node *start){
    struct node *ptr, *newnode;
    int num;
    printf("\n Enter -1 for exit.");
    printf("\n Enter the data: ");
    scanf("%d", &num);
    
    while(num != -1){
        newnode = (struct node*) malloc (sizeof(struct node));
        newnode->data = num;
        if(start == NULL){
            start = newnode;
            newnode->next = NULL;
        }
        else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->next = NULL;
        }
        printf("\n Enter the data2: ");
        scanf("%d", &num);
    }
    return start;
}
// display function
struct node *display(struct node *start){
    struct node *ptr = start;
    printf("\n");
    while(ptr != NULL){
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}
int main(){
    start = create(start);
    display(start);
    return 0;
}