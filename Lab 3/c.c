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

int dyad(Node* head,long int t)
{
    Node*last=head;long int sum=0;
    while(last->next!=NULL)last=last->next;
    while(head!=last)
    {
        sum=head->data+last->data;
        if(sum>t)last=last->prev;
        if(sum<t)head=head->next;
        if(sum==t)return 1;
    }
    return 0;
}
   
int main()
{
    long int target;
    scanf("%d",&target);
    Node* head=readList();
    printf("%d",dyad(head,target));
}