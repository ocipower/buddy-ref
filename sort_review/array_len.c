#include "sort.h"

int array_length(int arr[]) {
    // Get the size of the array by dividing the total size of the array by the size of each element
    int length = sizeof(&arr) / sizeof(arr[0]);
    return length;
}

int main() {
    // Define an array
    int my_array[] = {1, 2, 3, 4, 5};

    // Call the array_length function to get the length of the array
    int length = array_length(my_array);

    // Print the length of the array
    printf("The length of the array is: %d\n", length);

    return 0;
}
