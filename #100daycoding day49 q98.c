/*Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, lastSpace = -1;

    scanf("%[^\n]%*c", str);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            lastSpace = i;
        i++;
    }

    i = 0;
    while (i < lastSpace) {
        if (i == 0 || str[i - 1] == ' ') {
            printf("%c.", str[i]);
        }
        i++;
    }

    printf(" %s", str + lastSpace + 1);

    return 0;
}