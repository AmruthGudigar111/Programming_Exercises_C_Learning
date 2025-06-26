
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;

    printf("\nEnter name: ");
    scanf("%s", s.name);
    printf("\nEnter age: ");
    scanf("%d", &s.age);
    printf("\nEnter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Info:\nName: %s\nAge: %d\nMarks: %.2f\n", s.name, s.age, s.marks);
    return 0;
}
