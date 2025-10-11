/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include <stdio.h>
int main()
{
    int h, m, r, s;
    printf ("Enter Number Of Seconds\n");
    scanf ("%d", &s);
    h= s/3600;
    m= (s-(h*3600))/60;
    r= s-(h*3600+m*60);
    printf ("Hour is %d,\n", h, s);
    printf ("Minute is %d,\n", m, s);
    printf ("Remaining Seconds is %d,\n", r, s);
    return 0;
}