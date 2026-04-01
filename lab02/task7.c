#include <stdio.h>
#include <string.h>

enum Course {
    COURSE_1,
    COURSE_2,
    COURSE_3,
    COURSE_4
};

struct Student {
    char name[50];
    int age;
    enum Course course;
    float averageGrade;
};

void addStudent(struct Student *students, int *count, char *name, int age, enum Course course, float grade) {
    strcpy(students[*count].name, name);
    students[*count].age = age;
    students[*count].course = course;
    students[*count].averageGrade = grade;
    (*count)++;
}

void printStudent(struct Student *s) {
    printf("Имя: %s\n", s->name);
    printf("Возраст: %d\n", s->age);
    printf("Курс: ");
    switch(s->course) {
        case COURSE_1: printf("1\n"); break;
        case COURSE_2: printf("2\n"); break;
        case COURSE_3: printf("3\n"); break;
        case COURSE_4: printf("4\n"); break;
    }
    printf("Средний балл: %.2f\n", s->averageGrade);
    printf("--------------------\n");
}

void printAllStudents(struct Student *students, int count) {
    for(int i = 0; i < count; i++) {
        printStudent(&students[i]);
    }
}

int findByName(struct Student *students, int count, char *name) {
    for(int i = 0; i < count; i++) {
        if(strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

void sortByGrade(struct Student *students, int count) {
    struct Student temp;
    for(int i = 0; i < count - 1; i++) {
        for(int j = i + 1; j < count; j++) {
            if(students[i].averageGrade < students[j].averageGrade) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main(void) {
    struct Student students[100];
    int count = 0;
    
    addStudent(students, &count, "Анна", 19, COURSE_2, 4.5);
    addStudent(students, &count, "Иван", 20, COURSE_3, 4.2);
    addStudent(students, &count, "Мария", 18, COURSE_1, 4.8);
    addStudent(students, &count, "Петр", 21, COURSE_4, 3.9);
    
    printf("========== ВСЕ СТУДЕНТЫ ==========\n");
    printAllStudents(students, count);
    
    printf("========== ПОИСК ПО ИМЕНИ ==========\n");
    int index = findByName(students, count, "Мария");
    if(index != -1) {
        printf("Найден студент:\n");
        printStudent(&students[index]);
    } else {
        printf("Студент не найден\n");
    }
    
    printf("========== СОРТИРОВКА ПО БАЛЛУ ==========\n");
    sortByGrade(students, count);
    printAllStudents(students, count);
    
    return 0;
}