#include <stdio.h>
#include <string.h>

void swap(char*);
int cmp(char*, char*);
int usr_atoi(char*);

int main(){

    char str[7];
    char num_str1[4];
    char num_str2[4];
    char temp;
    int idx1 = 0, idx2 = 0;

    scanf("%[^\n]s", str);

    for(int i=0; str[i]!='\0'; i++){
        if(i<3){
            num_str1[idx1] = str[i];
            idx1++;
            if(idx1==2){
                num_str1[idx1+1] = '\0';
            }

        }else if(i>3){
            num_str2[idx2] = str[i];
            idx2++;
            if(idx2==2){
                num_str2[idx2+1] = '\0';
            }
        }
    }

    swap(num_str1);
    swap(num_str2);
    printf("%d", cmp(num_str1, num_str2));


    return 0;
}

void swap(char* str){

    char temp;

    for(int i=0;i<2;i++){
        for(int j=0;j<2-i;j++){
            temp = str[j];
            str[j] = str[j+1];
            str[j+1] = temp;
        }
    }

}

int cmp(char* str1, char* str2){

    int max, num1, num2;

    num1 = usr_atoi(str1);
    num2 = usr_atoi(str2);

    if(num1>num2){
        max = num1;
    }else{
        max = num2;
    }

    return max;

}

int usr_atoi(char* str){

    int len = strlen(str);
    int deci = 100;
    int num = 0, res = 0;

    for(int i=0;i<len;i++){
        num = str[i] - '0';
        res += num * deci;
        deci /= 10;
    }

    return res;

}