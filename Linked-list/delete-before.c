// Write a program to delete a node before of a given node 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start;

struct node *create(struct node *start)
{
    struct node *newnode, *ptr;
    int val;
    printf("\n Enter the data: ");
    scanf("%d", &val);
    
    while (val != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = val;
        if (start == NULL)
        {
            start = newnode;
            newnode->next = NULL;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
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
struct node *delete_before(struct node *start){
    struct node *ptr, *preptr, *prepreptr;
    int val;
    printf("\n Enter the value whose before node has to be deleted: ");
    scanf("%d", &val);
    if(start == NULL){
        printf("\n Underflow");
    }
    else{
        ptr = start;
        preptr = ptr;
        while(ptr->data != val){
            prepreptr = preptr;
            preptr = ptr;
            ptr = ptr->next;
        }
        prepreptr->next = ptr;
        free(preptr); 
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
int main()
{
    int choice;
    printf("\n1) Create 2) Delete before3) Display 4) Exit");
    printf("\n Enter the choice: ");
    scanf("%d", &choice);
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
        {
            start = create(start);
            break;
        }
        case 2:
        {
            start = delete_before(start);
            break;
        }
        case 3:
        {
            start = display(start);
            break;
        }
        case 4:
        {
            break;
        }
        }
        printf("\n1) Create 2) Delete before3) Display 4) Exit");
        printf("\n Enter the choice: ");
        scanf("%d", &choice);
    }
    return 0;
}
