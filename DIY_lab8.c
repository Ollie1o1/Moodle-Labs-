#include <stdio.h>

void yearlyAverage(double rainfall[5][12]);
void monthlyAverage(double rainfall[5][12]);


int main() {

    double rainfall[5][12] = {
    {9.42, 5.84, 5.66, 8.55, 5.8, 4.45, 4.73, 0.61, 8.5, 1.21, 7.59, 8.81}, 
    {1.97, 4.97, 6.97, 6.66, 7.07, 9.19, 6.72, 8.89, 9.54, 3.87, 8.58, 5.37},
    {8.88, 4.15, 7.12, 9.3, 7.94, 5.2, 6.97, 1.29, 2.78, 5.3, 1.17, 2.12},
    {0.58, 5.95, 6.2, 9.03, 3.9, 6.7, 4.75, 4.47, 1.4, 0.29, 3.65, 0.04},
    {4.40, 9.12, 9.09, 5.89, 1.55, 9.45, 3.66, 4.8, 2.43, 1.97, 6.74, 7.28}
    };
    
    
    yearlyAverage(rainfall);
    monthlyAverage(rainfall);

    return 0;
}

void yearlyAverage(double rainfall[5][12]){
    printf("Report 1: Yearly average\n");
    printf("Year Rainfall\n");
    for(int i = 0; i < 5; i++){ 
        double sum = 0.0;
        for(int j = 0; j < 12; j++){
            sum += rainfall[i][j];
        }
        double average = sum / 12.0;
        printf("%d %.2f\n", 2019 + i, average);
    }
    printf("\n");
}

void monthlyAverage(double rainfall[5][12]){
    const char *months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    printf("Report 2: Monthly average\n");
    printf("Month Average Rainfall\n");
    for (int i = 0; i < 12; i++){
        double sum = 0.0;
        for(int j = 0; j < 5; j++){
              sum += rainfall[j][i];
        }
        double average = sum / 5.0;
        printf("%-10s %.2f\n", months[i], average);
    }
}
