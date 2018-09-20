#include<stdio.h>
#include<stdlib.h>

void djikstra(int n, int source, int graph[][10], int d[][10]);

int main()
{
	int n, i, j, graph[10][10], d[10][10];

	printf("Enter the matrix size: \n");
	scanf("%d", &n);

	printf("Enter matrix elements: \n");

	for(i = 0; i < n; i ++){
		for(j = 0; j < n; j++){
			scanf("%d", &graph[i][j]);
		}
	}

	printf("Enter source: \n");
	scanf("%d", )


}

void djikstra(int n, int source, int graph[][10], int d[][10])
{
	int i;

	int distance[10];
	int visited[10];

	for (i = 0; i < n; i++){	
    	distance[i] = INT_MAX;
        visited[i] = 0;
 	}

 	distance[source] = 0;

 	

}