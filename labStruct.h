#include <stdio.h>
#include <math.h>
#define MAX 2

struct studentInfo {
    int sID;
    int age;
    double height;
    double weight;
};

void inputStudentInfo(struct studentInfo students[]);
void inputNewStudentInfo(struct studentInfo *newStudent);
void computeEucDistance(const struct studentInfo students[], const struct studentInfo *newStudent, double distances[]);
double findMaxAndDisplayAll(const double distances[]);
