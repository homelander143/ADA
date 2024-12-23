#include <stdio.h> 

#define MAX 100 

int adj[MAX][MAX]; 
int visited[MAX]; 
int n; 

// Function to perform Depth-First Search (DFS)
void dfs(int i) 
{ 
    printf("%d ", i); 
    visited[i] = 1; 

    for (int j = 1; j <= n; j++) 
    { 
        if (!visited[j] && adj[i][j]) 
        {
            dfs(j); 
        }
    } 
}  

int main() 
{ 
    int e; 
    printf("Enter number of vertices:\n"); 
    scanf("%d", &n); 

    printf("Enter number of edges:\n"); 
    scanf("%d", &e); 

    // Initialize adjacency matrix and visited array
    for (int i = 1; i <= n; i++) 
    { 
        visited[i] = 0; 
        for (int j = 1; j <= n; j++) 
        {
            adj[i][j] = 0; 
        }
    } 

    // Input edges and update adjacency matrix
    printf("Enter edges (source, destination):\n"); 
    for (int i = 1; i <= e; i++) 
    { 
        printf("Edge %d: ", i); 
        int src, des; 
        scanf("%d%d", &src, &des); 
        adj[src][des] = 1; 
        adj[des][src] = 1; 
    } 

    // Display the adjacency matrix
    printf("Adjacency matrix:\n"); 
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = 1; j <= n; j++) 
        {
            printf("%d  ", adj[i][j]); 
        }
        printf("\n"); 
    } 

    // Perform DFS starting from vertex 1
    printf("DFS traversal starting from vertex 1:\n");
    dfs(1); 

    return 0; 
} 
