// Radix Sort
#include <stdio.h>

int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i=1; i<n; i++)
        if (arr[i]>max)
            max = arr[i];
    return max;
}

void countingSort(int arr[], int size, int place) {
    int b[size+1];
    int max = (arr[0] / place) % 10;

    for (int i=1; i<size; i++){
        if (((arr[i] / place) % 10) > max)
            max=arr[i];
    }
    int count[max+1];

    for (int i=0; i<max; ++i)
        count[i] = 0;

    for (int i=0; i<size; i++)
        count[(arr[i] / place) % 10]++;

    for (int i=1; i<10; i++)
        count[i]+=count[i-1];

    for (int i=size-1; i>=0; i--){
        b[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    for (int i=0; i<size; i++)
        arr[i] = b[i];
}

// Main function to implement radix sort
void radixsort(int arr[], int size) {
    int max = getMax(arr, size);
    for (int place=1; max/place>0; place*=10)
        countingSort(arr, size, place);
}

void printArray(int arr[], int size) {
    for (int i=0; i<size; ++i)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int arr[] = {121, 432, 564, 23, 1, 45, 788};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: \n");
    printArray(arr, n);
    radixsort(arr, n);
    printf("\nAfter sorting: \n");
    printArray(arr, n);
}