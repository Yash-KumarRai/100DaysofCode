/*Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include <stdio.h>
int main()
{
    int num1, num2, s1, s2, s3, s4;
    printf ("Enter 1st Number");
    scanf ("%d", &num1);
    printf ("Enter 2nd Number");
    scanf ("%d", &num2);
    s1=num1+num2;
    s2=num1-num2;
    s3=num1*num2;
    s4=num1/num2;
    printf ("Sum of %d and %d is %d", num1, num2, s1);
    printf ("Difference of %d and %d is %d", num1, num2, s2);
    printf ("Product of %d and %d is %d", num1, num2, s3);
    printf ("Quotient of %d and %d is %d", num1, num2, s4);
    return 0;
}