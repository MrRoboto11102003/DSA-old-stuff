#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int A[n];
    priority_queue<int> pq;
    for(int i=0;i<n;i++){cin>>A[i];pq.push(A[i]);}
    int x;
    for(int i=0;i<m;i++)
    {
        x=pq.top();
        pq.pop();
        pq.push((x/2));
    }
    x=0;
    for(int i=0;i<n;i++){x+=pq.top();pq.pop();}
    cout<<x;
}