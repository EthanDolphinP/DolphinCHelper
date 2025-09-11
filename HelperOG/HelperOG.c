#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {  // ✅ fixed increment
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; // ✅ stop early if no swaps
    }
}

int main(void) {
    int numberArray[] = {5,7,4,6,1,8,5,7,2,9,11,12,57,234,875,0,64};
    int size = sizeof(numberArray)/sizeof(numberArray[0]);

    printf("Un-sorted: ");
    printArray(numberArray, size);

    bubble_sort(numberArray, size);

    printf("Sorted: ");
    printArray(numberArray, size);

    return 0;
}
