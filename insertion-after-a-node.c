#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct  Node *next;

}Node;

void show(Node * ptr){
while(ptr != NULL){
    printf("Element : %d \n", ptr->data);
    ptr =ptr->next;
}


}

struct Node * insertafterNode(Node * head, Node * prevNode, int data){

Node * ptr = (struct Node *)malloc(sizeof(struct Node));   
    ptr->data = data;
    ptr->next= prevNode->next;
    prevNode->next = ptr;
    return head;
}
     int main()
{
Node * head;  

Node * second;

Node * third;

Node * fourth;

head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
fourth= (struct Node *)malloc(sizeof(struct Node));


head->data =1;
head->next = second;
second->data =2;
second->next = third;
third->data =3;
third->next = fourth;
fourth->data =4;
fourth->next = NULL;

printf("Before insertion \n");

show(head);
head = insertafterNode(head, second, 45);
printf("After insertion \n");

show(head);
return 0;
}