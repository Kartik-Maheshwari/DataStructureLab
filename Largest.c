#include<stdio.h>

int findBig(a,b,c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }
}
int main(){
    int p,q,r;
    //printf("Enter any three Numbers:");
    //scanf("%d %d %d", &p,&q,&r);
    printf("Big = %d",findBig(6,3,4));
    printf("\nBig = %d",findBig(5,6,4));
    printf("\nBig = %d",findBig(5,4,6));
    printf("\nBig = %d",findBig(5,5,5));
    printf("\nBig = %d",findBig(4,6,5));

}