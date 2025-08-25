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

int findMedian(Node *head)
{
    if(head->next==NULL)return head->data;
    int m=0,m2=0;int i=0;Node *copy=head;
    while(head!=NULL)
    {
        m=copy->data;
        m2=(copy->data+copy->next->data)/2;
        if(i%2!=0)copy=copy->next;
        head=head->next;i++;
    }
    if(i%2==0)return m2;
    return m;
}

int main(void) {

    Node *head = readList();
int median = findMedian(head);
printf("%d\n", median);
freeList(head);

return 0;
}
