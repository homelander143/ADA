#include <stdio.h> 

// Function prototype
void bfs(int); 

// Global variables
int visited[10], que[10], f = -1, r = -1, a[10][10], n, i, j; 
 
int main() { 
    int v; 

    // Input: Number of nodes
    printf("Enter number of nodes: "); 
    scanf("%d", &n); 

    // Input: Adjacency matrix
    printf("Enter the adjacency matrix:\n"); 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < n; j++) { 
            scanf("%d", &a[i][j]); 
        }    
    } 

    // Initialize queue and visited array
    for (i = 0; i < n; i++) { 
        que[i] = 0; 
        visited[i] = 0; 
    } 

    // Input: Starting vertex
    printf("Enter the starting vertex: "); 
    scanf("%d", &v); 

    // Call BFS from the starting vertex
    bfs(v); 

    // Display reachable nodes
    printf("Nodes reachable from vertex %d are:\n", v); 
    for (i = 0; i < n; i++) { 
        if (visited[i]) { 
            printf("%d\n", i); 
        } 
    } 

    return 0; 
} 

void bfs(int v) { 
    int i; 

    // Visit all adjacent nodes of vertex v
    for (i = 0; i < n; i++) { 
        if (a[v][i] == 1 && !visited[i]) { 
            que[++r] = i; // Enqueue the adjacent node
            visited[i] = 1; // Mark as visited
        } 
    } 

    // If queue is not empty, continue BFS
    if (f <= r) { 
        bfs(que[++f]); // Dequeue and call BFS on the next vertex
    } 
} 
