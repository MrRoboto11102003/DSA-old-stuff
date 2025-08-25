#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int A[n],B[n];
    priority_queue<int> pqa;
    priority_queue<int> pqb;
    for(int i=0;i<n;i++){cin>>A[i];pqa.push(A[i]);}
    for(int i=0;i<n;i++){cin>>B[i];pqb.push(B[i]);}
    int x,y;
    for(int i=0;i<k;i++)
    {
        x=pqa.top();
        y=pqb.top();
        cout<<x+y<<" ";
        pqa.pop();pqb.pop();
        if((x+pqb.top())==(y+pqa.top())){cout<<y+pqa.top()<<" ";k--;}
        if(x+pqb.top()>y+pqa.top())pqa.push(x);
        else pqb.push(y);
    }
}