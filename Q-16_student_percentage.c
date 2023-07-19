#include <stdio.h>

typedef struct {
    char name[50];
    int rollNo;
    int marks[4];
    float percentage;
} S;

int main() {
    int n, i;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);

    S students[n];

    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %s", students[i].name);

        printf("Enter Roll No.: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Marks in 4 Subjects:\n");
        for (int j = 0; j < 4; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    for (i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += students[i].marks[j];
        }
        students[i].percentage = (float) sum / 4;
    }

    float highestPercentage = students[0].percentage;
    int highestIndex = 0;
    for (i = 1; i < n; i++) {
        if (students[i].percentage > highestPercentage) {
            highestPercentage = students[i].percentage;
            highestIndex = i;
        }
    }

    printf("\nStudent with Highest Percentage:\n");
    printf("Name: %s\n", students[highestIndex].name);
    printf("Roll No.: %d\n", students[highestIndex].rollNo);

    return 0;
}

/*Output:
Enter the number of students: 3

Student 1
Enter Name: Aakriti
Enter Roll No.: 1
Enter Marks in 4 Subjects:
Subject 1: 88
Subject 2: 78
Subject 3: 86
Subject 4: 96

Student 2
Enter Name: sid
Enter Roll No.: 2
Enter Marks in 4 Subjects:
Subject 1: 98
Subject 2: 88
Subject 3: 65
Subject 4: 55

Student 3
Enter Name: Akash
Enter Roll No.: 3
Enter Marks in 4 Subjects:
Subject 1: 67
Subject 2: 87
Subject 3: 56
Subject 4: 30

Student with Highest Percentage:
Name: Aakriti
Roll No.: 1
*/