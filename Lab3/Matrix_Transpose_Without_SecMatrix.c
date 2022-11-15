#include<stdio.h>
void main()
{
    int i,j,k,m,n,temp;
    int d[10][10],tra[10][10];
    printf("\nEnter the number of Rows of First Array:");
    scanf("%d",&m);
    printf("\nEnter the number of columns of First Array:");
    scanf("%d",&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the element of First matrix at arr1[%d][%d]:",i,j);
            scanf("%d", &d[i][j]);
        }
    }
    printf("The given Matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Transpose of the Matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",d[j][i]);
        }
        printf("\n");
    }

}