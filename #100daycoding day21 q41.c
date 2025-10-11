/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int n, num, lastDigit, firstDigit, digits, swapped;

    printf("Enter a number: \n");
    scanf("%d", &n);

    num = n;
    lastDigit = n % 10;

    digits = (int)log10(n);
    firstDigit = n / (int)pow(10, digits);

    swapped = lastDigit * (int)pow(10, digits) + (n % (int)pow(10, digits)) / 10 * 10 + firstDigit;

    printf("%d\n", swapped);
    return 0;
}