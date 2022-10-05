#include<stdio.h>
#define SIZE 100
#include<stdint.h>
int main()
{	
	int i,j, calAdd,rows,cols;
	int w = sizeof(int);
	printf("Enter total rows: ");
	scanf("%d",&rows);
	printf("Enter total cols: ");
	scanf("%d",&cols);
	int mat[rows][cols];
	int baAdd = (intptr_t)mat;
	printf("Row Major Order\n");
	printf("\nEnter row and column to find the address: ");
	scanf("%d %d",&i,&j);
	
	calAdd = baAdd + ((i-0)*(cols)+(j-0))*w;
	printf("\nBase address   = %u",baAdd);
	printf("\nSystem BA      = %u",mat);
	printf("\nYour address   = %u",calAdd);
	printf("\nSystem address = %u",&mat[i][j]);
	if(calAdd == (intptr_t)&mat[i][j]){
		printf("\nAddess is correct");
	}else{
		printf("\nAddress isn't correct");
	}

}