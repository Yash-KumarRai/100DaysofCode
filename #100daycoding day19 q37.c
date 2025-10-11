/*Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (b != 0) {
        int z = b;
        b = a % b;
        a = z;
    }
    gcd = a;

    lcm = (x * y) / gcd;

    printf("%d", lcm);
    return 0;
}
