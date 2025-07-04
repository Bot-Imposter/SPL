#include<stdio.h>
#include<stdlib.h>

int st_index = 0;
struct Students {
    char name[50];
    int id;
    int marks[5];
    float average;
};

void addStudent(struct Students st[]);
void displayStudents(struct Students st[]);
void topStudent(struct Students st[]);
void fallingStudent(struct Students st[]);


void fallingStudent(struct Students st[]) {
    int totalFailedStudent = 0;

    for (int i = 0; i < st_index; i++) {
        int count = 0;
        int isFailed = 0;

        for (int j = 0; j < 5; j++) {
            if (st[i].marks[j] < 40) {
                isFailed = 1;
                count++;
                totalFailedStudent++;
            }
        }
        if (isFailed) {
            printf("ID: %d, Name: %s, Failed Subject: %d\n", st[i].id, st[i].name, count);
        }
    }
    if (!totalFailedStudent)
        puts("No Student Failed :)!");
}

void topStudent(struct Students st[]) {
    int i, top = 0;
    for (i = 1; i < st_index; i++) {
        if (st[i].average > st[top].average) {
            top = i;
        }
    }
    printf("Top Performer: %s, Average Marks: %.1f\n\n", st[top].name, st[top].average);
}

void displayStudents(struct Students st[]) {
    printf("Student Records:\n");
    if (st_index == 0) {
       puts("No Records Found!\nPlease Add Students to See Records");
    }

    for (int i = 0; i < st_index; i++) {

        float sum = 0;

        printf("ID: %d, Name: %s, Marks: [", st[i].id, st[i].name);
        for (int j = 0; j < 5; j++) {
            printf("%d", st[i].marks[j]);
            if (j < 4) printf(", ");
            }
        printf("], Average: %.1f\n", st[i].average);
    }
}

void addStudent(struct Students st[]) {
    int sum = 0;

    printf("Enter student name: ");
    scanf("%s", st[st_index].name);

    printf("Enter student ID: ");
    scanf("%d", &st[st_index].id);

    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &st[st_index].marks[i]);
        sum += st[st_index].marks[i];
    }

        st[st_index].average = sum / 5.0;
        st_index += 1;
}

int main() {
    struct Students st[100];
    while (1) {
        int choice;
        puts("Student Performance Management System");
        puts("1. Add a new student");
        puts("2. Display all students");
        puts("3. Find top performer");
        puts("4. Find failing students");
        puts("5. Exit");

        if (scanf("%d", &choice) != 1) {
            puts("Something went wrong");
            puts("Please input an integer number!");
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
        case 1:
            addStudent(st);
            break;
        case 2:
            displayStudents(st);
            break;
        case 3:
            topStudent(st);
            break;
        case 4:
            fallingStudent(st);
            break;
        case 5:
            return 0;
            break;
        default:
            puts("Something went wrong!\nPlease check your input");
        }
    }
}

