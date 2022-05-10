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
struct Node * insertatend(node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
 
    while(p->next != NULL){
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main()
{
// Variables
    int data = 42;
    int index = 1;
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
printf("Linked List before Insertion \n");
    linkedlisttraversal(head);
    head = insertatend(head, data);
printf("\n\n\n");

printf("Linked List after Insertion \n");
 linkedlisttraversal(head);
    return 0;
}