#include <stdio.h>
// Function to swap the position of two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }
}
void heapSort(int arr[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
    for (int i = N - 1; i >= 0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
    void printArray(int arr[], int N){
        for (int i = 0; i < N; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}
int main()
    {
        printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
        int arr[] = {33, 11, 53, 5, 16, 7};
        int N = sizeof(arr) / sizeof(arr[0]);
        heapSort(arr, N);
        printf("Sorted array is\n");
        for(int k=0;k<6;k++){
            printf("%d ",arr[k]);
    }
    }

