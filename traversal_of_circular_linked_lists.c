#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;

} tnode;

void show(tnode *head)
{
    tnode *ptr = head;
    do
    {
        printf("Element = %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    tnode *head;
    tnode *second;
    tnode *third;
    tnode *fourth;

    head = (tnode *)malloc(sizeof(tnode));
    second = (tnode *)malloc(sizeof(tnode));
    third = (tnode *)malloc(sizeof(tnode));
    fourth = (tnode *)malloc(sizeof(tnode));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = head;

    show(head);

    return 0;
}