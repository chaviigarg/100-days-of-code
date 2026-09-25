// Q94. Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[100], longest[100] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        }
        else {
            word[j] = '\0';

            if(j > strlen(longest))
                strcpy(longest, word);

            j = 0;
        }

        if(str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}