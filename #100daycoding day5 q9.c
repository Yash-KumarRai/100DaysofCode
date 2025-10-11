#include <stdio.h>
#include <math.h>
int main() 
{
    double p, r, t, si, ci, amount;
    printf("Enter Principal: ");
    scanf("%lf", &p);
    printf("Enter Rate (in %%): ");
    scanf("%lf", &r);
    printf("Enter Time (in years): ");
    scanf("%lf", &t);
    si = (p*r*t) / 100;
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;
    printf("\nSimple Interest = %.2lf\n", si);
    printf("Compound Interest = %.2lf\n", ci);
    return 0;
}
