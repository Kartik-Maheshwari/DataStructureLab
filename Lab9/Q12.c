//Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase 
//the salary depending on the number of hours of work per day as follows and then print the name of all the employees along with their 
//final salaries. Hours of work per day 8 Increase in salary $50

#include<stdio.h>

struct Emp{
    char Name[20];
    int salary;
    int hwpd;
}S[2];

void enter(){
    for(int i=0;i<2;i++){
        printf("\nEnter the Name of the employee %d: ",i+1);
        gets(S[i].Name);
        fflush(stdin);
        printf("Enter the Salary of the employee %d: ",i+1);
        scanf("%d",&S[i].salary);
        printf("Enter the number of hours of work per day of employee %d: ",i+1);
        scanf("%d",&S[i].hwpd);
        fflush(stdin);
    }
}

void show(){
    for(int i=0;i<2;i++){
        printf("\n\nThe Name of the employee %d is : %s",i+1,S[i].Name);
        printf("\nThe Salary of the employee %d is : %d",i+1,S[i].salary);
        printf("\nThe number of hours of work per day of employee %d is : %d",i+1,S[i].hwpd);
    }
}

void incSal(){
    for(int i=0;i<2;i++){
        if(S[i].hwpd>=12){
            S[i].salary+=150;
        }
        if(S[i].hwpd>=10){
            S[i].salary+=100;
        }
        if(S[i].salary>=8){
            S[i].salary+=50;
        }
    }
    printf("\nThe updated value of the Employee Data is:\n");
    show();
}

int main(){
    int c;
    do{
        printf("\n1. ....Enter Employee data. ");
        printf("\n2. ....Display the Employee data. ");
        printf("\n3. ....Increase the Salary ");
        printf("\n4. ....Exit ");
        printf("\nEnter Your Choice: ");
        scanf("%d",&c);
        fflush(stdin);
        switch (c)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            incSal();
            break;
        case 4:
            printf("\nSee You Later");
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }while(c!=4);
}