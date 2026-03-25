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
    scnaf("%d", &val);
    while (val != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
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
        scnaf("%d", &val);
    }
    return start;
}
struct node *delete_before(struct node *start){
    struct node *ptr;
    if()
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
