#include <stdio.h>
#include <string.h>

#define MAX 50 // Maximum number of students

// ================= STRUCTURE =================
struct Student
{
    int roll;
    char name[30];
    float marks;
};

// Global array of structures
struct Student students[MAX];
int count = 0; // Number of students stored

// Function to clear input buffer
void clearBuffer()
{
    while (getchar() != '\n')
        ;
}

// ================= FUNCTION DECLARATIONS =================
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

// ================= MAIN FUNCTION =================
int main()
{
    int choice;

    while (1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearBuffer(); // FIX

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}

// ================= ADD STUDENT =================
void addStudent()
{
    if (count >= MAX)
    {
        printf("Student limit reached!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &students[count].roll);
    clearBuffer(); // FIX

    printf("Enter Name: ");
    scanf("%[^\n]", students[count].name);
    clearBuffer(); // FIX

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);
    clearBuffer(); // FIX

    count++;
    printf("Student added successfully!\n");
}

// ================= DISPLAY STUDENTS =================
void displayStudents()
{
    if (count == 0)
    {
        printf("No records found.\n");
        return;
    }

    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++)
    {
        printf("Roll: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("--------------------\n");
    }
}

// ================= SEARCH STUDENT =================
void searchStudent()
{
    int roll;
    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);
    clearBuffer(); // FIX

    for (int i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            printf("\nStudent Found!\n");
            printf("Roll: %d\n", students[i].roll);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}

// ================= UPDATE STUDENT =================
void updateStudent()
{
    int roll;
    printf("\nEnter roll number to update: ");
    scanf("%d", &roll);
    clearBuffer(); // FIX

    for (int i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            printf("Enter new name: ");
            scanf("%[^\n]", students[i].name);
            clearBuffer(); // FIX

            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);
            clearBuffer(); // FIX

            printf("Record updated successfully!\n");
            return;
        }
    }
    printf("Student not found.\n");
}

// ================= DELETE STUDENT =================
void deleteStudent()
{
    int roll;
    printf("\nEnter roll number to delete: ");
    scanf("%d", &roll);
    clearBuffer(); // FIX

    for (int i = 0; i < count; i++)
    {
        if (students[i].roll == roll)
        {
            for (int j = i; j < count - 1; j++)
            {
                students[j] = students[j + 1]; // shift records left
            }
            count--;
            printf("Record deleted successfully!\n");
            return;
        }
    }
    printf("Student not found.\n");
}