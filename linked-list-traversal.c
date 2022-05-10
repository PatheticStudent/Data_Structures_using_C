#include <stdio.h>
#include <stdlib.h>
// Defining node
typedef struct node
{
    int data;
    struct node *next;

} node;

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n" , ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
// Variables
    node *head;
    node *second;
    node *third;
    node *fourth;
// Dynamic Memory Allocation To Node
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
// Storing data 
    head->data = 1;
    head->next = second;
   
    second->data = 2;
    second->next = third;
    
    third->data = 3;
    third->next = fourth;
    
    fourth->data = 4;
    fourth->next = NULL;
// traversal
    linkedlisttraversal(head);

    return 0;
}