#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;
    int search_element = 9;
    int found = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == search_element) {
            printf("Element %d found at index %d\n", search_element, i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Element %d not found in array\n", search_element);

    return 0;
}
