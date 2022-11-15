#include<stdio.h>
void main()
{
    int p,q,i,j,k,m,n,s=0;
    int d[10][10],d2[10][10],sub[10][10];
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
    printf("\nEnter the number of Rows of First Array:");
    scanf("%d",&p);
    printf("\nEnter the number of columns of First Array:");
    scanf("%d",&q);
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("Enter the element of Second matrix at arr2[%d][%d]:",i,j);
            scanf("%d", &d2[i][j]);
        }
    }
    if(n!=q || m!=p){
        printf("\nSubttraction is not possible");
    }
    else{
        printf("The Subtraction of above two matrix is:\n ");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sub[i][j] = d[i][j] - d2[i][j];
                printf("%d ",sub[i][j]);
            }
            printf("\n");
    }
    }
}