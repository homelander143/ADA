#include <stdio.h> 

int main() 
{ 
    int n, i, j, k; 

    // Input: Number of vertices 
    printf("Enter number of vertices: "); 
    scanf("%d", &n); 

    // Declare the adjacency matrix 
    int a[n][n]; 

    // Input: Adjacency matrix 
    printf("Enter adjacency matrix\n"); 
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < n; j++) 
        { 
            printf("a[%d][%d]: ", i, j); 
            scanf("%d", &a[i][j]); 
        } 
    } 

    // Warshall's algorithm to compute transitive closure 
    for (k = 0; k < n; k++) 
    { 
        for (i = 0; i < n; i++) 
        { 
            for (j = 0; j < n; j++) 
            { 
                a[i][j] = a[i][j] || (a[i][k] && a[k][j]); 
            } 
        } 
    } 

    // Output: Transitive closure of the graph 
    printf("Transitive closure of the graph:\n");
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < n; j++) 
        { 
            printf("%d\t", a[i][j]); 
        } 
        printf("\n"); 
    }  

    return 0; 
}
