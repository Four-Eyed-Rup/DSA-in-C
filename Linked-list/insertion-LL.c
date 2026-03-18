// white a program to implemnet creation, insertion and display of nodes in linked list

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
    int num;
    printf("\n Enter -1 for exit");
    printf("\n Enter the data: ");
    scanf("%d", &num);
    while (num != -1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = num;
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
        printf("\n Enter the data 2 : ");
        scanf("%d", &num);
    }
return start;
}
struct node *insert(struct node *start)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    int val;
        printf("\n Enter the elemeent that has to be inserted: ");
        scanf("%d", &val);
        newnode->data = val;
        newnode->next = start;
        start = newnode;
    return start;
}

struct node *display(struct node *start){
    struct node *ptr = start;
    printf("\n");
    while(ptr != NULL){
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    return start;
}
int main()
{
    int choice;
    printf("\n 1) New node  2) Insert 3) Display 4) Exit\n");
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
                start = insert(start);
                break;
            case 3:
                start = display(start);
                break;
            case 4:
                break;
            default:
            {
                
            }
        }
    printf("\n 1) New node  2) Insert 3) Display 4) Exit\n");
    printf("\n Enter the choice: ");
    scanf("%d", &choice);
    }
    return 0;
}
