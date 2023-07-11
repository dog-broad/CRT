#include <stdio.h>
#include <stdlib.h>

struct SLL
{
    //Singly Linked List without tail
    //write here
    int data;
    struct SLL *next;
}*head = NULL;
void push(int v)
{
    //Write here!
    struct SLL *p = (struct SLL *)malloc(sizeof(struct SLL *));
    p->data = v;
    p->next = head;
    head = p;
}
void printSLL(struct SLL *p)
{
    //Write here!
    while (p != NULL) {
        printf("%d ", p->data);
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

