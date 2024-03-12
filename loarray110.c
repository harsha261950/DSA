#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Length of the array: %d\n", length);

    return 0;
}
