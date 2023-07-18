#include <stdio.h>
#include <stdlib.h>

struct SLL{
    int data; struct SLL *next;
}*head = NULL, *tail = NULL;

void push(int v){
    struct SLL *n = malloc(sizeof(struct SLL));
    n->data = v;
    n->next = head;
    if(head == NULL) 
        tail = n;//if list is empty, firstNode is also tail
    head = n;
}

void printSLL(struct SLL *p){
    while(p!=NULL) { printf("%d ", p->data); p=p->next; }
}
void append(int v){
  if(head == NULL) { push(v); return; }//1
  struct SLL *n = malloc(sizeof(struct SLL)); n->data = v;
  tail->next = n;
  tail = n;
}
void delete(int v){
    //Write Code Here!
    struct SLL *p = head, *prev = NULL;
    // If linked list is empty
    if(p==NULL) 
        return;
    // Iterate over the list till we find the key to be deleted
    while(p!=NULL && p->data!=v) {
        prev = p;
        p = p->next;
    }
    // If key is present at head, move head to next node
    if(prev==NULL) {
        head = head->next;
    }
    // If key is present anywhere else
    else 
        prev->next = p->next;
    // Free memory
    free(p);
}
//DO NOT EDIT THE CODE BELOW IN ANYWAY!!
int main()
{
    int n1, n2;scanf("%d%d",&n1, &n2);
    while(n1--)
    {
        int k;
        scanf("%d",&k);
        push(k);x
    }
  	while(n2--)
    {
        int k;
        scanf("%d",&k);
        append(k);
    }
  int k;
        scanf("%d",&k);
        delete(k);
    printSLL(head);
}