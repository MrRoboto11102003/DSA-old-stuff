#include <iostream>
#include <stack>
int main()
{
    int n;
    std::cin>>n;
    int A[n];
    for(int i=0;i<n;i++)std::cin>>A[i];
    int B[n];for(int i=0;i<n;i++)B[i]=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[j]>A[i])B[j]++;
        }
    }
}