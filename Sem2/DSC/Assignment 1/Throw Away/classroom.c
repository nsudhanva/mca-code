#include <stdio.h>

// Student structure with all name and roll
struct Student
{
    char name[20];
    char roll[20];
    float marks[20];
    float total;
};

// Subject structure with all name and total
struct Subject
{
    char name[20];
    float total; 
};

struct Class
{
    struct Student x;
    struct Subject y;
    float marks[20];
};

// Data structure which holds higest values and indexs of subjects and students
struct Data
{
    int subject_highest_index;
    float subject_highest;

    int student_highest_index;
    float student_highest;
};

// Function that takes inputs of all the students
void input_students(struct Student mca[], int n);

// Function that takes inputs of all the subjects
void input_subjects(struct Subject ca[], int n);

// Function to print all students
void print_students(struct Student mca[], int n);

// Function to print all subjects
void print_subjects(struct Subject mca[], int m);

void input_class(struct Student mca[], struct Subject ca[], struct Class cs[], struct Data dt, int n, int m);

// Function to calculate highest marks student and subject wise
void calculate(struct Student mca[], struct Subject ca[], struct Class cs[], struct Data dt, int n, int m);

// Function to print total
void print_total(struct Student mca[], struct Subject ca[], struct Class cs[], struct Data dt, int n, int m);

// Function to print highest
void calculate_highest(struct Student mca[], struct Subject ca[], struct Class cs[], struct Data dt, int n, int m);

// Print highest results
void print_results(struct Student mca[], struct Subject ca[], struct Data dt);

int main()
{
    struct Student mca[20];
    struct Subject ca[20];
    struct Class cs[20];
    struct Data dt;
    int i, j, n, m;

    printf("Enter number of students (less than 20): \n");
    scanf("%d", &n);
    printf("\n");

    input_students(mca, n);

    printf("Enter number of subjects per student (less than 10): \n");
    scanf("%d", &m);
    printf("\n");

    input_subjects(ca, m);

    input_class(mca, ca, cs, dt, n, m);

    calculate(mca, ca, cs, dt, n, m);

    print_total(mca, ca, cs, dt, n, m);

    calculate_highest(mca, ca, cs, dt, n, m);

    print_results(mca, ca, dt);
}

void input_students(struct Student mca[], int n)
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

void input_subjects(struct Subject ca[], int m)
{
    int i;

    printf("Enter subject details: \n");
    printf("\n");

    for (i = 0; i < m; i++)
    {
        printf("Enter subject %d name: \n", i + 1);
        scanf("%s", &ca[i].name);

        printf("\n");
    }
}

void input_class(struct Student mca[], struct Subject ca[], struct Class cs[], struct Data dt, int n, int m)
{
    int i, j;
    
    for(i = 0; i < n; i++){
        printf("Enter student %d, %s, %s for the following subjects: \n", i + 1, mca[i].name, mca[i].roll);

        for(j = 0; j < m; j++){
            printf("%s marks:\n", ca[j].name);
            scanf("%f", &mca[i].marks[j]);
        }
    }
}

void calculate(struct Student mca[], struct Subject ca[], struct Class cs[], struct Data dt, int n, int m)
{
    int i, j;

    float student_total;
    float subject_total;

    for(i = 0; i < n; i++)
    {
        student_total = 0;
        for(j = 0; j < m; j++)
        {
            student_total += mca[i].marks[j];
        }
        mca[i].total = student_total;
    }

    for (i = 0; i < m; i++)
    {
        subject_total = 0;
        for (j = 0; j < n; j++)
        {
            subject_total += mca[j].marks[i];
        }
        ca[i].total = subject_total;
    }
}

void print_total(struct Student mca[], struct Subject ca[], struct Class cs[], struct Data dt, int n, int m)
{
    printf("Total of all students: \n");

    int i, j;

    for(i = 0; i < n; i++){
        printf("Name: %s, Roll: %s, Total: %f\n", mca[i].name, mca[i].roll, mca[i].total);
    }

    printf("Total of all subjects: \n");

    for (i = 0; i < m; i++)
    {
        printf("Name: %s, Total: %f, Percentage: %f\n", ca[i].name, ca[i].total, ((ca[i].total) * 100)/ (m * 100));
    }
}

void calculate_highest(struct Student mca[], struct Subject ca[], struct Class cs[], struct Data dt, int n, int m)
{
    int i, j;

    dt.student_highest = 0;
    
    for (i = 0; i < n; i++)
    {
        if (mca[i].total >= dt.student_highest)
        {
            dt.student_highest = mca[i].total;
            dt.student_highest_index = i;
        }
    }

    dt.subject_highest = 0;
    
    for(j = 0; j < m; j++)
    {
        if (ca[j].total >= dt.subject_highest)
        {
            printf("Before\n");
            printf("ca[j]: %f\n", ca[j].total);
            printf("j: %d\n", j);
            printf("sub_high: %f\n", dt.subject_highest);
            dt.subject_highest = ca[j].total;
            dt.subject_highest_index = j;
            printf("After\n");
            printf("ca[j]: %f\n", ca[j].total);
            printf("j: %d\n", j);
            printf("sub_high: %f\n", dt.subject_highest);
        }
    }
}

void print_results(struct Student mca[], struct Subject ca[], struct Data dt)
{
    printf("Highest marks for Student: \n");
    printf("Student is: %s\n", mca[dt.student_highest_index].name);
    printf("Total marks is: %f\n", mca[dt.student_highest_index].total);
    printf("\n");

    printf("Highest marks for Subject: \n");
    printf("Subject is: %s\n", ca[dt.subject_highest_index].name);
    printf("Marks is: %f\n", ca[dt.subject_highest_index].total);
    printf("\n");
}
