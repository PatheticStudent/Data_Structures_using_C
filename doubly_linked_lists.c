#include<stdio.h>
#include<stdlib.h>
  typedef struct node{
int data;
struct node * next;
struct node * prev;



   }tnode;
//  For reverse traversal

// void show(tnode * head){
//     struct node * ptr = head;
// do{
//       printf("Element = %d \n", ptr->data);
//     ptr = ptr->next;
// }
//     while(ptr->prev != NULL);



//  For straight traversal
void show(tnode * head){
    struct node * ptr = head;

    while(ptr->prev != NULL)
    {
      printf("Element = %d \n", ptr->data);
    ptr = ptr->next;
}



}


     
     
     
     
     
     int main()
{
     tnode * head;
     tnode * second;
     tnode * third;
     tnode * fourth;
     tnode * fifth;

head = (tnode *)malloc(sizeof(tnode));
second = (tnode *)malloc(sizeof(tnode));
third = (tnode *)malloc(sizeof(tnode));
fourth= (tnode *)malloc(sizeof(tnode));
fifth = (tnode *)malloc(sizeof(tnode));

head->prev = NULL;
head->data = 1;
head->next = second;

second->prev = second;
second->data =2;
second->next = third;

third->prev = third;
third->data = 3;
third->next = fourth;

fourth->prev = fourth;
fourth->data = 4;
fourth->next = fifth;

fifth->prev = fifth;
fifth->data = 5;
fifth->next = NULL;

show(head);




return 0;
}