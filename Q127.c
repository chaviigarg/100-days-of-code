// Q127 - Convert file text to uppercase and write to output.txt

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("Error opening file");
        return 1;
    }

    while ((ch = fgetc(input)) != EOF)
        fputc(toupper(ch), output);

    fclose(input);
    fclose(output);

    return 0;
}