#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char *word;
    char rword[1000];
    int pno=0;
    char *palindromes[20];
    scanf("%[^\n]s", sentence);

    word = strtok(sentence, " ");
    while(word != NULL) {
        for(int i=strlen(word);i>0;i--)
        {
            printf("%c",word[i-1]);
            rword[strlen(word)-i]=word[i-1];
        }
        printf(" ");
        if((strcmp(word,rword)==0)&&strlen(word)!=1)
        {
            palindromes[pno]=word;
            pno++;
        }

        word = strtok(NULL, " ");
    }
    printf("\n");
    if(pno!=0)
    for(int i=0;i<=pno;i++)printf("%s",palindromes[i]);
    else
    printf("NO PALINDROMES");

    return 0;
}





