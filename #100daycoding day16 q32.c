/*Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter a number: \n");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed)
        printf("It is Palindrome\n");
    else
        printf("Not a palindrome");

    return 0;
}