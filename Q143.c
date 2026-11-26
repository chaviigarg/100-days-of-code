// Q143 - Find the student with the highest marks

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int highest = 0;

    for (int i = 0; i < 5; i++)
        scanf("%s %d %f",
              s[i].name,
              &s[i].roll_no,
              &s[i].marks);

    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[highest].marks)
            highest = i;
    }

    printf("Name: %s\n", s[highest].name);
    printf("Roll No: %d\n", s[highest].roll_no);
    printf("Marks: %.2f", s[highest].marks);

    return 0;
}