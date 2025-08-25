#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)cin>>A[i];
    int spread=1;
    cout<<spread<<" ";
    for(int i=1;i<n;i++)
    {
        if(A[i]<A[i-1])spread=1;
        else
        {
            while((i-spread)>=0){
            if(A[i]<A[i-spread])break;
            spread++;}
        }
        cout<<spread<<" ";
    }
}