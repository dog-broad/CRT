#include <stdio.h>
#include <stdlib.h>

struct BinaryTree{
    int data;
    struct BinaryTree *left, *right;
} *root = NULL;

struct BinaryTree *createNode(int  val){
    struct BinaryTree *n = malloc(sizeof(struct BinaryTree));
    n->data = val;
    n->left = n->right = NULL;
    return n;
};

/*

            36
         /      \
        8       39
       / \      / \
      3   9   38  40
              /
             37
*/

int height(struct BinaryTree *tmp){
    if(tmp == NULL) 
        return 0;
    int leftHeight = height(tmp->left);
    int rightHeight = height(tmp->right);
    if(leftHeight > rightHeight)
        return leftHeight + 1;
    else
        return rightHeight + 1;
}

int main(){
    root = createNode(36);
    root->left = createNode(8);
    root->right  = createNode(39);
    root->left->left = createNode(3);
    root->left->right = createNode(9);
    root->right->left = createNode(38);
    root->right->right = createNode(40);
    root->right->left->left = createNode(37);
    printf("%d", height(root));
}