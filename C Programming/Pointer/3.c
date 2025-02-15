#include<stdio.h>
int main(){
    char ch = 'a';
    char *_ch = &ch;
    for(int i = 97;i<=122;i++){
        printf("%c\n",*_ch);
        (*_ch)++;
    }
    return 0;
}