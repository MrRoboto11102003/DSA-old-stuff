#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int A[n]; priority_queue<int> pq;
    for(int i=0;i<n;i++) {cin>>A[i];pq.push(A[i]);}
    for(int i=0;i<n;i++){A[i]=pq.top();pq.pop();} 
    int x=0;
    for(int i=0;i<n;i++)
    {
        while(A[x]-A[i]<k)x++;
        //remove(x,i);
    }
}