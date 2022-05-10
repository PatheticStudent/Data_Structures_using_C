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

struct node *insertatbeginning(struct node *head, int data)
{
    tnode *ptr = (tnode *)malloc(sizeof(tnode));
    ptr->data = data;
    tnode *p = head;

    while (p->next != head)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = head;
    ptr = head;

    return head;
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
    printf("Before insertion \n\n");
    show(head);
    head = insertatbeginning(head, 23);
    printf("After insertion \n\n");
    show(head);

    return 0;
}