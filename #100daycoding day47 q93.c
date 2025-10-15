/*Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0, flag = 1;

    scanf("%s", str1);
    scanf("%s", str2);

    while (str1[i] != '\0') {
        freq1[str1[i] - 'a']++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        freq2[str2[i] - 'a']++;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}