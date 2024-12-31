// #include <gmp.h>
// #include <stdio.h>

// int main() {
//     mpz_t term; // Declare a GMP integer
//     mpz_init(term); // Initialize it (equivalent to assigning 0)
//     mpz_set_ui(term, 1); // Set term = 1 (starting value)

//     printf("Series: ");
//     for (int i = 1; i <= 100; i++) {
//         gmp_printf("%Zd ", term); // Print the GMP integer
//         mpz_mul_ui(term, term, 2); // Multiply term by 2
//     }

//     printf("\n");
//     mpz_clear(term); // Free memory used by GMP integer
//     return 0;
// }


#include <stdio.h>

int main() {
    unsigned long long numOFterm = 1; 
    int n;
    printf("Enter the number of terms to print: ");
    scanf("%d", &n);
    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%llu ", numOFterm); // only print 64 term because overflow data store (2^64-1)
        numOFterm *= 2; 
    }
    return 0;
}

