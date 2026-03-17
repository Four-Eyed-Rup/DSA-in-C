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
    printf("\n Enter the data: ");
    scanf("%d", &num);
    }
    return start;
};
struct node *insert(struct node *start) {

};
struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
};
int main()
{
    start = create(start);
    display(start);
    return 0;
}