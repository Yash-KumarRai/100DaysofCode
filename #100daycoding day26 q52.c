/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int i, j;
    int pattern[] = {1, 3, 5, 3, 1};
    int groups = 5;

    for (i = 0; i < groups; i++) {
        for (j = 0; j < pattern[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
