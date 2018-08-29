#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

struct CircularQueue
{
    int array[MAX_SIZE];
    int rear;
    int front;
};

int is_empty(struct CircularQueue *cq);
void insert(struct CircularQueue *cq);
void remove_ele(struct CircularQueue *cq);
void display(struct CircularQueue *cq);

int main()
{
    struct CircularQueue cq;
    cq.rear = cq.front = -1;

    int choice;

    while (1)
    {
        printf("Enter your choice: \n");
        printf("1. Insert\n");
        printf("2. Remove\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            insert(&cq);
            break;
        case 2:
            remove_ele(&cq);
            break;
        case 3:
            display(&cq);
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong option\n");
            printf("\n");

            break;
        }
    }
}

int is_empty(struct CircularQueue *cq)
{
    if (cq->front == -1)
    {
        return 1;
    }
    return 0;
}

int is_full(struct CircularQueue *cq)
{
    if ((cq->front == 0 && cq->rear == MAX_SIZE - 1) || (cq->front == cq->rear + 1))
    {
        return 1;
    }
    return 0;
}

void insert(struct CircularQueue *cq)
{
    if (is_full(cq))
    {
        printf("Queue Overflow\n");
        printf("\n");
    }
    else
    {
        int item;
        printf("Enter the element to be inserted: \n");
        scanf("%d", &item);
        printf("\n");

        if (cq->rear == -1)
        {
            (cq->front)++;
            (cq->rear)++;
        }
        else if (cq->rear == MAX_SIZE - 1 && cq->front > 0)
        {
            cq->rear = 0;
        }
        else
        {
            (cq->rear)++;
        }

        cq->array[cq->rear] = item;

        printf("Element inserted is: %d\n", item);
        display(cq);
    }
}

void remove_ele(struct CircularQueue *cq)
{
    if (is_empty(cq))
    {
        printf("Queue Underflow\n");
        printf("\n");
    }
    else
    {
        int ele;
        ele = cq->array[cq->front];

        if (cq->front == cq->rear)
        {
            cq->front = -1;
            cq->rear = -1;
        }
        else if (cq->front == MAX_SIZE - 1 && cq->rear < cq->front)
        {
            cq->front = 0;
        }
        else
        {
            (cq->front)++;
        }

        printf("Element removed is: %d\n", ele);
        printf("\n");
        display(cq);
    }
}

void display(struct CircularQueue *cq)
{
    if (is_empty(cq))
    {
        printf("Queue is empty\n");
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("Elements in the queue:\n");

        int i;

        if (cq->front > cq->rear)
        {
            for (i = cq->front; i < MAX_SIZE; i++)
            {
                printf("%d ", cq->array[i]);
            }
            for (i = 0; i <= cq->rear; i++)
                printf("%d ", cq->array[i]);

            printf("\n");
        }
        else
        {
            for (i = cq->front; i <= cq->rear; i++)
                printf("%d ", cq->array[i]);

            printf("\n");
        }
        printf("\n");
        printf("Front: %d\n", cq->front);
        printf("Rear: %d\n", cq->rear);
        printf("\n");
    }
}
