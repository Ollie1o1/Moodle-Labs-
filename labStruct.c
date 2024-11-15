#include <stdio.h>
#include "labStruct.h"

// Function to input data for students
void inputStudentInfo(struct studentInfo students[]) {
    for (int i = 0; i < MAX; i++) {
        printf("Enter sID, age, height, and weight for student %d: ", i + 1);
        scanf("%d %d %lf %lf", &students[i].sID, &students[i].age, &students[i].height, &students[i].weight);
    }
}

// Function to input data for a new student
void inputNewStudentInfo(struct studentInfo *newStudent) {
    printf("Enter sID, age, height, and weight for the new student: ");
    scanf("%d %d %lf %lf", &newStudent->sID, &newStudent->age, &newStudent->height, &newStudent->weight);
}

// Function to compute Euclidean distances
void computeEucDistance(const struct studentInfo students[], const struct studentInfo *newStudent, double distances[]) {
    for (int i = 0; i < MAX; i++) {
        double ageDiff = students[i].age - newStudent->age;
        double heightDiff = students[i].height - newStudent->height;
        double weightDiff = students[i].weight - newStudent->weight;

        // Calculate Euclidean distance
        distances[i] = sqrt(pow(ageDiff, 2) + pow(heightDiff, 2) + pow(weightDiff, 2));
    }
}

// Function to find the maximum distance and display all distances
double findMaxAndDisplayAll(const double distances[]) {
    double max = distances[0];
    printf("Distances: \n");
    for (int i = 0; i < MAX; i++) {
        printf("%lf\n", distances[i]);
        if (distances[i] > max) {
            max = distances[i];
        }
    }
    return max;
}
