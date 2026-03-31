// Write a program to impliment a doubly linked list 

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *start;

struct node *create(struct node *start)
{
    struct node *ptr, *newnode;
    int val;

    printf("\nEnter the data: ");
    scanf("%d", &val);

    while (val != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = val;
        if (start == NULL)
        {
            newnode->prev = NULL;
            newnode->next = NULL;
            start = newnode;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->prev = ptr;
            newnode->next = NULL;
        }
        printf("\nEnter the data: ");
        scanf("%d", &val);
    }
    return start;
}
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    return start;
}
struct node *insertBeg(struct node *start)
{
    struct node *ptr, *newnode;
    int val;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the dataZ: ");
    scanf("%d", &val);
    newnode->data = val;
    ptr = start;
    newnode->next = start;
    newnode->prev = NULL;
    start->prev = newnode;
    start = newnode;
    return start;
}
struct node *insertEnd(struct node *start)
{
    struct node *ptr, *newnode;
    int val;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d", &val);
    newnode->data = val;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->prev = ptr;
    newnode->next = NULL;
    return start;
}
struct node *insertBefore(struct node *start)
{
    struct node *ptr, *newnode;
    int val, num;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value which before the new node has to be inserted: ");
    scanf("%d", &num);                  // num is the desired value 
    printf("\nEnter the data: ");
    scanf("%d", &val);
    newnode->data = val;
    ptr = start;
    while(ptr->data != num){
        ptr = ptr->next;
    }
    newnode->next = ptr;
    newnode->prev = ptr->prev;
    ptr->prev->next = newnode;
    ptr->prev = newnode;
    return start;
}
struct node *insertAfter(struct node *start)
{
    struct node *ptr, *newnode;
    int val, num;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value after which the new node has to be inserted: ");
    scanf("%d", &num);                      // num is the desired value 
    printf("\nEnter the data: ");
    scanf("%d", &val);
    newnode->data = val;
    ptr = start; 
    while(ptr->data != num){
        ptr = ptr->next;
    }
    newnode->next = ptr->next;
    newnode->prev = ptr;
    ptr->next->prev = newnode;
    ptr->next = newnode;
    return start;
}
struct node *deleteBeg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    start = ptr->next;
    start->prev = NULL;
    free(ptr);
    return start;
}
struct node *deleteEnd(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->prev->next = NULL;
    free(ptr);
    return start;
}
struct node *deleteAfter(struct node *start)
{
    struct node *ptr, *temp;
    int num;
    ptr = start;
    printf("\nEnter the value which after the node has to be deleted: ");
    scanf("%d", &num);
    while(ptr->data != num){
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = temp->next;
    temp->next->prev = ptr;
    free(temp);
    return start;
}
struct node *deleteBefore(struct node *start)
{
    struct node *ptr, *temp;
    int num;
    ptr = start;
    printf("\nEnter the value which before the node has to be deleted: ");
    scanf("%d", &num);
    while(ptr->data != num){
        ptr = ptr->next;
    }
    temp = ptr->prev;
    temp->prev->next = ptr;
    ptr->prev = temp->prev;
    free(temp);
    return start;
}

int main()
{
    int choice;
    printf("\n 1) Create 2) display 3) Insert beginning 4) Insert end ");
    printf("\n5) insert before 6) insert after 7) Delete Beginning 8) Delete end");
    printf("\n59) Delete after 10) Delete before 11) Exit ");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
    while (choice !=11)
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
            start = display(start);
            break;
        }
        case 3:
        {
            start = insertBeg(start);
            break;
        }
        case 4:
        {
            start = insertEnd(start);
            break;
        }
        case 5:
        {
            start = insertBefore(start);
            break;
        }
        case 6:
        {
            start = insertAfter(start);
            break;
        }
        case 7:
        {
            start = deleteBeg(start);
            break;
        }
        case 8:
        {
            start = deleteEnd(start);
            break;
        }
        case 9:
        {
            start = deleteAfter(start);
            break;
        }
        case 10:
        {
            start = deleteBefore(start);
            break;
        }
        case 11:
        {
            break;
        }
        }
        printf("\n 1) Create 2) display 3) Insert beginning 4) Insert end ");
        printf("\n5) insert before 6) insert after 7) Delete Beginning 8) Delete end");
        printf("\n9) Delete after 10) Delete before 11) Exit ");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
    }
    return 0;
}