// Q145 - Return top student's details from a function using structure

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks)
            top = s[i];
    }

    return top;
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n], top;

    for (int i = 0; i < n; i++)
        scanf("%s %d %f",
              s[i].name, &s[i].roll_no, &s[i].marks);

    top = findTop(s, n);

    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f", top.marks);

    return 0;
}