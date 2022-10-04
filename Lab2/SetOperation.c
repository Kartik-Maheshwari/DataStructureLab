#include<stdio.h>
#include"UnionOpt.h"
#include"IntersectionOpt.h"
#include"A_b.h"
#include"B_A.h"
#include"SymmOpt.h"
int main(){
    int arrA[100],arrB[100],n,m,p;
    char ans='y';
    printf("Enter the number of elements in set A in ascending order:");
    scanf("%d",&n);
    printf("\nEnter the elements in set A:");
    for(int i=0;i<n;i++){
        scanf("%d",&arrA[i]);
    }
    printf("\nEnter the number of elements in set B in ascending order:");
    scanf("%d",&m);
    printf("\nEnter the elements in set B:");
    for(int i=0;i<m;i++){
        scanf("%d",&arrB[i]);
    }
    while(ans=='y'){
        printf("\n1. Union of A and B");
        printf("\n2. Intersection of A and B");
        printf("\n3. A - B");
        printf("\n4. B - A");
        printf("\n5. Symmetric Difference of A and B");
        printf("\n");
        printf("\nEnter Your Choice:");
        scanf("%d",&p);
        switch (p)
        {
        case 1:
            Union(arrA,arrB,n,m);
            break;
        case 2:
            Intersection(arrA,arrB,n,m);
            break;
        case 3:
            A_B(arrA,arrB,n,m);
            break;
        case 4:
            B_A(arrA,arrB,n,m);
            break;
        case 5:
            Symm(arrA,arrB,n,m);
            break;
        default:
            printf("\nIncorrect Choice.");
            break;
        }
        fflush(stdin);
        printf("\nDo You Want to Continue?(y/n):");
        scanf("%c",&ans);
    }
    return 0;
}