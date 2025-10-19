# MODULE-1-
Module 1 respository for lab
# C Programming Practice Programs

This repository contains 5 basic C programs demonstrating fundamental concepts such as arithmetic operations, input/output, and simple calculations. Each program file includes comments explaining its aim and logic.

---

## 1. arithmetic_switch.c
**Aim:** Simulate arithmetic operators (+, -) using the switch statement.  
**Algorithm:**  
1. Ask the user to enter two numbers.  
2. Ask the user to choose an operator (+ or -).  
3. Use a `switch` statement to perform the chosen operation.  
4. Display the result.
 
 **source code**
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
**output**


---

## 2. simple_interest.c
**Aim:** Calculate simple interest based on principal, rate, and time.  
**Algorithm:**  
1. Ask the user to enter principal amount, rate of interest, and time period.  
2. Calculate simple interest using the formula: `SI = (P * R * T) / 100`.  
3. Display the calculated simple interest.

 **source code**
 #include <stdio.h>
int main()
{
    float num1,num2,num3;
    scanf("%f%f%f",&num1,&num2,&num3);
    printf("Simple Interest = %.2f",(num1*num2*num3)/100);
    return 0;
}

---

## 3. ascii_finder.c
**Aim:** Find the ASCII character corresponding to a given integer value.  
**Algorithm:**  
1. Ask the user to enter an integer value.  
2. Use `%c` format specifier to convert the integer to the corresponding ASCII character.  
3. Display the ASCII character.

**source code**
#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    printf("Character of ASCII Value %d is %c",num,num);
    return 0;
}

---

## 4. read_x_value.c
**Aim:** Read and display a user-provided X value.  
**Algorithm:**  
1. Ask the user to input a value for X.  
2. Store the input in a variable.  
3. Display the value of X.

 **source code**
 #include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num==000)
    printf("Number is equal to 000");
    else
    printf("Number is NOT equal to 000");
    return 0;
}

---

## 5. read_students.c
**Aim:** Read and display details of students (such as name, roll number, marks).  
**Algorithm:**  
1. Ask the user to enter the number of students.  
2. For each student, input name, roll number, and marks.  
3. Store the data in a structure or array.  
4. Display the entered details for all students.

**source code**
#include<stdio.h>
int main()
{
 int marks;
 
 scanf("%d",&marks);
 
 if (marks>=70)
 {
  printf("VERY GOOD");
 }
 
 else if( (marks<70) && (marks>=60) ) 
 {
  printf("GOOD");
 }
 else if( (marks<60) && (marks>=50) ) 
 {
  printf("ABOVE AVERAGE");
 }
 else if( (marks<50) && (marks>=40) ) 
 {
  printf("AVERAGE");
 }
 else
 {
  printf("NEED TO IMPROVE");
 }
 return 0;
}
