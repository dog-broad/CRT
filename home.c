//DO NOT EDIT ANY  OF THE CODE!
// Binary Tree Implementation
#include <stdio.h>
#include <stdlib.h>
struct BinaryTree{ // Properties of Node
    //WRITE CODE HERE
    int data;
    struct BinaryTree *left;
    struct BinaryTree *right;
} *root;
struct BinaryTree * createNode(int v){// Create a New Node
    //WRITE CODE HERE
    struct BinaryTree *n = (struct BinaryTree *)malloc(sizeof(struct BinaryTree));
    n->data = v;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorder(struct BinaryTree * r){ //Ascending Order 
    //WRITE CODE HERE
    if(r == NULL)
        return;
    inorder(r->left);
    printf("%d ", r->data);
    inorder(r->right);
}
void insert(int val){ // INSERTS the val into the tree
   // WRITE CODE HERE
    if(root == NULL){
        root = createNode(val);
        return;
    }
    struct BinaryTree *temp = root, *parent = NULL;
    while(temp != NULL){
        parent = temp;
        if(val < temp->data)
            temp = temp->left;
        else
            temp = temp->right;
    }
    if(val < parent->data)
        parent->left = createNode(val);
    else
        parent->right = createNode(val);
}
int main( ){ 
        int n; scanf("%d", &n); for(int i=0;i<n;i++) { int t; scanf("%d", &t); insert(t); }   
        inorder(root); 
}