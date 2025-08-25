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
int curSong(Node* head){return head->data;}
int nextSong(Node** head){if((*head)->next!=NULL)*head=(*head)->next;return (*head)->data;}
int prevSong(Node** head){if((*head)->prev!=NULL)*head=(*head)->prev;return (*head)->data;}    
int main()
{
    Node* head=readList();
    printList(head);
}