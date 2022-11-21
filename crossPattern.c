#include<stdio.h>

int main(){
    int n;
    printf("Enter the nummber: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        printf("%d ",i);
        for(int k=((n*2 - 1) - 2*i);k>0;k--){
            printf("  ");
        }
        if(i!=n){
            printf("%d ",i);
        }
        printf("\n");
    }

    for(int i=n-1;i>0;i--){
        for(int j=1;j<i;j++){
            printf("  ");
        }
        if(i!=n){
            printf("%d ",i);
        }
        for(int k=((n*2 - 1) - 2*i);k>0;k--){
            printf("  ");
        }
        printf("%d ",i);
        printf("\n");
    }
    
    return 0;
}