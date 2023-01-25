#include <stdio.h>
#include<stdlib.h>

void printArray(int *A, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do{
        while (A[i] <= pivot){
            i++;
        }

        while (A[j] > pivot){
            j--;
        }

        if (i < j){
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high){
    int partitionIndex; // Index of pivot after partition

    if (low < high){
        int r = low + rand()%(high - low +1);
        swap(&A[low],&A[r]);
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main(){
    int arr[] = {9, 4, 4, 8, 7, 5, 6};
    int n = 7;
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    printArray(arr, n);
    return 0;
}
