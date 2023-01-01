//Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.

#include<stdio.h>

struct Student{
    int RollNo;
    char Name[20];
    int chem_marks, maths_marks, phy_marks;
};

int main(){
    struct Student S[2];
    for(int i=0;i<2;i++){
        printf("Enter the Roll No. of student %d: ",i+1);
        scanf("%d",&S[i].RollNo);
        fflush(stdin);
        printf("Enter the Name of student %d: ",i+1);
        gets(S[i].Name);
        printf("Enter the marks of Chem: ");
        scanf("%d",&S[i].chem_marks);
        printf("Enter the marks of Maths: ");
        scanf("%d",&S[i].maths_marks);
        printf("Enter the marks of Physics: ");
        scanf("%d",&S[i].phy_marks);

    }
    printf("\nDetails of percentage of each student is :");
    for(int i=0;i<2;i++){
        float per = (S[i].chem_marks+ S[i].maths_marks + S[i].phy_marks)/3.0;
        printf("\nThe Percentage of Student %d: %f",i+1, per);
    }
    return 0;
}