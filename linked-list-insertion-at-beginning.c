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

int insert(Node *ptr, int insertdata)
{
     ptr->data = insertdata;
     ptr = ptr->next;
     return insertdata;
}

int main()
{
     int insertdata = 55 ;
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

     insert(head, insertdata);

     printf("\n");

     head->data = insert(head, insertdata);

     printf("After insertion\n");

     show(head);

     return 0;
}