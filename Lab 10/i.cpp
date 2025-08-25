#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    int n,m,s1=0,s2=0;
    cin >> n>> m;
    vector<int> A,B;
    for(int i=0;i<n;i++){cin>>A[i];s1+=A[i];}
    for(int i=0;i<m;i++){cin>>B[i];s2+=B[i];}
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    int diff=s1-s2;
    vector<int> D;
    for(int i=0;i<m;i++)D[i]=A[0]-B[i];
    int adjust=0;
    for(int i=0;i<n;i++)
    {
        adjust=A[i]-A[0];
        if(binary_search(D.begin(),D.end(),diff-adjust))cout<<"Yes";return 1;
    }
    cout<<"No";

}