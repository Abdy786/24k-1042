#include <stdio.h>

int max(int arr[], int size);
int min(int arr[], int size, int maxValue);

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int maxNum = max(arr, size);
    printf("Maximum number in the array: %d\n", maxNum);
    printf("Minimum number in the array: %d\n", min(arr, size, maxNum));
}

int max(int arr[], int size) {
    int maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (maxValue < arr[i]) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int min(int arr[], int size, int maxValue) {
    int minValue = maxValue;
    for (int i = 0; i < size; i++) {
        if (minValue > arr[i]) {
            minValue = arr[i];
        }
    }
    return minValue;
}
