// Write a program to delete a node after a given node

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *start;

struct node *create(struct node *start){
    struct node *newnode, *ptr;
    int val;
    printf("\n Enter -1 for exit");
    printf("\n Enter the data: ");
    scanf("%d", &val);
    while( val != -1){
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = val;
        if( start == NULL){
            newnode->next = NULL;
            start = newnode;
        }
        else{
            ptr = start;
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->next = NULL;
        }
        printf("\n Enter the data: ");
        scanf("%d", &val);
    }
    return start;
}

struct node *delete_after(struct node *start){
    struct node *ptr, *preptr;
    int val;
    printf("\n Enter the node whose after node has to be deleted: ");
    scanf("%d", &val);
    ptr = start;
    preptr = ptr;
    while(preptr->data != val){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}
struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while (ptr != NULL){
        printf("%d-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    return  start;
}
int main(){
    int choice;
    printf("\n 1) Create 2) Delete after3) Display 4) Exit");
    printf("\n Enter the choice: ");
    scanf("%d", &choice);
    while(choice != 4){
        switch(choice){
            case 1:{
                start = create(start);
                break;
            }
            case 2:{
                start = delete_after(start);
                break;
            }
            case 3:{
                start = display(start);
                break;
            }
            case 4:{
                break;
            }
        }
    printf("\n 1) Create 2) Delete after3) Display 4) Exit");
    printf("\n Enter the choice: ");
    scanf("%d", &choice);
    }
    return 0;
}