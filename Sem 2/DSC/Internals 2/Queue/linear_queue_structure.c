#include<stdio.h>
#define MAX 5

struct Queue{
    int front;
    int rear;
    int array[MAX];
};

void insert(struct Queue *q);
void delete(struct Queue *q);
void display(struct Queue *q);

int main()
{
    struct Queue q;
    q.front = 0;
    q.rear = -1;

    while (1)
    {
        printf("What do you want to do?\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");

        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert(&q);
            break;
        case 2:
            delete(&q);
            break;
        case 3:
            display(&q);
            break;
        default:
            printf("Wrong option\n");
        }
    }
}

void insert(struct Queue *q)
{
    if(q->rear == MAX - 1){
        printf("Queue overflow\n");
    }
    else{
        int n;
        printf("Enter element\n");
        scanf("%d", &n);

        (q->rear)++;
        q->array[q->rear] = n;
    }
}

void delete(struct Queue *q)
{
    if(q->rear == q->front){
        printf("Queue underflow\n");
    }
    else if(q->front == MAX - 1){
        q->front = 0;
    }
    else{
        (q->front)++;
    }
}

void display(struct Queue *q)
{
    if(q->rear <= q->front){
        printf("Queue empty\n");
    }
    else{
        int i;

        for(i = q->front; i <= q->rear; i++){
            printf("%d ", q->array[i]);
        }
        printf("\n");
    }
}