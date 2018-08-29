#include "stdio.h"
#define ROW 10
#define COL 10

void calculate(int a[][COL], int b[][COL], int c[][COL], int m, int n);

int main()
{
	int a[ROW][COL], b[ROW][COL], c[ROW][COL], m, n, i, j;

	printf("Enter matrix row count: \n");
	scanf("%d", &m);

	printf("Enter matrix column count: \n");
	scanf("%d", &n);

	printf("Enter matrix elements: \n");

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	calculate(a, b, c, m, n);

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}

void calculate(int a[][COL], int b[][COL], int c[][COL], int m, int n)
{
	int i, j, k;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < n; k++)
			{
				c[i][j] = a[i][k] * b[k][j];
			}
		}
	}
}
