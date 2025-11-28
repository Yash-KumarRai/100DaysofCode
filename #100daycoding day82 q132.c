/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    char input[10];
    scanf("%s", input);

    enum Traffic signal;

    if(strcmp(input, "RED") == 0)
        signal = RED;
    else if(strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else
        signal = GREEN;

    switch(signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}