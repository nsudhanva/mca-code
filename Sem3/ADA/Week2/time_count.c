#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *xp, int *yp);
void generateRandoms(int a[], int b[], int c[], int d[], int lower, int upper, int count);
void printArray(int a[], int n);
void bubble_sort(int a[], int n);
void selection_sort(int a[], int n);
void merge(int arr[], int l, int m, int r);
void merge_sort(int arr[], int l, int r);
int partition(int arr[], int low, int high);
void quick_sort(int arr[], int low, int high);
void store_to_file(double time_spent[], double time_spent_2[], double time_spent_3[], double time_spent_4[], int inputs[]);

int main()
{
	int a[100000], b[100000], c[100000], d[100000], n, l, u, x;
	int inputs[] = {5, 50, 500, 5000, 50000};

	srand(42);

	printf("Enter lower limit: \n");
	scanf("%d", &l);

	printf("Enter upper limit: \n");
	scanf("%d", &u);

	generateRandoms(a, b, c, d, l, u, n);
	// printArray(a, n);
	double time_spent[5], time_spent_2[5], time_spent_3[5], time_spent_4[5];

	for(x = 0; x < 5; x++){

		n = inputs[x];

		clock_t begin = clock();
		
		bubble_sort(a, n);

		clock_t end = clock();

		time_spent[x] = (double)(end - begin) / CLOCKS_PER_SEC;

		// printArray(a, n);
		printf("Time taken for bubble sort of input size %d: %f\n", inputs[x], time_spent[x]);

		clock_t begin_2 = clock();
		
		selection_sort(b, n);

		clock_t end_2 = clock();

		time_spent_2[x] = (double)(end_2 - begin_2) / CLOCKS_PER_SEC;

		// printArray(b, n);
		printf("Time taken for selection sort of input size %d: %f\n", inputs[x], time_spent_2[x]);

		clock_t begin_3 = clock();
		
		merge_sort(c, 0, n);

		clock_t end_3 = clock();

		time_spent_3[x] = (double)(end_3 - begin_3) / CLOCKS_PER_SEC;

		// printArray(c, n);
		printf("Time taken for merge sort of input size %d: %f\n", inputs[x], time_spent_3[x]);

		clock_t begin_4 = clock();
		
		quick_sort(d, 0, n);

		clock_t end_4 = clock();

		time_spent_4[x] = (double)(end_4 - begin_4) / CLOCKS_PER_SEC;

		// printArray(d, n);
		printf("Time taken for quick sort of input size %d: %f\n", inputs[x], time_spent_4[x]);
	}
	store_to_file(time_spent, time_spent_2, time_spent_3, time_spent_4, inputs);
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void generateRandoms(int a[], int b[], int c[], int d[], int lower, int upper, int count)
{
    int i;

    for (i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        a[i] = num;
        b[i] = num;
        c[i] = num;
        d[i] = num;
    }
}

void printArray(int a[], int n)
{
	int i;

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
}

void bubble_sort(int a[], int n)
{
	
	int i, j;

   	for (i = 0; i < n - 1; i++){
       	for (j = 0; j < n - i - 1; j++){
       		if (a[j] > a[j + 1])
              	swap(&a[j], &a[j + 1]);
       } 
   	}      
           
}

void selection_sort(int a[], int n)
{
	int i, j, min;
 
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (a[j] < a[min])
            min = j;
 
        swap(&a[min], &a[i]);
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
 
        merge_sort(arr, l, m);
        merge_sort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}

void quick_sort(int arr[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (arr[i] <= arr[pivot] && i <= high)
            {
                i++;
            }
            while (arr[j] > arr[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        quick_sort(arr, low, j - 1);
        quick_sort(arr, j + 1, high);
    }
}

void store_to_file(double time_spent[], double time_spent_2[], double time_spent_3[], double time_spent_4[], int inputs[])
{
	FILE *fptr;

	int i;

    fptr = fopen("speed_algo.txt", "w");
     
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }

    for(i = 0; i < 5; i++){
	    fprintf(fptr, "%d %lf %lf %lf %lf\n", inputs[i], time_spent[i], time_spent_2[i], time_spent_3[i], time_spent_4[i]);
	}

    fclose(fptr);
}

// gnuplot
// plot 'speed_algo.txt'
// plot 'speed_algo.txt' with lines
/* 
plot 'speed_algo.txt' using 1:2 with lines, 'speed_algo.txt' using 1:3 with lines, 'speed_algo.txt' using 1:4 with lines, 'speed_algo.txt' using 1:5 with lines
*/