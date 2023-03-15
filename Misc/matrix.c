#include<stdio.h>

int main(){
    int k[3][3]={{1,3,2},{2,5,4},{4,8,6}};
    int i=0,j=0;
    while(i<3){
        printf("%d\n",k[i][j]);
        j++;
        if(j==3){
            i++;
            j=0;
        }
    }
    return 0;
}