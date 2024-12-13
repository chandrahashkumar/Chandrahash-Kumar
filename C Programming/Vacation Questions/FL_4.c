// 4. Use a for loop to print the Fibonacci series up to 10 terms.

#include <stdio.h>

int main() {
    int num = 50;
    int t1 = 0,t2 = 1,nextTurm;
    for(int i = 1;i<=num;++i){
        printf("%d, ",t1);
        nextTurm = t1+t2;
        t1 = t2;
        t2 = nextTurm;
    }
    return 0;
}
