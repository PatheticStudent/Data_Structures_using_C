#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isfull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *top, int x)
{
    if (isfull(top))
    {
        printf("Stack Overflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int main()
{

    struct node *top = NULL;

    top = push(top, 10);
    top = push(top, 11);
    top = push(top, 12);
    top = push(top, 13);
    top = push(top, 14);
    top = push(top, 15);
    traversal(top);

    return 0;
}