#include <iostream>
#include <stack>
#include <string>
int main()
{
    std::string s;
    std::cin>>s;
    int n=s.length();
    int op=0;
    int cp=0;
    int maxd=0;
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')op++;else cp++;
        if((cp-op)>0){maxd++;op++;}
    }
    if((op-cp)>0)maxd+=op-cp;
    std::cout<<maxd;
}