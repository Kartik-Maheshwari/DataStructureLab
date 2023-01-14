// Write a program to compare two dates entered by user. Make a structure named Date to store the elements day,
// month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
}S[2];

void enter(){
    for(int i=0;i<2;i++){
        printf("\nEnter the Day of Date %d: ",i+1);
        scanf("%d",&S[i].day);
        printf("Enter the Month of Date %d: ",i+1);
        scanf("%d",&S[i].month);
        printf("Enter the year of Date %d: ",i+1);
        scanf("%d",&S[i].year);
    }
}

void checkDate(){
    if(S[0].day == S[1].day && S[0].month == S[1].month && S[0].year == S[1].year){
        printf("\nDates Are Equal.\n");
    }
    else{
        printf("\nDates are Not Equal.\n");
    }
}

int main(){
    int c;
    do{
        printf("\n1. ....Enter New Dates. ");
        printf("\n2. ....Check two Dates. ");
        printf("\n3. ....Exit ");
        printf("\nEnter Your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            enter();
            break;
        case 2:
            checkDate();
            break;
        case 3:
            printf("\nSee You Later");
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }while(c!=3);
}