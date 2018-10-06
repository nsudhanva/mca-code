#include <stdio.h>

// Student structure with all subject marks and total
struct student
{
    char name[20];
    float marks[20];
    char roll[20];
    float total;
};

// Data structure which holds higest values and indexs of subjects and students
struct data
{
    int student_subject_index;
    int subject_highest_index;
    float subject_highest;

    int student_highest_index;
    float student_highest;
};

// Function that takes inputs of all the students
void input_students(struct student mca[], int n);

// Function to print all students
void print_students(struct student mca[], int n, int m);

// Function to input student marks
void input_marks(struct student mca[], int n, int m);

// Function to calculate highest marks student and subject wise
void calculate_highest(struct student mca[], struct data ca, int n, int m);

// Function to print final results
void print_results(struct student mca[], struct data ca);

int main()
{
    struct student mca[20];
    struct data ca;
    int i, j, n, m;

    printf("Enter number of students (less than 20): \n");
    scanf("%d", &n);
    printf("\n");

    input_students(mca, n);

    printf("Enter number of subjects per student (less than 10): \n");
    scanf("%d", &m);
    printf("\n");

    input_marks(mca, n, m);

    calculate_highest(mca, ca, n, m);

    print_results(mca, ca);    
}

void input_students(struct student mca[], int n)
{
    int i;

    printf("Enter student details: \n");
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter student %d name: \n", i + 1);
        scanf("%s", &mca[i].name);

        printf("Enter student %d roll: \n", i + 1);
        scanf("%s", &mca[i].roll);
        printf("\n");
    }
}

void print_students(struct student mca[], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Name: %s, Roll: %s, details: \n", mca[i].name, mca[i].roll);
        for (j = 0; j < m; j++)
        {
            printf("Marks for subject %d: ", j + 1);
            printf("%f\n", mca[i].marks[j]);
        }
        printf("\n");
    }
}

void input_marks(struct student mca[], int n, int m)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        printf("Enter details for: %s, Roll: %s, \n", mca[i].name, mca[i].roll);
        mca[i].total = 0;

        for (j = 0; j < m; j++)
        {
            printf("Marks for subject %d: ", j + 1);
            scanf("%f", &mca[i].marks[j]);
            mca[i].total += mca[i].marks[j];
        }
    }

    printf("\n");
}

void calculate_highest(struct student mca[], struct data ca, int n, int m)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        ca.student_highest = 0;
        ca.subject_highest = 0;

        for (j = 0; j < m; j++)
        {
            if (mca[i].total > ca.student_highest)
            {
                ca.student_highest = mca[i].total;
                ca.student_highest_index = i;
            }

            if (mca[i].marks[j] > ca.subject_highest)
            {
                ca.subject_highest = mca[i].marks[j];
                ca.student_subject_index = i;
                ca.subject_highest_index = j;
            }
        }
    }
}

void print_results(struct student mca[], struct data ca)
{
    printf("Highest marks for Subject: \n");
    printf("Subject is: Subject %d\n", ca.subject_highest_index + 1);
    printf("Marks is: %f\n", mca[ca.student_subject_index].marks[ca.subject_highest_index]);
    printf("\n");

    printf("Highest marks for Student: \n");
    printf("Student is: %s\n", mca[ca.student_highest_index].name);
    printf("Total marks is: %f\n", mca[ca.student_highest_index].total);
    printf("\n");
}
