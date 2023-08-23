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
struct BinaryTree *insertNode(struct BinaryTree *r, int val){
    if(r == NULL)
        return createNode(val);
    if(val < r->data)
        r->left = insertNode(r->left, val);
    else if(val > r->data)
        r->right = insertNode(r->right, val);
    return r;
}
void insert(int val){ // INSERTS the val into the tree
   // WRITE CODE HERE
   root = insertNode(root, val);
}
int main( ){ 
        int n; scanf("%d", &n); for(int i=0;i<n;i++) { int t; scanf("%d", &t); insert(t); }   
        inorder(root); 
}