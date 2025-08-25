#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n,k,m;
    cin>>n>>m>>k;

    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    int x=k;
    int c;
    priority_queue<int> pq;
    for(int i=0;i<n-k+1;i++)
    {
        while(x>0)
        {
            pq.push(A[i+x-1]);x--;
        }
        x=k;
        c=pq.top();
        while(x>0)
        {
            if(c!=pq.top()){break;}
        }
    }

}