#include<stdio.h>
#include<stdlib.h>

struct stack{
     int size;
     int top ;
     int * arr;
};

int isempty(struct stack * s){
     if(s->top == -1){
          return 1;
     }
     else{
          return 0;
     }
}

int isfull(struct stack * s){
     if(s->top == s->size-1){
          return 1;
     }
     else{
          return 0;
     }
}
     int main()
{
   struct stack *s;
   {
        s->size = 5;
        s->top = -1;
        s->arr = (int *)malloc(s->size * sizeof(int));
       

        if(isempty(s)){
             printf("The stack is empty\n");
        }
        else{
             printf("The stack is not empty\n");
        }

         if(isfull(s)){
             printf("The stack is empty\n");
        }
        else{
             printf("The stack is not empty");
        }


        
   }
   
     
return 0;
}