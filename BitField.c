#include <stdio.h>

struct {
    unsigned int isStudent : 1;
    unsigned int age : 7;
    unsigned int grade : 4;
} studentInfo;

int main() {
    studentInfo.isStudent = 1;
    studentInfo.age = 20;
    studentInfo.grade = 9;

    printf("Student Status: %d\n", studentInfo.isStudent);
    printf("Age: %d\n", studentInfo.age);
    printf("Grade: %d\n", studentInfo.grade);

    return 0;
}
