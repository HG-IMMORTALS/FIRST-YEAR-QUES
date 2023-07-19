#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNo;
    float percentage;
};

void printDetails(struct Student students[], int n, float averagePercentage) {
    printf("Details of students with percentage greater than or equal to average:\n");
    printf("--------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        if (students[i].percentage >= averagePercentage) {
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Percentage: %.2f\n", students[i].percentage);
            printf("---------------------------------------------------------\n");
        }
    }
}

int main() {
    int n;
    float sum = 0, averagePercentage;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);

        sum += students[i].percentage;
    }

    averagePercentage = sum / n;

    printDetails(students, n, averagePercentage);

    return 0;
}

/*Output:
Enter the number of students: 2
Enter details for student 1:
Name: Aakriti
Roll No: 1
Percentage: 89
Enter details for student 2:
Name: Ad
Roll No: 4
Percentage: 78
Details of students with percentage greater than or equal to average:
--------------------------------------------------------
Name: Aakriti
Roll No: 1
Percentage: 89.00
--------------------------------------------------------
*/