

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
struct node *beforeInsert(struct node *start)
{
    struct node *newnode, *ptr, *preptr;
    newnode = (struct node *)malloc(sizeof(struct node));
    int pos, val;
    printf("\n Enter the value which a newnode is inserted before; ");
    scanf("%d", &pos);
    printf("\n Enter the value of new node: ");
    scanf("%d", &val);
    newnode->data = val;
    ptr = start;
    while (ptr->data != pos)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = newnode;
    newnode->next = ptr;
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
    printf("\n 1) Create2) Insert before3) Display 4) Exit");
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
            start = beforeInsert(start);
            break;
        case 3:
            start = display(start);
            break;
        case 4:
            break;
        }
        printf("\n 1) Create2) Insert before3) Display 4) Exit");
        printf("\n Enter the choice: ");
        scanf("%d", &choice);
    }
    return 0;
}