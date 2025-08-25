#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin>>n;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i]>>B[i];
    }
    int max=0;
    for(int t=0;t<2400;t++)
    {
        for(int i=0;i<n;i++)
        {
            if(A[i]==t)q.push(i);
            if(B[i]==t)q.pop();
        }
        if(max<q.size())max=q.size();
    }
    cout<<max;
}