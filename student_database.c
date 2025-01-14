#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void input_student(struct Student* s) {
    printf("Enter student name: ");
    fgets(s->name, 50, stdin);
    s->name[strcspn(s->name, "\n")] = '\0';  // Remove newline character

    printf("Enter student age: ");
    scanf("%d", &s->age);
    printf("Enter student grade: ");
    scanf("%f", &s->grade);
    getchar(); // to clear the input buffer
}

void display_student(struct Student s) {
    printf("\nStudent Name: %s\n", s.name);
    printf("Student Age: %d\n", s.age);
    printf("Student Grade: %.2f\n", s.grade);
}

int main() {
    struct Student student;

    input_student(&student);
    display_student(student);

    return 0;
}
