// Q125 - Append a new line of text to an existing file

#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    return 0;
}