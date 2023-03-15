#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1, j = high;

    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }while(i<j);
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi);//sort left subarray
        quickSort(arr, pi + 1, high);//sort right subarray
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int arr[] = { 11, 8, 7, 1, 2, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: \n");
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printf("\nSorted array: \n");
    printArray(arr, n);

    return 0;
}