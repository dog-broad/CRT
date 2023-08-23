#include <stdio.h>
#include <stdlib.h>

struct Tree{
    int data;
    struct Tree *left;
    struct Tree *right;
    struct Tree *middle;
} *root = NULL;

struct Tree *createNode(int val){
    // 1. Create a node
    struct Tree *n = (struct Tree *)malloc(sizeof(struct Tree));
    // 2. Insert a value
    n->data = val;
    // 3. Initialize left, right and middle as NULL
    n->left = NULL;
    n->right = NULL;
    n->middle = NULL;
    // 4. Return the node
    return n;
};

void preorder(struct Tree *t){
    if(t==NULL) 
        return;
    printf("%d ", t->data);
    preorder(t->left);
    preorder(t->middle);
    preorder(t->right);
}

int main(){
    /*

              45
          /   |   \
        12   9     90
       / \        / |
      6  7       2  1

    */

    root = createNode(45);
    root->left = createNode(12);
    root->middle = createNode(9);
    root->right = createNode(90);
    root->left->left = createNode(6);
    root->left->right = createNode(7);
    root->right->left = createNode(2);
    root->right->middle = createNode(1);
    preorder(root);
}