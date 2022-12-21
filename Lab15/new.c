#include "myheader.h"
#include<stdio.h>

int main(){
    int a,b,c;
    a=10;
    b=5;
    c=add(a,b);
    printf("%d\n",c);
    printf("%d\n",sub(a,b));
    printf("%d\n",mul(a,b));
    printf("%d\n",div(a,b));

    return 0;
}