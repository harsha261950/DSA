#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int isPalindrome = 1;
    int n = 5;

    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-i-1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Array is palindrome\n");
    else
        printf("Array is not palindrome\n");

    return 0;
}
