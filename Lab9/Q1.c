/*Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. Find if the student is eligible
for admission in Delhi University. A student is eligible for DU if he has scored 95 % or more in Best
4.*/

#include<stdio.h>

struct Student{
    char Name[20];
    int Marks[6];
    int RollNo;
};

int main(){
    struct Student S;
    printf("Enter the Name of Student: ");
    gets(S.Name);
    printf("Enter Roll Number: ");
    scanf("%d",&S.RollNo);
    printf("Enter the Marks of 6 Subjects in ascending order:");
    for(int i=0;i<6;i++){
        scanf("%d",&S.Marks[i]);
    }
    int sum=0;
    for(int i=2;i<6;i++){
        sum+=S.Marks[i];
    }
    if(sum>95){
        printf("You are Eligible.");
    }
    else{
        printf("You are Not.");
    }
    return 0;
}