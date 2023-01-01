// Write a program to add, subtract and multiply two complex numbers using structures to function.
#include<stdio.h>

struct complex
{
    float real;
    float imaginary;
};

int main()
{
    struct complex c1, c2, sum,sub,mul;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imaginary);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imaginary);

    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    sub.real = c1.real - c2.real;
    sub.imaginary = c1.imaginary - c2.imaginary;

    mul.real = c1.real*c2.real - c1.imaginary*c2.imaginary;
    mul.imaginary = c1.imaginary*c2.real + c1.real*c2.imaginary;


    printf("SUM = %0.2f + i %0.2f", sum.real, sum.imaginary);
    printf("\nSUBTRACTION = %0.2f + i %0.2f", sub.real, sub.imaginary);
    printf("\nMULTIPLICATION = %0.2f + i %0.2f", mul.real, mul.imaginary);

    return 0;
}