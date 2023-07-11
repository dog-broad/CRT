#include <stdio.h>
#include <stdlib.h>

struct SLL
{
  //Singly Linked List without tail
    //write here
    int val;
    struct SLL *next;
}*head = NULL;
void push(int v)
{
    //Write here!
    head = (struct SLL *)malloc(sizeof(struct SLL));
    head->val = v;
    head->next = NULL;
}
void printSLL(struct SLL *p)
{
    //Write here!
    while (p != NULL) {
        printf("%d\n", p->val);
        p = p->next;
    }
}
//DO NOT EDIT THE CODE BELOW IN ANYWAY!!
int main()
{
    int n;scanf("%d",&n);
    while(n--)
    {
        int k;
        scanf("%d",&k);
        push(k);
    }
    printSLL(head);
}

