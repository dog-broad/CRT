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
    struct BinaryTree *n = (struct BinaryTree*)malloc(sizeof(struct BinaryTree));
    n -> data = v;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}
void inorder(struct BinaryTree * r){ //Ascending Order 
    //WRITE CODE HERE
    if(r == NULL) 
        return;
    inorder(r -> left);
    printf("%d ", r -> data);
    inorder(r -> right);
}

int main( ){ 
        int arr[9]; for(int i=0;i<9;i++) scanf("%d", &arr[i]);  
        root = createNode(arr[0]);
        root->left = createNode(arr[1]);
        root->right = createNode(arr[2]);
        root->left->left = createNode(arr[3]);
        root->left->right = createNode(arr[4]);
        root->right->right = createNode(arr[5]);
        root->left->left->left = createNode(arr[6]);
        root->left->left->right = createNode(arr[7]);
        root->right->right->left = createNode(arr[8]);
        inorder(root); 
}