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
    for(struct BinaryTree *temp = root; temp!= NULL;){
        printf("value: %d\n", val);
        if(val <= temp->data){
            printf("Cuurent temp data: %d\n", temp->data);
            if(temp->left == NULL){
                printf("Here, left is empty, we insert here\n");
                temp->left = createNode(val);
                break;
            }
            else{
                temp = temp->left;
            }
        }
        else{
            if(temp->right == NULL){
                temp->right = createNode(val);
                break;
            }
            else{
                temp = temp->right;
            }
        }
    }
}
int main( ){ 
        int n; scanf("%d", &n); for(int i=0;i<n;i++) { int t; scanf("%d", &t); insert(t); }   
        inorder(root); 
}