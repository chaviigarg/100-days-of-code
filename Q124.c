// Q124 - Copy contents from source file to destination file

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    char ch;

    scanf("%s %s", sourceName, destinationName);

    source = fopen(sourceName, "r");
    destination = fopen(destinationName, "w");

    if (source == NULL || destination == NULL) {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    fclose(source);
    fclose(destination);

    return 0;
}