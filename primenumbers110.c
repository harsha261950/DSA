#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    // Handling special cases
    if (num <= 1) {
        return false;
    }

    // Check for divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if it's prime
    if (isPrime(num)) {
        printf

