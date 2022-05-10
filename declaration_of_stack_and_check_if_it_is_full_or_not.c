#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

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
int main()
{
    int n;
    struct stack *s;
    {
        s->size = 2;
        s->top = -1;
        s->arr = (int *)malloc(s->size * sizeof(int));

        s->arr[0] = 1;
        s->top++;

        s->arr[1] = 2;
        s->top++;
        // printf("Enter the total number you want to push in ");
        // scanf("%d", &n);

        // for (int i = 0; i <= n; i++)
        // {

        //     printf("Enter the number you want to push in ");
        //     scanf("%d", &(s->arr[i]));

        //     s->top++;
        // }

        if (isfull(s))
        {
            printf("The stack is Full");
        }
        else
        {
            printf("The stack is not Full");
        }
    }

    return 0;
}