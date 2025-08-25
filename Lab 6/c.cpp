#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    int recsize=n;
    int li=0,h,w;
    stack<int> stk;
    for(int i=0;i<=n;i++)
    {
        while(stk.empty()!=true&&A[i]<A[stk.top()])
        {       
            li=stk.top();
            w=i-li;
            h=A[li];
            stk.pop();
            cout<<w<<'*'<<h<<"  ";
        }
        stk.push(i);
    }
}