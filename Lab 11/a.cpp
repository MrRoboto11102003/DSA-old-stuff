#include <iostream>

using namespace std;
int main()
{
    int n,w;
    cin>>n>>w;
    int W[n];int V[n];
    for(int i=0;i<n;i++)cin>>W[i]>>V[i];

    int dp[n][w];
    int t=0;
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(t<i)dp[i][j]=1;
            t+=W[]
        }
    }
}