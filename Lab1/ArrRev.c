#include <stdio.h>

int main(){
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    // printf("\nRoll No: 2100320120086");
    // printf("\nBranch and Section: CS-B\n");
    int n=6;
    int arr[6] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}