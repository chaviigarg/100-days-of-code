// Q121 - Write user's name and age into info.txt

#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    fp = fopen("info.txt", "w");

    scanf("%s", name);
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}