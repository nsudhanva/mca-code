#include<stdio.h>
#define MAX 5

void insert(int a[], int *front, int *rear);
void delete(int a[], int *front, int *rear);
void display(int a[], int *front, int *rear);

int main()
{
    int a[MAX], front = 0, rear = -1;

    while(1){
        printf("What do you want to do?\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");

        int choice;
        scanf("%d", &choice);

        switch(choice){
            case 1: insert(a, &front, &rear);
                    break;
            case 2: delete(a, &front, &rear);
                    break;
            case 3: display(a, &front, &rear);
                    break;
            default: printf("Wrong option\n");
        }
    }
}

void insert(int a[], int *front, int *rear)
{

    if((*rear) == MAX - 1){
        printf("Queue overflow\n");
    }
    else{
        int n;
        printf("Enter element to be inserted: \n");
        scanf("%d", &n);

        (*rear)++;
        a[(*rear)] = n;
    }
}

void delete(int a[], int *front, int *rear)
{
    if((*rear) == (*front)){
        printf("Queue underflow\n");
    }
    else{
        (*front)++;
    }
}

void display(int a[], int *front, int *rear)
{   
    int i;
    for(i = *front; i <= *rear; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
