/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.


Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
int main()
{
    int num, s;
    printf ("Enter 1st Number");
    scanf ("%d", &num);
    s=(num*9/5)+32;
    printf ("Converting %d Celcius to Fahrenheit is %d", num,s);
    return 0;
}