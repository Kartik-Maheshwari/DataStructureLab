#include<stdio.h>
#include<stdint.h>
#define SIZE 100

int main(){
int size,m;
int array[SIZE];
unsigned int i, address, calAdd;
int *ba ;
printf("Enter the size of int array: ");
scanf("%d",&size);
m = sizeof(int);
printf("Enter the index to find address: ");
scanf("%d",&i);

ba = array;
address = (intptr_t) array;
printf("The base address of array:%u ",ba);

calAdd = address + i*m;
printf("\nAddress of %d : %u",i,calAdd);
printf("\nAddress of %d : %u",i,&array[i]);

if (calAdd == (intptr_t) &array[i]){
	printf("\nAddress is correct");
}else{
	printf("\nAddress isn't correct");
}

}