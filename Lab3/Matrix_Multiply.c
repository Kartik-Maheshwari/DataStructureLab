#include<stdio.h>
void main()
{
    int p,q,i,j,k,m,n,s=0;
    int d[10][10],d2[10][10],multiply[10][10];
    printf("\nEnter the number of Rows of First Array:");
    scanf("%d",&m);
    printf("\nEnter the number of columns of First Array:");
    scanf("%d",&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the element of First matrix at arr[%d][%d]:",i,j);
            scanf("%d", &d[i][j]);
        }
    }
    printf("\nEnter the number of Rows of First Array:");
    scanf("%d",&p);
    printf("\nEnter the number of columns of First Array:");
    scanf("%d",&q);
    if(n!=p){
        printf("\nMultiplication is not possible");
    }
    else{
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("Enter the element of Second matrix at arr[%d][%d]:",i,j);
                scanf("%d", &d2[i][j]);
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                for(k=0;k<p;k++){
                    s=s+d[i][k]*d2[k][j];
                }
                multiply[i][j]=s;
                s=0;
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%d\t", multiply[i][j]);
            }
            printf("\n");
        }
    }
}