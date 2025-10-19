//Write a C program to read the student marks and print the grade he/she got?
//marks>=70 print VERY GOOD
//60>= marks <70 print GOOD
//50>= marks <60 print  ABOVE AVERAGE
//40>= marks <50 print AVERAGE
//marks<40 print NEED TO IMPROVE

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
