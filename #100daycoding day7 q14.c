/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.


Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/

#include <stdio.h>

int main()
{
    char alphabet, a, e, i, o, u;
    
    printf ("Enter Alphabet \n");
    scanf ("%c", &alphabet);
    
    if ( alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' )
    {
        printf ("The alphabet is a vowel");
    }
    
    else
    {
        printf ("The alphabet is a consonant");
    }
    
    return 0;
}