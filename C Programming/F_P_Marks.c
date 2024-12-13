#include<stdio.h>

int main(){
    int obtained_marks,total_marks;

    printf("Enter obtained marks : ");
    scanf("%d",&obtained_marks);
    printf("Enter total marks : ");
    scanf("%d",&total_marks);

    float per = ((float)obtained_marks/ (float)total_marks)*100;
    //printf("%f",per);

    printf("%d",(per>80));
    
    return 0;
}