// Q130 - Store and read multiple student records using a file

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks, n;

    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
        printf("%s %d %d\n", name, roll, marks);

    fclose(fp);

    return 0;
}