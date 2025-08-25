#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    int k;
    cin>>k;
    priority_queue<int> pq;
    priority_queue<int> indexes;
    stack<int> sA[k];
    int x;
    int n=0;
    for(int i=0;i<k;i++)
    {
        int m;
        cin>>m;
        n+=m;
        for(int j=0;j<m;j++)
        {
            cin>>x;
            sA[i].push(x);
        }
    }
    for(int i=0;i<k;i++)
    {
        pq.push(sA[i].top());
        sA[i].pop();
    }
    for(int i=k;i<n;i++)
    {

    }

}