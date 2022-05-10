#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;

void show(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element = %d \n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *delete_node(node *head)
{
    node *ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

int main()

{

    node *head;
    node *second;
    node *third;
    node *fourth;
    node *fifth;

    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));
    fifth = (node *)malloc(sizeof(node));

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
    head = delete_node(head);
    
printf("\n\nAfter Deletion \n\n");
    show(head);

    return 0;
}