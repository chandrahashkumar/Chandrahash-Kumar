// 10. Using a while loop, calculate the power of a number (base^exponent). 

#include <stdio.h>

int main() {
    int base, power;
    
    printf("Enter Base: ");
    scanf("%d", &base);  
    printf("Enter exponent: ");
    scanf("%d", &power);

    long long int result = 1;
    int x = power;

    while (x-- > 0) {
        result *= base;
    }

    printf("%d power %d is %lld\n", base, power, result);  
    return 0;
}
