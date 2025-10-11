/*Q8: Write a program to find and display the sum of the first n natural numbers.

Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include <stdio.h>
int main()
{
    int n,x;
    printf ("Enter Number\n");
    scanf ("%d", &n);
    x=n*(n+1)/2;
    printf ("Sum of the first n natural numbers is %d",x);
    return 0;
}