#include <stdio.h>
#include <stdlib.h>
struct node {
    long int data;
    struct node* next;
    struct node* prev;
};
typedef struct node Node;
Node* createNode(int x)
{
    Node* new=(Node*)(malloc(sizeof(Node)));
    new->data=x;
    new->next=NULL;
    new->prev=NULL;
}
Node* readList()
{
    int n;
    scanf("%d",&n);int x;
    Node* head,*prev=NULL,*save;

    scanf("%d",&x);
    head=createNode(x);
    prev=head;
    save=head;
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&x);
        head=createNode(x);
        head->prev=prev;
        if(prev!=NULL)prev->next=head;
        prev=head;

    }
    return save;
}
void printList(Node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n ");
}

Node* rotate(Node* head, int n)
{
    Node* last=head;while(last->next!=NULL)last=last->next;
    for(int i=0;i<n;i++)
    {
        last->prev->next=NULL;
        last->prev=NULL;
        last->next=head;
        head->prev=last;
        
        head=last;
        while(last->next!=NULL)last=last->next;
    }
    return head;
}
   
int main()
{
    int n;
    scanf("%d",&n);
    Node* head=readList();
    head=rotate(head,n);
    printList(head);
}