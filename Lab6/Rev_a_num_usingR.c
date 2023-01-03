#include <stdio.h>
int sum=0,a;
int rev(int num){
  if(num){
    a=num%10;
    sum=sum*10+a;
    rev(num/10);
  }
  return sum;
}

int main(){
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  printf("The reverse of the number is :%d",rev(num));
  return 0;
}