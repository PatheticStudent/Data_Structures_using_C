#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *arr;
} stack;

void push(int value, stack *s)
{
    s->top++;
    s->arr[s->top] = value;
    printf("Push Succesfull \n");
}

void traverse_stack(struct stack *ptr){
    printf("\n THe Elements in The Stack are \n");
    for(int i = 0; i<=ptr->top; i++)
        printf("%d \t",ptr->arr[i]);
}



int main()
{
    int value, n;
    stack *s = (stack *)malloc(sizeof(stack));
    {
        s->size = 10;
        s->top = -1;
        s->arr = (int *)malloc(s->size * sizeof(int));
    }
   
   
    printf("The size of stack is %d\n\n\n", s->size);
    printf("Enter the number of elements in stack you want \n");
    scanf("%d", &n);
   
   
    for (int i = 1; i <= n && i < s->size + 1; i++)
    {

        if (s->top == s->size - 1 || n > s->size)
        {
            printf("Cannot push that amount of elements Stack Overflow");
            break;
        }
       
        else
        {
            printf("\n \n Enter the value \n");
            scanf("%d", &value);
            printf("\n");
            push(value, s);
            traverse_stack(s);
        }
    }
    

    return 0;
}
