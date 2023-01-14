//Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
// 1 - Write a function to print the names of all the customers having balance less than $200.
//Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.

#include<stdio.h>

struct Student{
    int AccNo;
    char Name[20];
    int Balance;
}S[3];

void addbalance(){
    int t=0;
    for(int i=0;i<3;i++){
        if(S[i].Balance>1000){
            S[i].Balance+=100;
            printf("\nThe Updated balance of customer %s is : %d",S[i].Name,S[i].Balance);
            t=1;
        }
    }
    if(t==0){
        printf("\nNo Customer Found with Balance greater than $1000.");
    }
}

void priname(){
    int t=0;
    for(int i=0;i<3;i++){
        if(S[i].Balance<200){
            printf("\nThe Name of customer is : %s",S[i].Name);
            t=1;
        }
    }
    if(t==0){
        printf("\nNo customer found with Balance less than $200.");
    }

}   
int main(){
    for(int i=0;i<3;i++){
        printf("Enter the ACCOUNT NUMBER of customer %d: ",i+1);
        scanf("%d",&S[i].AccNo);
        fflush(stdin);
        printf("Enter the Name of customer %d: ",i+1);
        gets(S[i].Name);
        printf("Enter the Balance of Customer %d: ",i+1);
        scanf("%d",&S[i].Balance);
    }
    int c;
    do{
        printf("\n1. ....Name Of customers having Balance less than $200 ");
        printf("\n2. ....Add $100, having Balance greater than $1000. ");
        printf("\n3. ....Exit ");
        printf("\nEnter Your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            priname();
            break;
        case 2:
            addbalance();
            break;
        case 3:
            printf("\nSee You Later");
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }while(c!=3);
    return 0;
}