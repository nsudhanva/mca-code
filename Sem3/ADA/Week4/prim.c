#include<stdio.h>
#include<limits.h>
#define SIZE 5

int min_edge(int edge[], int vertices[]);
int prim(int graph[][SIZE], int tree[SIZE], int weights[]);
int sum_weights(int weights[]);

int main()
{
    int graph[SIZE][SIZE], tree[SIZE], weights[SIZE], i, j;

    printf("Enter adjacency matrix elements:\n");
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            scanf("%d", &graph[i][j]);
        }
    }

    printf("\n");

    printf("Prim's Minimum Spanning Tree: \n");
    
    prim(graph, tree, weights);

    for (i = 1; i < SIZE; i++){
        printf("(%d, %d): %d \n", tree[i], i, weights[i]);
    }

    printf("\n");
    printf("Minimum Total Cost: %d", sum_weights(weights));
    printf("\n");

}

int min_edge(int edge[], int vertices[])
{
   int min = INT_MAX, min_index, i;
 
   for (i = 0; i < SIZE; i++){
     if (vertices[i] == 0 && edge[i] < min){
         min = edge[i];
         min_index = i;
     }
   }
 
   return min_index;
}

int prim(int graph[][SIZE], int tree[], int weights[])
{
    int edge[SIZE], vertices[SIZE];
    int x, i, j;

    for(i = 0; i < SIZE; i++){
        edge[i] = INT_MAX;
        vertices[i] = 0;
    }

    edge[0] = 0;
    tree[0] = -1;

    for(x = 0; x < SIZE - 1; x++){
        int i;
        i = min_edge(edge, vertices);

        vertices[i] = 1;

        for(j = 0; j < SIZE; j++){
            if ((graph[i][j] && vertices[j] == 0) && (graph[i][j] < edge[j])){
                tree[j]  = i;
                edge[j] = graph[i][j];
            }
        }
    }

    for (i = 1; i < SIZE; i++){
        weights[i] = graph[i][tree[i]];
    }
}

int sum_weights(int weights[])
{
    int i, sum = 0;
    
    for (i = 1; i < SIZE; i++){
        sum += weights[i];
    }

    return sum;
}