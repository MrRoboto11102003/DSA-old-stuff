
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n,m;
    cin >> n>> m;
    int A[n],B[m],C[10000];
    for(int i=0;i<n;i++)cin>>A[i];
    for(int i=0;i<m;i++)cin>>B[i];

    for(int i=0;i<10000;i++)C[i]=0;
    for(int i=0;i<n;i++)C[A[i]]++;

    for(int i=0;i<m;i++)
    {
        while(C[B[i]]>0)
        {
            cout<<B[i]<<" ";
            C[B[i]]--;
        }
    }
    vector<int> v;
    for(int i=0;i<10000;i++)
    {
        while(C[i]>0)
        {
            v.push_back(i);
            C[i]--;
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

}