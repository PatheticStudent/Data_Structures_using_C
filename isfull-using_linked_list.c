#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int isfull(struct node* top){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        return -1;
    }
    else{
        return 0;
    }
}


int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));



    head->next = second;

    second->data = 2 ;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = head;

if(isfull(head)== -1){
    printf("The Stack is full");
    
}
else
{
    printf("The Stack is not full");
}


    return 0;
}