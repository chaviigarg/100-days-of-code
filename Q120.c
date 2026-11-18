// Q120 - Convert a string into sentence case

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);

    if (str[0] != '\0')
        str[0] = toupper(str[0]);

    printf("%s", str);

    return 0;
}