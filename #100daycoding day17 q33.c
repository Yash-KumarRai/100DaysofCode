/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    double result = 0.0;

    printf("Enter a number: \n");
    scanf("%d", &n);

    original = n;

    int x = n;
    while (x != 0) {
        x /= 10;
        digits++;
    }

    x = n;
    while (x != 0) {
        remainder = x % 10;
        result += pow(remainder, digits);
        x /= 10;
    }

    if ((int)result == original)
        printf("It is a Armstrong number\n");
    else
        printf("Not an Armstrong Number");

    return 0;
}
