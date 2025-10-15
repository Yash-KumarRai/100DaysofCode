/*Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, len = 0, maxLen = 0, j;

    scanf("%[^\n]%*c", str);

    longest[0] = '\0';
    while (str[i] != '\0') {
        j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';
        if (j > maxLen) {
            maxLen = j;
            strcpy(longest, word);
        }
        if (str[i] != '\0') i++;
    }

    printf("%s", longest);

    return 0;
}