// WAP to check wether a student pass in both theory and practical or not?

#include<stdio.h>
int main(){
    int TheoryMarks,PracticalMarks;
    printf("Enter the theory marks : ");
    scanf("%d",&TheoryMarks);
    printf("Enter the practical marks : ");
    scanf("%d",&PracticalMarks);

    if(TheoryMarks >= 40){
        if(PracticalMarks >= 20){
            printf("Congratulations you are pass in theory and practical.");
        }
        else {
            printf("You are pass in theory but fail in practical.");
        }
    }
    else {
        printf("You are fail.");
    }
    return 0;
}
