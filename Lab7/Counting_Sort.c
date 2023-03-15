// Counting sort
#include <stdio.h>

void countingSort(int arr[], int n){
    int b[10];
    int max = arr[0];
    for (int i=1; i<n; i++){
        if (arr[i] > max)
            max = arr[i];
    }

    int count[10];
    for (int i=0; i<=max; ++i){
        count[i] = 0;
    }
    for (int i=0; i<n; i++){
        count[arr[i]]++;
    }
    for (int i=1; i<=max; i++){
        count[i]+=count[i-1];
    }
    for (int i = n - 1; i >= 0; i--){
        b[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++){
        arr[i] = b[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i){
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main(){
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int arr[] = {4, 2, 2, 8, 9, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: \n");
    printArray(arr, n);
    countingSort(arr, n);
    printf("\nAfter sorting: \n");
    printArray(arr, n);
}