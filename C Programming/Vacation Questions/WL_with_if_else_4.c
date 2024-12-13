/* 14. Use a while loop and if-else to print "Pass" if a student's score is 40 
or more and "Fail" otherwise. Repeat until a negative score is entered. 
*/

#include<stdio.h>
int main(){
    int score;
    printf("Enter student score(negative score stop): ");
    scanf("%d",&score);
    while(score>=0){
        
        if(score>= 40){
            printf("Pass\n");
        }else{
            printf("Fail\n");
        }
        printf("Enter student score(negative score stop): ");
        scanf("%d",&score);
    }

    return 0;
}