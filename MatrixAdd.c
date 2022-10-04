#include<stdio.h>

int main(){
    int m,n,arrA[10][10],arrB[10][10],add[10][10];
    printf("Enter the number of Rows of Matrix A and B:");
    scanf("%d",&m);
    printf("\nEnter the number of Columns of Matrix A and B:");
    scanf("%d",&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("\nEnter arrA[%d][%d]",i,j);
            scanf("%d",&arrA[m][n]);
        }
    }
    printf("\nEnter the elements of Matrix B:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("\nEnter arrB[%d][%d]",i,j);
            scanf("%d",&arrB[m][n]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            add[i][j]=arrA[i][j] + arrB[i][j];
        }
    }
    printf("\nThe Addition of the matrix is:");
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}