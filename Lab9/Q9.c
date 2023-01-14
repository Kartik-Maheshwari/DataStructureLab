//Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students. 
//- Write a function to print the names of all the students having age 14.
// - Write another function to print the names of all the students having even roll no
//- Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).

#include<stdio.h>

struct Student{
    int RollNo;
    char Name[20];
    int age;
    char addr[20];
}S[2];

void givenroll(){
    int r=0,t=0;
    printf("\nEnter the roll Number: ");
    scanf("%d",&r);
    for(int i=0;i<2;i++){
        if(S[i].RollNo == r){
            printf("\nThe Detail of the student with Roll Number %d is:",r);
            printf("\nThe Name of student : %s",S[i].Name);
            printf("\nThe age of student : %d ",S[i].age);
            printf("\nThe Address of student : %s ",S[i].addr);
            t=1;
        }
    }
    if(t==0){
        printf("\nNo Student Found with Roll Number %d",r);
    }
}

void evenroll(){
    int t=0;
    for(int i=0;i<2;i++){
        if(S[i].RollNo%2==0){
            printf("\nThe Detail of the student is:");
            printf("\nThe Name of student : %s",S[i].Name);
            t=1;
        }
    }
    if(t==0){
        printf("\nNo RollNumber found with even RollNumber.");
    }
}

void disgreaterthan(){
    int t=0;
    for(int i=0;i<2;i++){
        if(S[i].age==14){
            printf("\nThe Name of student : %s",S[i].Name);
            t=1;
        }
    }
    if(t==0){
        printf("\nNo student found with age 14.");
    }

}   
int main(){
    for(int i=0;i<2;i++){
        printf("Enter the Roll No. of student %d: ",i+1);
        scanf("%d",&S[i].RollNo);
        fflush(stdin);
        printf("Enter the Name of student %d: ",i+1);
        gets(S[i].Name);
        printf("Enter the age of student %d: ",i+1);
        scanf("%d",&S[i].age);
        fflush(stdin);
        printf("Enter the Address of student %d: ",i+1);
        gets(S[i].addr);
    }
    int c;
    do{
    printf("\n1. ....Name Of student(s) with age 14. ");
    printf("\n2. ....Name Of student(s) Having even Roll Numbers. ");
    printf("\n3. ....Detail of Student via RollNumber. ");
    printf("\nEnter Your Choice: ");
    scanf("%d",&c);
        switch (c)
        {
        case 1:
            disgreaterthan();
            break;
        case 2:
            evenroll();
            break;
        case 3:
            givenroll();
            break;
        case 4:
            printf("\nSee you later.");
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }while(c!=4);
    return 0;
}