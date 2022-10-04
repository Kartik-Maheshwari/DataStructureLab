#include<stdio.h>

int main(){
    int arr[][3]={{2,3,4},{7,8,9}};
    int *q[2]; // is an 2D-array of pointer where it will store the address of 2 and 7 and so on. 
    int **p;//it is another method to declare a pointer of 2D array
    q=arr;
    printf("%d",q);
    return 0;
}