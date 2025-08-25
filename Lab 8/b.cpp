#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;

    for(int i=0;i<n/2;i++)
    {
        s[n-i-1]=s[i];
    }
    int x=n/2;
    if (s[x]!='9')s[n/2]++;
    while(s[x]=='9')
    {
        s[x]='0';
        x--;
        s[x]++;s[n-x-1]++;
    }
    cout<<s;


}