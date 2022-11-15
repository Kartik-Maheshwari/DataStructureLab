#include<stdio.h>
#include"matrix.h"

int main(){
    int m=0,n=0,ar1[m][n],ar2[m][n],sum[10][10];
    printf("Enter the number of Rows of Matrix A and B:");
    scanf("%d",&m);
    printf("\nEnter the number of Columns of Matrix A and B:");
    scanf("%d",&n);
    printf("\nEnter the elements of Matrix A:\n");
    input(m,n,ar1);
    printf("\nEnter the elements of Matrix B:\n");
    input(m,n,ar2);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",ar1[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",ar2[i][j]);
        }
        printf("\n");        
    }

    printf("\nThe Addition of the matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j] = ar1[i][j] + ar2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}