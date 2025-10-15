/*Q86: Check if a string is a palindrome.

Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, len = 0, flag = 1;

    scanf("%[^\n]%*c", str);

    while (str[len] != '\0') len++;

    j = len - 1;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        j--;
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}