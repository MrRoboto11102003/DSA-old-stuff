#include <iostream>
#include <map>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];int B[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i]>>B[i];
    }
    map<int,float> mp;
    for(int i=0;i<n;i++)
    {
        mp[i]=A[i]/B[i];
    }
}