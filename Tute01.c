/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int num1 , num2 , total;
  float avg;
  
  printf("Enter the mark of first subject : ");
  scanf("%d" ,&num1);

  printf("Enter the mark of second subject : ");
  scanf("%d" ,&num2);

  total = num1 + num2;
  avg = total/2.0;

  printf("Average of marks is %.2f" ,avg);
  
  return 0;
}

