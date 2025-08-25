#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
struct Node_t {
int data;
struct Node_t *next;
};
typedef struct Node_t Node;

Node *createNode(int value) {
Node *newNode = malloc(sizeof(Node));
assert(newNode != NULL);
newNode->data = value;
newNode->next = NULL;
return newNode;
}

Node *addToList(Node *head, int val) {
Node *newNode = createNode(val);
if (head == NULL) {
return newNode;
}
Node *cur = head;
while (cur->next != NULL) {
cur = cur->next;
}
cur->next = newNode;
return newNode;
}

Node *readList() {
int n;
scanf("%d", &n);
Node *head = NULL;
for (int i = 0; i < n; ++i) {
int x;
scanf("%d", &x);

if (head == NULL) {
head = addToList(head, x);
} else {
addToList(head, x);
}
}
return head;
}

void printList(Node *head) {
Node *ptr = head;
while (ptr != NULL) {
printf("%d ", ptr->data);
ptr = ptr->next;
}
printf("\n");
return;
}

void freeList(Node *head) {
Node *cur, *nxt;
cur = head;
while (cur != NULL) {
nxt = cur->next;
free(cur);
cur = nxt;
}
}

Node *mergeLists(Node *head1, Node *head2)
{
    Node *head3=createNode(0);int flag=0;int x,y;
    while(head1!=NULL||head2!=NULL)
    {
        if(head1!=NULL)x=head1->data;if(head2!=NULL)y=head2->data;
        
        if(head2==NULL){addToList(head3,x);head1 =head1->next;continue;}
        if(head1==NULL){addToList(head3,y);head2 =head2->next;continue;}

        if(x>y){addToList(head3,y);head2 =head2->next;}else {addToList(head3,x);head1 =head1->next;}
        x=0;y=0;
    }
    return head3->next;
}

int main(void) {

    Node *head1 = readList();
Node *head2 = readList();
Node *merged = mergeLists(head1, head2);
printList(merged);

return 0;
}
