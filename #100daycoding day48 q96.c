/*Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0, start, end;

    scanf("%[^\n]%*c", str);

    while (str[i] != '\0') {
        start = i;
        while (str[i] != ' ' && str[i] != '\0') i++;
        end = i - 1;

        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        if (str[i] != '\0') i++;
    }

    printf("%s", str);

    return 0;
}
