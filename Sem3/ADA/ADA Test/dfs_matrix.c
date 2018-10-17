#include<stdio.h>
#define SIZE 10

void DFS(int G[][SIZE], int start, int n, int visited[]);

int main()
{
    int n, i, j, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int G[SIZE][SIZE], visited[SIZE];
    printf("Enter the graph as matrix: \n");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &G[i][j]);
        }
    }

    printf("Enter the starting vertex: ");
    scanf("%d", &start);

    for(i = 0; i < n; i++){
        visited[i] = 0;
    }

    DFS(G, start, n, visited);
}

void DFS(int G[][SIZE], int start, int n, int visited[])
{
    int j;

    printf("Visited: %d\n", start);

    visited[start] = 1;

    for(j = 0; j < n; j++){
        if(!visited[j] && G[start][j] == 1){
            DFS(G, j, n, visited);
        }
    } 
}
