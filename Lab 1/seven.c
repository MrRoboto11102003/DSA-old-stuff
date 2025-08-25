#include <stdio.h>
#include <string.h>
int main() {
    char sentence[1000];
    int flag=0;
    int walpha[26];
    int salpha[26];
    for(int x=0;x<26;x++){walpha[x]=0;salpha[x]=0;}
    char w[1000];
    char sub[1000];
    scanf("%[^\n]s", sentence);
    scanf("%s",w);
    int str=0,end=strlen(sentence)+1;
    for(int g=0;g<strlen(w);g++)walpha[w[g]-97]++;

    for(int i=0;i<strlen(sentence)-strlen(w);i++)
    {
        for(int j=i+strlen(w)-1;j<strlen(sentence);j++)
        {
            strncpy(sub, sentence+i, j-i+1);
            sub[j-i+1] = '\0';
            for(int g=0;g<strlen(sub);g++)if(sub[g]!=' ')salpha[sub[g]-97]++;
            for(int g=0;g<26;g++){if(walpha[g]>salpha[g]){flag=1;break;}}
            if(j-i<end-str&&flag==0){end=j;str=i;}
            for(int x=0;x<26;x++){salpha[x]=0;}
            flag=0;
        }
    }
    if(end<=strlen(sentence)){
    printf("%d %d\n",str,end);
    for(int i=str;i<=end;i++)printf("%c",sentence[i]);}
    else
    printf("NO WINDOW");
}