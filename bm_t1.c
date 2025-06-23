#include<stdio.h>
#include<string.h>

void xorCrypt(char *str, char key){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        str[i]^=key;
    }
}

int main(){
    char sentence[100];
    char key;
    fgets(sentence,sizeof(sentence),stdin);
    sentence[strcspn(sentence,"\n")]='\0';
    scanf(" %c",&key);
    xorCrypt(sentence,key);
    printf("%s\n",sentence);
    xorCrypt(sentence,key);
    printf("%s\n",sentence);
    return 0;
}