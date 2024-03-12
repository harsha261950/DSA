#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 elements of the array:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
