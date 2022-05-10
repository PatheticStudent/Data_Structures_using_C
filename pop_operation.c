#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pop(struct stack *s)
{

    if (s->top == -1)
    {
        printf("\n Cannot pop element >> Stack Underflow \n");
    }
    else
    {

        int temp;
        temp = s->arr[s->top];
        s->top--;
        return temp;
    }
}

void traversal(struct stack *s)
{
    printf(" \n The elements in the stack are \n ");
    for (int i = 0; i < s->size - 1; i++)
    {
        printf(" \t %d", s->arr[i]);
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(s->size * sizeof(struct stack));
    {
        s->size = 10;
        s->top = -1;
        s->arr = (int *)malloc(s->size * sizeof(int));
    }

    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    printf("\nAfter poping Empty: %d \n", isempty(s));

    printf("After poping Full: %d\n ", isfull(s));

    traversal(s);
    return 0;
}