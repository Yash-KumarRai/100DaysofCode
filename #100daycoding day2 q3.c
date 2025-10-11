/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>
int main()
{
    int num1, num2, s1, s2;
    printf ("Enter 1st Number");
    scanf ("%d", &num1);
    printf ("Enter 2nd Number");
    scanf ("%d", &num2);
    s1=num1*num2;
    s2=2*(num1+num2);
    printf ("Area of %d and %d is %d", num1,num2,s1);
    printf ("Perimeter of %d and %d ius %d", num1, num2, s2);
    return 0;
}