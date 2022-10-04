#include<stdio.h>

int checkoddev(n){
    switch (n%2)
    {
    case 1:
        printf("Odd");
        break;
    
    default:
        printf("Even");
        break;
    }
}
int main(){
    int n;
    checkoddev(n);
    return 0;
}