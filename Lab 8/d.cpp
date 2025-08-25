#include <iostream>
#include <queue>
using namespace std;


int main()
{
    int n,q;
    cin>>n>>q;
    int A[q];
    int index=0;
    int x,y;
    priority_queue<int,vector<int>,greater<>> pq1;
    priority_queue<int> pq2;

    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        if(x==1){pq1.push(y);pq2.push(y);}
        if(x==2)
        {
            
        }
    }
}