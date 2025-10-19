//Write a C program to find simple interest.  Note: Inputs are principle, year and rate.

#include <stdio.h>
int main()
{
    float num1,num2,num3;
    scanf("%f%f%f",&num1,&num2,&num3);
    printf("Simple Interest = %.2f",(num1*num2*num3)/100);
    return 0;
}