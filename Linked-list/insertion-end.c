// Write a program to insert a new node at the end of the linked list
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
    printf("\n Enter -1 for exit");
    printf("\n Enter the data: ");
    scanf("%d", &val);

    while (val != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        ptr = start;
        newnode->data = val;
        if (start == NULL)
        {
            newnode->next = NULL;
            start = newnode;
        }
        else
        {
            while (ptr->next != NULL)
            {
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
struct node *endInsert(struct node *start)
{
    struct node *newnode, *ptr;
    int val;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data: ");
    scanf("%d", &val);
    newnode->data = val;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    newnode->next = NULL;
    return start;
}
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf(" %d->", ptr->data);
        ptr = ptr->next;
    }
    printf(" NULL");
    return start;
}
int main()
{
    int choice;
    printf("\n 1)Create 2)Insert from end 3)Display 4)Exit");
    printf("\n Enter the choice: ");
    scanf("%d", &choice);
    while (choice != 4)
    {
        switch (choice)
        {
        case 1:
            start = create(start);
            break;
        case 2:
            start = endInsert(start);
            break;
        case 3:
            start = display(start);
            break;
        case 4:
            break;
        }
        printf("\n 1)Create 2)Insert from end 3)Display 4)Exit");
        printf("\n Enter the choice: ");
        scanf("%d", &choice);
    }
    return 0;
}
