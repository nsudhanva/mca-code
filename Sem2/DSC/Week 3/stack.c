#include <stdio.h>
#define SIZE 5

void push(int stack[], int *top);
void pop(int stack[], int *top);
void display(int stack[], int *top);

int main()
{
	int stack[SIZE], top = -1;
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
				push(stack, &top);
				break;
			case 2:
				pop(stack, &top);
				break;
			case 3:
				display(stack, &top);
				break;
			case 4:
				break;
			default:
				printf("Invalid option, try again..\n");
		}
	} while (choice != 4);
}

void push(int stack[], int *top)
{
	if (*top == SIZE)
	{
		printf("Stack Overflow\n");
		return;
	}

	int n;
	printf("Enter an element to be pushed:\n");
	scanf("%d", &n);

	(*top)++;

	stack[*top] = n;

	printf("Element inserted: %d\n", n);
	display(stack, top);
}

void pop(int stack[], int *top)
{
	if (*top == -1)
	{
		printf("Stack Underflow\n");
		return;
	}

	(*top)--;
	int temp = stack[*top];
	printf("Element popped: %d\n", temp);
	display(stack, top);
}

void display(int stack[], int *top)
{
	int i;
	if (*top == -1)
	{
		printf("Nothing to display\n");
		return;
	}

	// printf("%d\n", *top);

	printf("Elements in stack\n");
	for (i = *top; i >= 0; i--)
	{
		printf("%d\t", stack[i]);
	}

	printf("\n");
}
