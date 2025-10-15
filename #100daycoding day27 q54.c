/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main() {
    int n = 4;
    int i, j, space, stars;

    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++) {
            printf(" ");
        }
        for (stars = 1; stars <= (2 * i - 1); stars++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--) {
            printf(" ");
        }
        for (stars = 1; stars <= (2 * i - 1); stars++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
