#include<stdio.h>

void findRes(int q){
    if(q<0){
        printf("Freezing C=Whether.");   
    }
    else if(q<10){
        printf("Very Cold Weather.");
    }
    else if(q<20){
        printf("Cold Weather.");
    }
    else if(q<30){
        printf("Normal in Temp.");
    }
    else if(q<40){
        printf("Its Hot.");
    }
    else{
        printf("Very Hot.");
    }
}

int main(){
    int n;
    findRes(36);
}