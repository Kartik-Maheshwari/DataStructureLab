#include<stdio.h>
void input(int s,int r,int arr[2][2]){
    for(int i=0;i<s;i++){
        for(int j=0;j<r;j++){
            printf("Enter arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
int show(int arr[],int s,int r){
    for(int k=0;k<s;k++){
        printf("%d ",arr[k]);
    }
}
