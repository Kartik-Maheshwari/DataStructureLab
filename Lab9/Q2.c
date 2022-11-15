/*Write a program to store and print the roll no., name, age and marks of a student using
structures. Write a program to store the roll no. (starting from 1), name and age of 5
students and then print the details of the student with roll no. 1.*/
#include<stdio.h>

struct Student{
    int RollNo;
    char Name[20];
    int age;
    int Marks[6];
};

int main(){
    struct Student S[5];
    for(int i=0;i<5;i++){
        printf("Enter the Roll No. of student %d: ",i+1);
        scanf("%d",&S[i].RollNo);
        fflush(stdin);
        printf("Enter the Name of student %d: ",i+1);
        gets(S[i].Name);
        printf("Enter the Age of student %d:",i+1);
        scanf("%d",&S[i].age);
        printf("Enter marks of 6 subject of student %d:",i+1);
        for(int j=0;j<6;j++){
            scanf("%d",&S[i].Marks[j]);
        }
    }

        printf("\nDetails of student 1 :",);
        printf("\nRollNo.: %d",S[1].RollNo);
        printf("\nName: %s ",S[1].Name);
        printf("\nAge: %d",S[1].age);
        printf("\nMarks of 6 Subjects: ");
        for(int j=0;j<6;j++){
            printf("%d ",S[1].Marks[j]);
        }
        printf("\n");
    return 0;
}
