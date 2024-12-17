#include<stdio.h>
int main(){
    int r,c;
    printf("Enter value of row and col: ");
    scanf("%d,%d",&c,&r);
    int arr[r][c];
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            scanf("%d",arr[i][j]);
        }
    }
    return 0;

}