#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void printArray(char message[], int arr[], int n)
{
    printf("%s ", message);
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void heapify(int arr[], int n, int i)
{
    int largest = i;            // Initialize largest as root
    int leftChild = 2 * i + 1;  // left child = 2*i + 1
    int rightChild = 2 * i + 2; // right child = 2*i + 2
    if (leftChild < n && arr[leftChild] > arr[largest])
        largest = leftChild;
    if (rightChild < n && arr[rightChild] > arr[largest])
        largest = rightChild;
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void buildHeap(int arr[], int n)
{
    int lastNonLeafNode = (n / 2) - 1;
    for (int i = lastNonLeafNode; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
}
int main()
{
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int arr[] = {4, 18, 17, 10, 19, 20, 14, 8, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray("Array is : ", arr, n);
    buildHeap(arr, n);
    printArray("Array representation of Heap is : ", arr, n);
    return 0;
}
