#include <stdio.h>
#include <stdlib.h>

struct SLL
{
  //Singly Linked List
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
void append(int v)
{
    //Write HERE!
    struct SLL *p = (struct SLL *)malloc(sizeof(struct SLL *));
    p->data = v;
    p->next = NULL;
    if (head == NULL) {
        head = p;
    } else {
        struct SLL *q = head;
        while (q->next != NULL) {
            q = q->next;
        }
        q->next = p;
    }
}
//DO NOT EDIT THE CODE BELOW IN ANYWAY!!
int main()
{
    int n1, n2;scanf("%d%d",&n1, &n2);
    while(n1--)
    {
        int k;
        scanf("%d",&k);
        push(k);
    }
  	while(n2--)
    {
        int k;
        scanf("%d",&k);
        append(k);
    }
    printSLL(head);
}