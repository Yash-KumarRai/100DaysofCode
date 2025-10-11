/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>

int main ()
{
    int units, bill;
    
    printf ("Enter Units: \n");
    scanf ("%d", &units);
    
    if ( 1 <= units && units <= 100 )
    {
        bill = units*5;
        printf ("Bill: ₹%d", bill);
    }
    
    else if ( 100 < units && units <= 200 )
    {
        bill = 500 + ( units-100 )*7;
        printf ("Bill: ₹%d", bill);
    }
    
    else if ( 200 < units && units <= 300 )
    {
        bill = 1200 + ( units-200 )*10;
        printf ("Bill: ₹%d", bill);
    }
    
    else if ( 300 < units )
    {
        bill = 2200 + ( units-300 )*12;
        printf ("Bill: ₹%d", bill);
    }
    
    else
    {
        printf ("Enter A Valid Unit");
    }
    
    return 0;
}