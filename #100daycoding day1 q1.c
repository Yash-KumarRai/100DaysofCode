/*Q1: Write a program to input two numbers and display their sum.


Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>
int main()
{
   int num1, num2, s;
   printf ("Enter 1st Number");
   scanf ("%d", &num1);
   printf ("Enter 2nd Number");
   scanf ("%d", &num2);
   s=num1+num2;
   printf ("Sum of %d and %d is %d", num1, num2, s);
   return 0;
}