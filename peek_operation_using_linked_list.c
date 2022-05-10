#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    printf("\n \nThe Elements in the stack are : \n");
    while (ptr != NULL)
    {
        printf(" Element = %d  \n", ptr->data);
        ptr = ptr->next;
    }
}

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isfull(struct node *top)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

struct node *push(struct node *top, int value)
{
    if (isfull(top))
    {
        printf("Cannot Push %d in the stack \n", value);
    }

    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = value;
        n->next = top;
        top = n;
        printf("Pushed %d in the stack \n", value);
        return top;
    }
}
struct node * pop(struct node * top){
     if (isempty(top))
    {
        printf("Stack Underflow");
    }
    else{
    struct node * n = top;
     printf("Successfully popped element %d", top->data);
     top = top->next;
     n->data = top->data;
    
    free(n);
  
    return top;
    }
}



int main()
{
    struct node *top = NULL;
    top = push(top, 15);
    top = push(top, 16);
    top = push(top, 17);
    top = push(top, 18);
    top = push(top, 19);
    top = push(top, 11);
    top = push(top, 12);
    traversal(top);

   top = pop(top);
    traversal(top);
    return 0;
}