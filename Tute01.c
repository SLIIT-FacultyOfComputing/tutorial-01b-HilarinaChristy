/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int n1,n2,tot;
  float avg;
  printf("Enter num1:");
  scanf("%d",&n1);
  printf("Enter num2:");
  scanf("%d",&n2);
  tot = n1 + n2;
  printf("Sum is %d",tot);
  avg = tot / 2.0;
  printf("The average is %d",avg);
  return 0;
}

