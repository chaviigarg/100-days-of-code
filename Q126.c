// Q126 - Check whether a file exists and display its content

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File does not exist");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);

    return 0;
}