#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    int roll_number;
    float grades;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;

void input_data();
void display_data();
float calculate_average();

int main() {
    int choice;

    while (1) {
        printf("\nStudent Database Menu:\n");
        printf("1. Input data\n");
        printf("2. Display data\n");
        printf("3. Calculate average grades\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                input_data();
                break;
            case 2:
                display_data();
                break;
            case 3:
                printf("Average grades: %.2f\n", calculate_average());
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

void input_data() {
    if (student_count >= MAX_STUDENTS) {
        printf("Database is full!\n");
        return;
    }

    printf("Enter student name: ");
    scanf(" %s\n", students[student_count].name);
    printf("Enter roll number: ");
    scanf("%d", &students[student_count].roll_number);
    printf("Enter grade: ");
    scanf("%f", &students[student_count].grades);

    student_count++;
}

void display_data() {
    if (student_count == 0) {
        printf("No data available.\n");
        return;
    }

    printf("\nStudent Database:\n");
    for (int i = 0; i < student_count; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Grade: %.2f\n", students[i].grades);
        printf("------------------------\n");
    }
}

float calculate_average() {
    if (student_count == 0) {
        printf("No data available to calculate average.\n");
        return 0.0;
    }

    float total = 0.0;
    for (int i = 0; i < student_count; i++) {
        total += students[i].grades;
    }

    return total / student_count;
}
