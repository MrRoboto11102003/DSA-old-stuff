#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    int al[26];
    int bl[26];
    for(int i=0;i<26;i++){al[i]=0;bl[i]=0;}
    scanf("%s %s",a,b);
    int check =0;
    for(int i=0;i<strlen(a);i++)
    {
        al[a[i]-97]++;
        bl[b[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {
        if(al[i]!=bl[i])check=1;
    }
    if(check==0)
    {
        int used[strlen(a)];
        for(int i=0;i<strlen(a);i++){used[i]=1;}
        printf("Possible \n");
        for(int i=0;i<strlen(a);i++)
        {
            for(int j=0;j<strlen(a);j++)
            {
                if(a[i]==b[j]&&used[j]!=0)
                {printf("%d",j+1);used[j]=0;}
            }
        }
    }
    else printf("Not possible \n");
    return 0;
}