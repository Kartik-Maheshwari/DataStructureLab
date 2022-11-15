#include<stdio.h>

int gcdrec(int a,int b){
    if(b==0){
        return a;
    }
    return gcdrec(b,a%b);
}

int main(){
    int n,m;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);
    printf("The GCD of two numbers is: %d",gcdrec(n,m));
    return 0;
}