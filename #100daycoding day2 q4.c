/*Q4: Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
int main()
{
    int num1, s1, s2;
    printf ("Enter 1st Number");
    scanf ("%d", &num1);
    s1=3.14*num1*num1;
    s2=2*3.14*num1;
    printf ("Area of a Circle with Radius %d is %d", num1, s1);
    printf ("Circumference of a Circle with Radius %d is %d", num1, s2);
    return 0;
}