#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
     int data;
     struct Node *next;
} Node;

void show(Node *ptr)
{
     while (ptr != NULL)
     {
          printf("Element = %d \n", ptr->data);
          ptr = ptr->next;
     }
}

int insertinbetween(Node *head, int insertdata, int index)
{
    // 8|p 2|ptr 4|ptr2
    struct Node * ptr= (struct Node * )malloc(sizeof(struct Node));
    struct Node * p = head;
    int i =0;
    
         while(i!=index-1){
              p = p->next;
              i++;
         }
    
     ptr->data = insertdata;
     ptr->next = p->next;
     p->next = ptr;
     return head;
}

int main()
{
     int insertdata = 55;
     int index = 2;
     Node *head;
     Node *second;
     Node *third;
     Node *fourth;

     head = (struct Node *)malloc(sizeof(struct Node));
     second = (struct Node *)malloc(sizeof(struct Node));
     third = (struct Node *)malloc(sizeof(struct Node));
     fourth = (struct Node *)malloc(sizeof(struct Node));

     head->data = 5;
     head->next = second;

     second->data = 4;
     second->next = third;

     third->data = 6;
     third->next = fourth;

     fourth->data = 8;
     fourth->next = NULL;

     printf("Before insertion\n");
     show(head);


     printf("\n");
   head =  insertinbetween(head,insertdata,index);
  

     printf("After insertion\n");

     show(head);

     return 0;
}