#include <stdio.h>

// Function to calculate GPA
float calculateGPA(int grades[], int numSubjects) {
    float total = 0.0;
    for (int i = 0; i < numSubjects; i++) {
        total += grades[i];
    }
    return total / numSubjects;
}

int calculateRank(float gpa, float classGPA[], int numStudents) {
    int rank = 1;
    for (int i = 0; i < numStudents; i++) {
        if (classGPA[i] > gpa) {
            rank++;
        }
    }
    return rank;
}

int main() {
    int numStudents = 5;
    
    int numSubjects = 5;
    
    // Array to store grades of each student
    int grades[numStudents][numSubjects];
    
    for (int i = 0; i < numStudents; i++) {
        printf("Enter grades for student %d:\n", i + 1);
        for (int j = 0; j < numSubjects; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &grades[i][j]);
        }
    }
    float classGPA[numStudents];
    
    for (int i = 0; i < numStudents; i++) {
        classGPA[i] = calculateGPA(grades[i], numSubjects);
    }
    
    float totalClassGPA = 0.0;
    for (int i = 0; i < numStudents; i++) {
        totalClassGPA += classGPA[i];
    }
    float avgClassGPA = totalClassGPA / numStudents;
    
    printf("Class GPA: %.2f\n", avgClassGPA);
    
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: GPA=%.2f, Rank=%d\n", i + 1, classGPA[i], calculateRank(classGPA[i], classGPA, numStudents));
    }
    
    return 0;
}
