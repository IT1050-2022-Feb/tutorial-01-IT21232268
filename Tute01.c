/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int m1,m2,cal;
   float avg;
   
   printf("Enter the mark 1: ");
   scanf("%d",&m1);
   
   printf("Enter the mark 2: ");
   scanf("%d",&m2);
   
   cal=m1+m2;
   avg=cal/2;
   
   printf("Average is=%.1f ",avg);
  
  return 0;
}

