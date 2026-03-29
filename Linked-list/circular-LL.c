// Write a program to implement a circular linked list 

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start;
struct node *create(struct node *start){
    struct node *newnode, *ptr;
    newnode = (struct node*)malloc(sizeof(struct node));
    int val;
    printf("\nEnter -1 for exit");
    printf("\nEnter the data: ");
    scanf("%d", &val);
    while(val != -1){
        newnode->data = val;
        if(start == start){
            newnode->next = start;
            start = newnode;
        }
        else{
            ptr = start;
            while(ptr->next != start){
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->next = start;
        }
        printf("\nEnter -1 for exit");
        printf("\nEnter the data: ");
    }
    return start;
}
struct node *insertBeg(struct node *start){
    
    return start;
}
struct node *insertEnd(struct node *start){
    
    return start;
}
struct node *deleteBeg(struct node *start){
    
    return start;
}
struct node *deleteEnd(struct node *start){
    
    return start;
}
struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr->next != start){
        printf("%d-> ", &ptr->data);
    }
    printf("NULL");
    return start;
}
int main(){
    int choice;
    printf("\n 1) Create2) Insert beginning 3) Insert end ");
    printf("\n4) Delete beginning 5) Delete end 6) Display 0) Exit");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
    while(choice != 0){
        switch(choice){
            case 1:{
                start = create(start);
                break;
            }
            case 2:{
                start = insertBeg(start);
                break;
            }
            case 3:{
                start = insertEnd(start);
                break;
            }
            case 4:{
                start = deleteBeg(start);
                break;
            }
            case 5:{
                start = deleteEnd(start);
                break;
            }
            case 6:{
                start = display(start);
                break;
            }
            case 0:{
                break;
            }
        }
        printf("\n 1) Create2) Insert beginning 3) Insert end ");
        printf("\n4) Delete beginning 5) Delete end 6) Display 0) Exit");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
    }
    return 0;
}