//Write a C Program to simulate arithmetic operators (+,-) using the switch statement

#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    scanf("%d %c %d", &num1 ,&op ,&num2);
    switch (op) {
    case '+' : 
             printf("Result = %d", num1+num2);break;
    case '-' : 
             printf("Result = %d", num1-num2);break;
             
             default : 
             printf("Invalid Input");
    }
             return 0;
}