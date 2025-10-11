/*Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include <stdio.h>
int main()
{
    int num1,num2,x;
    printf ("Enter 1st Number");
    scanf ("%d", &num1);
    printf ("Enter 2nd Number");
    scanf ("%d", &num2);
    x=num1;
    num1=num2;
    num2=x;
    printf ("\nValue of num1 is %d", num1);
    printf ("\nValue of num2 is %d", num2);
    return 0;
}