#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *right;
    struct node *left;
};

struct node *CreateNode(int value)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void PreOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        /* code */
        printf("%d ", root->data);
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

void PostOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        /* code */

        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}

void InOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        /* code */

        InOrderTraversal(root->left);
        printf("%d ", root->data);
        InOrderTraversal(root->right);
    }
}

void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* new = CreateNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }
}


    struct node *search(struct node * root, int key)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            return search(root->left, key);
        }
        else
        {
            return search(root->right, key);
        }
    }

    struct node *itSearch(struct node * root, int key)
    {
        if (root->data == key)
        {
            return root;
        }
        else if (root->data < key)
        {
            return root->left;
        }
        return root->right;
    }
    int main()
    {
        struct node *p = CreateNode(5);

        struct node *p1 = CreateNode(3);

        struct node *p2 = CreateNode(6);

        struct node *p3 = CreateNode(1);

        struct node *p4 = CreateNode(4);

        p->left = p1;
        p->right = p2;

        p1->left = p3;
        p1->right = p4;
        printf("The preorder traversal is \n");
        PreOrderTraversal(p);
        printf("\n");
        printf("The Postorder traversal is \n");
        PostOrderTraversal(p);
        printf("\n");
        printf("The Inorder traversal is \n");
        InOrderTraversal(p);
        printf("\n");

        struct node *n = search(p, 6);
        if (n != NULL)
        {
            printf("\n \nElement Found in the BST: %d", n->data);
        }
        else
        {
            printf("Element not found");
        }

        struct node *m = itSearch(p, 6);
        if (m != NULL)
        {
            printf("\n \nElement Found in the BST: %d", m->data);
        }
        else
        {
            printf("Element not found");
        }
        insert(p, 16);
    printf("\n\n%d", p->right->right->data);
        return 0;

         
    }