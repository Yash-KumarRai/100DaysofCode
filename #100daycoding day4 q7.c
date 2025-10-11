/*Q7: Write a program to swap two numbers without using a third variable.


Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/

#include <stdio.h>
int main()
{
    int a,b;
    printf(" Enter 1st Number");
    scanf("%d",&a);
    printf(" Enter 2nd Number");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" a is now %d\n",a);
    printf(" b is now %d\n",b);
    return 0;
}