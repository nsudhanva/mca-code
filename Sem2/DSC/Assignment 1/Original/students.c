#include <stdio.h>

struct Student
{
    char name[20];
    char roll[20];
    float subject_marks[20];
    float total;
};

struct Subject
{
    char name[20];
    float total;
};

struct Class
{
    struct Student student;
    struct Subject subject[20];
};

float students_total[20];
float subjects_total[20];
float student_total;
float subject_total;
float student_highest = 0;
float subject_highest = 0;
int student_highest_index[20];
int subject_highest_index[20];
int student_highest_total_index;
int subject_highest_total_index;

void input_students(struct Class mca[], int n);

void input_subjects(struct Class mca[], int m);

void input_marks(struct Class mca[], int n, int m);

void calculate(struct Class mca[], int n, int m);

void print_results(struct Class mca[], int n, int m);

int main()
{
    struct Class mca[20];
    int i, j, n, m;

    printf("Enter number of students (less than 20): \n");
    scanf("%d", &n);
    printf("\n");

    input_students(mca, n);

    printf("Enter number of subjects per student (less than 10): \n");
    scanf("%d", &m);
    printf("\n");

    input_subjects(mca, m);

    input_marks(mca, n, m);
    calculate(mca, n, m);
    print_results(mca, n, m);
}

void input_students(struct Class mca[], int n)
{
    int i;

    printf("Enter student details: \n");
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter student %d name: \n", i + 1);
        scanf("%s", &mca[i].student.name);

        printf("Enter student %d roll: \n", i + 1);
        scanf("%s", &mca[i].student.roll);
        printf("\n");
    }
}

void input_subjects(struct Class mca[], int m)
{
    int i;

    printf("Enter subject details: \n");
    printf("\n");

    for (i = 0; i < m; i++)
    {
        printf("Enter subject %d name: \n", i + 1);
        scanf("%s", &mca[i].subject[i].name);
        printf("\n");
    }
}

void input_marks(struct Class mca[], int n, int m)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        printf("Enter student %d, %s, %s for the following subjects: \n", i + 1, mca[i].student.name, mca[i].student.roll);

        for (j = 0; j < m; j++)
        {
            printf("%s marks: ", mca[j].subject[j].name);
            scanf("%f", &mca[i].student.subject_marks[j]);
        }
        printf("\n");
    }
}

void calculate(struct Class mca[], int n, int m)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        student_total = 0;
        for (j = 0; j < m; j++)
        {
            student_total += mca[i].student.subject_marks[j];
        }
        students_total[i] = student_total;
    }
    printf("\n");

    int high_index;

    for (i = 0; i < m; i++)
    {
        subject_total = 0;

        for (j = 0; j < n; j++)
        {
            subject_total += mca[j].student.subject_marks[i];

            if (mca[j].student.subject_marks[i] > student_highest)
            {
                student_highest = mca[j].student.subject_marks[i];
                high_index = j;
            }
        }

        student_highest_index[i] = high_index;
        student_highest = 0;
        subjects_total[i] = subject_total;
    }

    // for (i = 0; i < m; i++)
    // {
    //     printf("Student highest index: %d\t", student_highest_index[i]);
    // }
    // printf("\n");
}

void print_results(struct Class mca[], int n, int m)
{
    int i, j;

    printf("Total - Marks of Students: \n\n");

    for (i = 0; i < n; i++)
    {
        printf("Marks of %s, Roll: %s\n", mca[i].student.name, mca[i].student.roll);
        printf("Total: %f\n", students_total[i]);
        printf("Percentage: %f\n", (students_total[i] / (m * 100)) * 100);
        printf("\n");
    }

    printf("Total - Marks of Subjects: \n\n");

    for (i = 0; i < m; i++)
    {
        printf("Marks of %s: \n", mca[i].subject[i].name);
        printf("Total: %f\n", subjects_total[i]);
        printf("Percentage: %f\n", (subjects_total[i] / (m * 100)) * 100);
        printf("\n");
    }

    printf("Subject wise - Highest: \n\n");

    for (i = 0; i < m; i++)
    {
        printf("Highest in %s is %s\n", mca[i].subject[i].name, mca[student_highest_index[i]].student.name);
    }

    printf("\n");

    printf("Student wise - Overall Highest: \n\n");

    float final_highest = 0;

    for (i = 0; i < n; i++)
    {
        if (students_total[i] > final_highest)
        {
            final_highest = students_total[i];
            student_highest_total_index = i;
        }
    }

    printf("%s\n", mca[student_highest_total_index].student.name);
}