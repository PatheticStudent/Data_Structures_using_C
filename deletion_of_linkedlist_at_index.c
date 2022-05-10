// Here We are deleting data a the index

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} tnode;

void show(tnode *ptr)
{
    while (ptr != NULL)
    {
        printf("Element = %d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *delete (tnode *head, int index)
{
    tnode *p = head;
    tnode *q = head->next;
   for(int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);

    return head;
}

int main()
{
    

    tnode *head;
    tnode *second;
    tnode *third;
    tnode *fourth;
    tnode *fifth;

    head = (tnode *)malloc(sizeof(tnode));
    second = (tnode *)malloc(sizeof(tnode));
    third = (tnode *)malloc(sizeof(tnode));
    fourth = (tnode *)malloc(sizeof(tnode));
    fifth = (tnode *)malloc(sizeof(tnode));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    printf("Before Deletion \n\n");
   
    show(head);
    
    head = delete(head, 2);
   
    printf(" \n\nAfter Deletion \n\n");
    
    show(head);
    
    return 0;
}