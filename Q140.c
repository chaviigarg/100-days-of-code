// Q140 - Define a struct with enum Gender and print gender

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;
    int choice;

    scanf("%s", p.name);
    scanf("%d", &choice);

    p.gender = choice;

    printf("Name: %s\n", p.name);

    if (p.gender == MALE)
        printf("Gender: Male");
    else if (p.gender == FEMALE)
        printf("Gender: Female");
    else
        printf("Invalid Gender");

    return 0;
}