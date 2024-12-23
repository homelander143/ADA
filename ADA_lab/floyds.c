#include <stdio.h> 

int main() 
{ 
    int n, i, j, k; 
    
    printf("Enter number of vertices: "); 
    scanf("%d", &n); 
    
    int a[n][n]; 
    
    printf("Enter adjacency (weighted) matrix\n"); 
    for(i = 0; i < n; i++) 
    { 
        for(j = 0; j < n; j++) 
        { 
            printf("a[%d][%d]: ", i, j); 
            scanf("%d", &a[i][j]); 
        } 
    } 
    
    for(k = 0; k < n; k++) 
    { 
        for(i = 0; i < n; i++) 
        { 
            for(j = 0; j < n; j++) 
            { 
                a[i][j] = (a[i][j] < (a[i][k] + a[k][j])) ? a[i][j] : (a[i][k] + a[k][j]); 
            } 
        } 
    } 
    
    printf("Shortest path:\n"); 
    for(i = 0; i < n; i++) 
    { 
        for(j = 0; j < n; j++) 
        { 
            printf("%d\t", a[i][j]); 
        }
        printf("\n"); 
    }  
    
    return 0; 
}
