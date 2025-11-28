/*Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;

    fp = fopen("employee.dat", "wb");
    if(fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("Enter employee name, ID, salary:\n");
    scanf("%s %d %f", emp.name, &emp.id, &emp.salary);

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if(fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    fread(&emp, sizeof(struct Employee), 1, fp);
    printf("Employee Data from File:\nName: %s | ID: %d | Salary: %.2f\n", emp.name, emp.id, emp.salary);
    fclose(fp);

    return 0;
}
