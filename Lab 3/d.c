#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
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
int* maketeams(Node* head)
{
    Node* last=head;while(last->next!=NULL)last=last->next;
    Node* save=head;
    int teama=0,teamb=0;
    while(last!=head)
    {
        if(teama<teamb)
        {teama+=head->data;head=head->next;}
        else
        {teamb+=last->data;last=last->prev;}
    }
    while(last->next!=NULL||head->prev!=NULL)
    {
        if(teama>teamb)
        {teama-=head->data;head=head->prev;}
        if(teama<teamb)
        {teamb-=last->data;last=last->next;}
        if(teama==teamb)
        break;
    }
    int a[2];
    a[0]=0;a[1]=0;
    while(last->next!=NULL){last=last->next;a[1]++;}
    while(head->prev!=NULL){head=head->prev;a[0]++;}

    printf("%d %d",*a,*(a+1));
    return a;
}  
int main()
{
    Node* head=readList();
    int *a=maketeams(head);
}