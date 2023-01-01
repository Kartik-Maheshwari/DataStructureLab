//Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students. 
//- Write a function to print the names of all the students having age 14.
//To enable screen reader support, press Ctrl+Alt+Z To learn about keyboard shortcuts, press Ctrl+slash
// - Write another function to print the names of all the students having even roll no
//- Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).

#include<stdio.h>

struct Student{
    int RollNo;
    char Name[20];
    int age;
    char addr[20];
};

int age(int n){
    if(n==14){
        return 1;
    }
    return 0;
}

int name(int r){
    if(r%2==0){
        return 1;
    }
    return 0;
}

void dis(int r){
    printf("\nThe Detail of the student is:");
    for(int i=0;i<2;i++){
        printf("Enter the Roll No. of student %d: ",i+1);
        scanf("%d",&S[i].RollNo);
        fflush(stdin);
        printf("Enter the Name of student %d: ",i+1);
        gets(S[i].Name);
        printf("Enter the age of student %d: ",i+1);
        scanf("%d",&S[i].age);
        printf("Enter the Address of student %d: ",i+1);
        gets(S[i].addr);
    }

}   
int main(){
    struct Student S[2];
    for(int i=0;i<2;i++){
        printf("Enter the Roll No. of student %d: ",i+1);
        scanf("%d",&S[i].RollNo);
        fflush(stdin);
        printf("Enter the Name of student %d: ",i+1);
        gets(S[i].Name);
        printf("Enter the age of student %d: ",i+1);
        scanf("%d",&S[i].age);
        printf("Enter the Address of student %d: ",i+1);
        gets(S[i].addr);
    }

    return 0;
}