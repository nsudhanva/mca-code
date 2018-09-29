#include<stdio.h>

void counts(int *a, int n)
{
    int i = 0;

    while (i < n)
    {
        if (a[i] <= 0)
        {
            i++;
            continue;
        }

        int x = a[i] - 1;

        if (a[x] > 0)
        {
            a[i] = a[x];
 
            a[x] = -1;
        }
        else
        {
            a[x]--;
            a[i] = 0;
            i++;
        }
    }
 
    printf("Counts of all elements\n");

    for (i = 0; i < n; i++)
    {    	

    	if(abs(a[i]) != 0){
        	printf("%d -> %d\n", i + 1, abs(a[i]));    		
    	}

    }
}


int main()
{
	int a[10], c[10], n, i, j, count = 0;

	printf("Enter limit: \n");
	scanf("%d", &n);

	printf("Enter array elements: \n");

	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	int flag = 1;

	int k = 0;

	for (i = 0; i < n; ++i)
	{
		for (j = i + 1; j < n - 1; ++j)
		{
			// printf("A[i]: %d\t", a[i]);
			// printf("A[j]: %d\n", a[j]);

			if(a[i] == a[j]){
				flag = 0;
				// printf("C[k]: %d\n", c[k]);
			}
		}

		count = 0;
	}

	counts(a, n);

	if (flag)
	{
		printf("Unique\n");
	}
	else
	{
		printf("Not Unique\n");
	}
}