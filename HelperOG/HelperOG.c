#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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



char getInputChar() {
    char c1 = getchar();
    return c1;
}

int getInputInt() {
    int i1 = 0;
    printf("Enter a int: ");
    scanf("%d", &i1);
    return i1;
}

char getInputString() { // using 100 as max
    char gottenString[100] = "";

    printf("Enter your String: ");
    fflush(stdin);
    fgets(gottenString, 100, stdin);
    gottenString[strlen(gottenString) - 1] = '\0';
    return gottenString; // puts() to print out the string
}


char returnCharFromStr(char str[50], int index) {
    // 0 will be the first char in the string
    // eg s1 = "Hellow World!"; index = 0; return 'H';
    return str[index];
}



int main(void) {
    int numberArray[] = {5,7,4,6,1,8,5,7,2,9,11,12,57,234,875,0,64};
    int size = sizeof(numberArray)/sizeof(numberArray[0]);

    printf("Un-sorted: ");
    printArray(numberArray, size);

    bubble_sort(numberArray, size);

    printf("Sorted: ");
    printArray(numberArray, size);

    printf("Input a char: ");
    char inputChar = getInputChar();
    printf("The char you input: %c\n", inputChar);

    char s1[50] = "Hello World!";
    int inputIndex = getInputInt();
    char returnedChar = returnCharFromStr(s1, inputIndex);
    printf("%c\n", returnedChar);    

    char inputString[100] = {getInputString()};
    puts(inputString);
    return 0;
}
