#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct Stack
{
	int data;
	struct Stack *link;
};

struct Stack *push(struct Stack *top);
struct Stack *pop(struct Stack *top);
void display(struct Stack *top);

int main()
{
	struct Stack *top;
	top = NULL;

	int choice;

	do
	{
		printf("Enter the operation to be performed\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				top = push(top);
				break;
			case 2:
				top = pop(top);
				break;
			case 3:
				display(top);
				break;
			case 4:
				break;
			default:
				printf("Invalid option, try again..\n");
		}
	} while (choice != 4);
}

struct Stack *push(struct Stack *top)
{
	struct Stack *temp;
	temp = (struct Stack *)malloc(sizeof(struct Stack));
	temp->link = top;

	printf("Enter element to be pushed: \n");
	scanf("%d", &temp->data);

	top = temp;
	display(top);
	return top;
}

struct Stack *pop(struct Stack *top)
{
	if (top == NULL)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		printf("Element popped: %d\n", top->data);

		struct Stack *temp;
		temp = top;
		top = top->link;
		free(temp);
	}

	display(top);
	return top;
}

void display(struct Stack *top)
{
	if (top == NULL)
	{
		printf("Nothing to display\n");
		return;
	}

	struct Stack *temp;
	temp = top;

	printf("Elements in stack: \n");

	while (temp != NULL)
	{
		printf("%d\t", temp->data);
		temp = temp->link;
	}

	printf("\n");
}
