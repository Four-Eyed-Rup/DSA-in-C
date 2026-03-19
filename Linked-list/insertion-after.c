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
struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr->next != NULL){
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
                //start = insert_after(start);
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