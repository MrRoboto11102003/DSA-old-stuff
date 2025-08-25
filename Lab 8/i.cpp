#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int A[k];
    for(int i=0;i<k;i++)A[i]=0;
    int w,l;
    for (int i=0;i<n;i++)
    {
        cin>>w>>l;
        A[l-1]++;
    }
    for(int i=0;i<k;i++)if(A[i]<=1)cout<<i+1<<" ";
}