// Write a program to insert a new node after a given position in linked list 
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *start;

struct node *create(struct node *start){
    int val;
    struct node *newnode, *ptr;
    printf("\n Enter -1 for exit");
    printf("\n Enter the data: ");
    scanf("%d", &val);
    while(val != -1){
        newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
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
    printf("\n Enter -1 for exit");
    printf("\n Enter the data: ");
    scanf("%d", &val);
    }
    return start;
}

struct node *afterInsertion(struct node *start){
    struct node *ptr, *preptr, *newnode;
    int val, pos, count=0;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n Enter the position for value insertion: ");
    scanf("%d", &pos);
    printf("\n Enter the data that has to be inserted: ");
    scanf("%d", &val);
    newnode->data = val;
    ptr = start;
    while(count != pos){
        preptr = ptr;
        ptr = ptr->next;
        count++;
    }
    if(preptr == NULL){
        newnode->next = NULL;
        preptr->next = newnode;
    }
    else{
        newnode->next = ptr;
        preptr->next = newnode;
    }
    return start;
}

struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr != NULL){
        printf("%d-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    return start;
}
int main(){
    int choice;
    printf("\n 1) New node  2) Insert 3) Display 4) Exit\n");
    printf("\n Enter the choice: ");
    scanf("%d", &choice);
    while(choice != 4){
        switch(choice){
            case 1:
                start = create(start);
                break;
            case 2:
                start = afterInsertion(start);
                break;
            case 3:
                start = display(start);
                break;
        }
        printf("\n 1) New node  2) Insert 3) Display 4) Exit\n");
    printf("\n Enter the choice: ");
    scanf("%d", &choice);
    }
    return 0;
}
