/* Write a program to implement all the operations of linked list
1) Create a new node
2) Insert a new node from beginning 
3) Insert a new node from end 
4) Insert a new node before a given node 
5) Insert a new node After a given node 
6) Delete a node from beginning
7) Delete a node from end 
8) Delete a node before a given node
9) Delete a node after a given node 
10) Display all the nodes
11) Exit 
*/
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
            newnode->next = NULL;
            ptr->next = newnode;
        }
        printf("\n Enter the data: ");
        scanf("%d", &val);
    }
    return start;
}
struct node *insertBeg(struct node *start){
    struct node *newnode;
    int val;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d", &val);
    newnode->data = val;
    newnode->next = start;
    start = newnode;
    return start;
}
struct node *insertEnd(struct node *start){
    struct node *ptr, *newnode;
    int val;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d", &val);
    newnode->data =  val;
    ptr = start;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    newnode->next = NULL;
    ptr->next = newnode;
    return start;
}
struct node *insertBefore(struct node *start){
    struct node *ptr, *preptr, *newnode;
    int val, num;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value which ones before a new node inserted: ");
    scanf("%d", &num);
    printf("\nEnter the data: ");
    scanf("%d", &val);
    newnode->data = val;
    ptr = start;
    while(ptr->data != num){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newnode;
    newnode->next = ptr;
    return start;
}
struct node *insertAfter(struct node *start){
    struct node *ptr, *preptr, *newnode;
    int val, num;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value which ones after newnode has to be inserted: ");
    scanf("%d", &num);
    printf("\nEnter the data: ");
    scanf("%d", &val);
    newnode->data = val;
    ptr = start;
    preptr = start;
    while(preptr->data != num){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newnode;
    newnode->next = ptr;
    return start;
}
struct node *deleteBeg(struct node *start){
    struct node *ptr;
    ptr = start;
    start = ptr->next;
    free(ptr);
    return start;
}
struct node *deleteEnd(struct node *start){
    struct node *ptr, *preptr;
    ptr = start;
    while(ptr->next != NULL){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    return start;
}
struct node *deleteBefore(struct node *start){
    struct node *ptr, *preptr, *prepreptr;
    int num;
    printf("\nEnter the value which ones before node deleted: ");
    scanf("%d", &num);
    ptr = start;
    preptr = start;
    prepreptr = start;
    while(ptr->data != num){
        prepreptr = preptr;
        preptr = ptr;
        ptr = ptr->next;
    }
    prepreptr->next = ptr;
    free(preptr);
    return start;
}
struct node *deleteAfter(struct node *start){
    struct node *ptr, *preptr;
    int num;
    ptr = start;
    preptr = ptr ;
    printf("\nEnter the value which ones after node has to be deleted: ");
    scanf("%d", &num);
    while(preptr->data != num){
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
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
int main()
{
    int choice;
    printf("\n 1) Create 2) Insert start 3) Insert end 4) Insert before 5) Insert After 6) Delete beginning");
    printf("\n 7) Delete end 8) Delete before 9) Delete after 10) Display 11) Exit");
    printf("\n Enter the choice: ");
    scanf("%d", &choice);
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            start = create(start);
            break;
        case 2:
            start = insertBeg(start);
            break;
        case 3:
            start = insertEnd(start);
            break;
        case 4:
            start = insertBefore(start);
            break;
        case 5:
            start = insertAfter(start);
            break;
        case 6:
            start = deleteBeg(start);
            break;
        case 7:
            start = deleteEnd(start);
            break;
        case 8:
            start = deleteBefore(start);
            break;
        case 9:
            start = deleteAfter(start);
            break;
        case 10:
            start = display(start);
            break;
        case 0:
            break;
        }
        printf("\n 1) Create 2) Insert start 3) Insert end 4) Insert before 5) Insert After 6) Delete beginning");
        printf("\n 7) Delete end 8) Delete before 9) Delete after 10) Display 11) Exit");
        printf("\n Enter the choice: ");
        scanf("%d", &choice);
    }
    return 0;
}
