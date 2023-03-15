#include <stdio.h>
#include <stdlib.h>

int size = 0;

// function to swap the values
void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

// function to heapify the tree
void heapify(int array[], int size, int i){
    if (size == 1){
        printf("Only one element in the heap");
    }
    else{
        int largest = i;

        // Finding the left and the right child
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        // Setting the largest out of root, left child & right child
        if (l < size && array[l] > array[largest])
            largest = l;
        if (r < size && array[r] > array[largest])
            largest = r;

        // If index is not equal to largest, perform swap
        if (largest != i)
        {
            swap(&array[i], &array[largest]);
            heapify(array, size, largest);
        }
    }
}

// function to insert elements in the heap
void insert(int array[], int newNum){
    // checking if it is the first element
    if (size == 0){
        array[0] = newNum;
        size += 1;
    }
    else{
        array[size] = newNum;
        size += 1;
        for (int i = size / 2 - 1; i >= 0; i--)
            // heapifying the tree
            heapify(array, size, i);
    }
}

// function to delete from heap
void deleteRoot(int array[], int num){
    int i;
    for (i = 0; i < size; i++)
        // search if element is present in the heap
        if (num == array[i])
            break;
    // swapping the last element with the root element
    swap(&array[i], &array[size - 1]);
    size -= 1;

    for (int i = size / 2 - 1; i >= 0; i--)
        // heapifying the tree once again
        heapify(array, size, i);
}
