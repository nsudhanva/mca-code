#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    stack->array = (int*) malloc(stack->capacity * sizeof(int));

    if (!stack->array)
        return NULL;
    return stack;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}

char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}

char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}

void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int checkPrecidence(char ch)
{
    switch (ch)
    {
      case '+':
      case '-':
          return 1;

      case '*':
      case '/':
          return 2;

      case '^':
          return 3;
    }
    return -1;
}

int infixToPostfix(char* expression)
{
    int i, k;

    struct Stack* stack = createStack(strlen(expression));

    if(!stack)
        return -1 ;

    for (i = 0, k = -1; expression[i]; ++i)
    {
        if (isOperand(expression[i]))
            expression[++k] = expression[i];

        else if (expression[i] == '(')
            push(stack, expression[i]);

        else if (expression[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
                expression[++k] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return -1;
            else
                pop(stack);
        }
        else
        {
            while (!isEmpty(stack) && checkPrecidence(expression[i]) <= checkPrecidence(peek(stack)))
                expression[++k] = pop(stack);
            push(stack, expression[i]);
        }

      }

  while (!isEmpty(stack))
      expression[++k] = pop(stack);

  expression[++k] = '\0';
  printf("Postfix expression: \n");
  printf("%s\n", expression);
}

int main()
{
    char expression[100];
    printf("Enter an expression: \n");
    scanf("%s", expression);

    infixToPostfix(expression);
    return 0;
}
