#include<stdio.h>
int main(){
    char abc = 'A';
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=i;j++){
            printf("%c ",abc);
            abc++;
        }
        printf("\n");
    }
    return 0;
}