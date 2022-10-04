#include<stdio.h>

void check(char n){
    int count=0;
    /*if(n=='A' || n== 'a' || n=='E' || n=='e' || n=='I' || n=='i' || n=='o' || n=='O' || n=='u' || n=='U'){
        printf("It is a Vowel");
    }
    else{
        printf("It is a Consonant.");
    }*/
    switch (n)
    {
    case 'a':
        printf("It is a Vowel.");
        break;
    case 'A':
        printf("It is a Vowel.");
        break;
    case 'e':
        printf("It is a Vowel.");
        break;
    case 'E':
        printf("It is a Vowel.");
        break;
    case 'i':
        printf("It is a Vowel.");
        break;
    case 'I':
        printf("It is a Vowel.");
        break;
    case 'o':
        printf("It is a Vowel.");
        break;
    case 'O':
        printf("It is a Vowel.");
        break;
    case 'u':
        printf("It is a Vowel.");
        break;
    case 'U':
        printf("It is a Vowel.");
        break;
    default:
        printf("It is a Consonant.");
        break;
    }

}

int main(){
    char n;
    printf("Enter a character:");
    scanf("%c",&n);
    check(n);
}