#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void sieve_of_Eratosthenes(int n) {
    bool *prime = (bool *)malloc((n + 1) * sizeof(bool));

    // Initialize all elements of prime[] to true
    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    }
    // 0 and 1 are not prime numbers
    prime[0] = false;
    prime[1] = false;

    // Mark all multiples of prime numbers as false
    // starting from 2, 2 is the first prime number, so all multiples of 2 are not prime numbers
    
    for (int i = 2; i*i <= n; i++) {
        if (prime[i] = true) {
            for (int j = i* i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    printf("Prime number upto %d are: \n", n);
    for (int i = 0; i <= n; i++) {
        if (prime[i] == true) {
            printf("%d ,", i);
        }
    }
    free(prime);
}

int main() {
    // get the number upto which prime number are to be found from user
    int n;
    printf("Enter the number upto which prime number are to be found: ");
    scanf("%d", &n);
    sieve_of_Eratosthenes(n);
    return 0;
}
