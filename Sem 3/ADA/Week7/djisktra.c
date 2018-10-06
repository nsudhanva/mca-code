#include <stdio.h> 
#include <limits.h> 

   
int minDistance(int dist[], int sptSet[], int V) 
{ 
	int min = INT_MAX, min_index; 

	for (int v = 0; v < V; v++) 
		if (sptSet[v] == 0 && dist[v] <= min) 
			min = dist[v], min_index = v; 

	return min_index; 
} 
   
int printSolution(int dist[], int V, int src) 
{ 
	printf("Source	Vertex   Distance from Source\n"); 
	for (int i = 0; i < V; i++) 
		printf("%d \t%d\t\t %d\n", i+1, dist[i],src); 
} 

void dijkstra(int graph[][25], int src, int V) 
{ 
	int dist[V];     
	int sptSet[V];
	for (int i = 0; i < V; i++) 
		dist[i] = INT_MAX, sptSet[i] = 0; 
	dist[src] = 0; 
	for (int count = 0; count < V-1; count++) 
	{ 
		int u = minDistance(dist, sptSet,V); 
		sptSet[u] = 1; 
		for (int v = 0; v < V; v++) 
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v] < dist[v]) 
				dist[v] = dist[u] + graph[u][v]; 
	} 
	printSolution(dist, V,src); 
} 
   
int main() 
{ 
	int V;
	int src;
	printf("Enter total vertex\n");
	scanf("%d",&V);
	int graph[V][V]; 
	for (int i = 0; i < V; ++i)
	{
		for (int j = 0; j < V; ++j)
		{
			printf("[%d,%d] element : ",i+1,j+1 );
			scanf("%d",&graph[i][j]);
		}
	}
	printf("Enter Source vertex\n");
	scanf("%d-1",&src);
	dijkstra(graph, src, V); 

	return 0; 
}