#include <stdio.h>

// Function to check if the number is 2 or a power of 2 with n being a multiple of 2
int isPowerOfTwoMultipleOfTwo(int num) {
    if (num <= 0) {
        return 0; // Numbers less than or equal to 0 cannot satisfy the condition
    }
    // Check if num is a power of 2 and n (log2(num)) is a multiple of 2
    int power = 0;
    while (num > 1) {
        if (num % 2 != 0) {
            return 0; // Not a power of 2
        }
        num /= 2;
        power++;
    }
    return (power % 2 == 0); // Return true if power is a multiple of 2
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 2) {
        printf("The number is 2.\n");
    } else if (isPowerOfTwoMultipleOfTwo(number)) {
        printf("The number is a power of 2 where n (log2) is a multiple of 2.\n");
    } else {
        printf("The number does not meet the conditions.\n");
    }

    return 0;
}
