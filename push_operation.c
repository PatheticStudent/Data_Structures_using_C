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
    else {
        return 0;
    }
}

int isfull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else {
        return 0;
    }
}

void push(struct stack *s, int value)
{

    if (s->top == s->size - 1)
    {
        printf("\n Cannot push element %d >> Stack Overflow \n", value);
    }
    else
    {
        s->top++;
        s->arr[s->top] = value;
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
        temp =  s->arr[s->top];
         s->top--;
         return temp;
    }
}

void traversal(struct stack * s){
    printf(" \n The elements in the stack are \n ");
    for(int i = 0; i < s->size -1; i++){
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

          push(s,10);
          push(s,11);
          push(s,12);
          push(s,13);
          push(s,14);
          push(s,15);
          push(s,16);
          push(s,17);
          push(s,18);
 printf("\nAfter pushing Empty: %d \n", isempty(s));

 printf("After pushing Full: %d\n ", isfull(s));

     traversal(s);

         printf("Popped %d from the stack\n", pop(s));
          printf("Popped %d from the stack\n", pop(s));
           printf("Popped %d from the stack\n", pop(s));
            printf("Popped %d from the stack\n", pop(s));
             printf("Popped %d from the stack\n", pop(s));
              printf("Popped %d from the stack\n", pop(s));



printf("\nAfter poping Empty: %d \n", isempty(s));

 printf("After poping Full: %d\n ", isfull(s));
 traversal(s);
    return 0;
}