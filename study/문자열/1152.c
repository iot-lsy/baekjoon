#include <stdio.h>

int main(){

    char str[1000000];
    int word_cnt = 0;

    scanf("%[^\n]s", str);

    for(int i=0; str[i]!='\0'; i++){
        if((str[i]!=32&&str[i+1]==32)||(str[i]!=32&&str[i+1]=='\0')){
            word_cnt++;
        }
    }

    printf("%d", word_cnt);

    return 0;
}