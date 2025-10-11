/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main ()
{
    int num1, num2, s;
    char op;
    
    printf ("Enter the 2 Numbers:");
    scanf ("%d %d", &num1, &num2);
    
    printf (" Enter the operator: \n");
    scanf (" %c", &op);
    
    switch ( op )
    {
    case '+':
        s = num1 + num2;
        printf ("%d", s);
        break;
        
    case '-':
        s = num1 - num2;
        printf ("%d", s);
        break;
        
    case '*':
        s = num1*num2;
        printf ("%d", s);
        break;
        
    case '/':
        s = num1/num2;
        printf ("%d", s);
        break;
        
    case '%':
        s = num1%num2;
        printf ("%d", s);
        break;
        
    default:
        printf ("Enter a valid operation");
    }
    
    return 0;

}