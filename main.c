#include <stdio.h>
#include "labStruct.h"
#define MAX 2


int main(){
    struct studentInfo students[MAX]; // main student array
    struct studentInfo newStudent;  //use a pointer for this new student
    double distances[MAX];

    // Step 1: Input data for MAX students
    inputStudentInfo(students);

    // Step 2: Input data for the new student
    inputNewStudentInfo(&newStudent);

    // Step 3: Compute Euclidean distances
    computeEucDistance(students, &newStudent, distances);

    // Step 4: Find the max distance and display all distances
    double maxDistance = findMaxAndDisplayAll(distances);
    printf("Maximum Distance: %lf\n", maxDistance);

    return 0;
}

