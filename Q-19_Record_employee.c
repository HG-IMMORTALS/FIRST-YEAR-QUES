#include <stdio.h>
#include <string.h>

struct emp {
    char name[20];
    int age;
    int basic;
};

void inputRecords(struct emp employees[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Basic Salary: ");
        scanf("%d", &employees[i].basic);
    }
}

void displayRecords(struct emp employees[], int n) {
    printf("Employee Details (Sorted by Total Salary in Descending Order):\n");
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Total Salary: %d\n", employees[i].basic + (employees[i].basic * 10 / 100) + (employees[i].basic * 5 / 100));
        printf("-------------------------------------------------------------------\n");
    }
}

void sortEmployees(struct emp employees[], int n) {
    struct emp temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int salary1 = employees[j].basic + (employees[j].basic * 10 / 100) + (employees[j].basic * 5 / 100);
            int salary2 = employees[j + 1].basic + (employees[j + 1].basic * 10 / 100) + (employees[j + 1].basic * 5 / 100);
            if (salary1 < salary2) {
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct emp employees[n];

    inputRecords(employees, n);
    sortEmployees(employees, n);
    displayRecords(employees, n);

    return 0;
}

/*Output:
Enter the number of employees: 2
Enter details for employee 1:
Name: Ranveer
Age: 34
Basic Salary: 5000
Enter details for employee 2:
Name: Vikram
Age: 43
Basic Salary: 6000
Employee Details (Sorted by Total Salary in Descending Order):
-------------------------------------------------------------------
Name: Vikram
Age: 43
Total Salary: 6900
-------------------------------------------------------------------
Name: Ranveer
Age: 34
Total Salary: 5750
-------------------------------------------------------------------
*/