#include<stdio.h> 
#include<stdbool.h> 
#include<string.h> 
#define INF 9999999 
int main() { 
    int V,no_edge,x,y; 
    printf("Enter the number of vertices: "); 
    scanf("%d", &V); 
 
    int G[V][V]; 
 
    printf("Enter the adjacency matrix for the graph (%d x %d):\n", V, V); 
    for (int i = 0; i < V; i++) 
     { 
        for (int j = 0; j < V; j++)  
        { 
            scanf("%d", &G[i][j]); 
        } 
    } 
 
    int selected[V]; 
    memset(selected, false, sizeof(selected)); 
    no_edge = 0; 
    selected[0] = true; 
 
    printf("Edge : Weight\n"); 
 
    while (no_edge < V - 1) { 
        int min = INF; 
        x = 0; 
        y = 0; 
 
        for (int i = 0; i < V; i++) { 
            if (selected[i]) { 
                for (int j = 0; j < V; j++) { 
                    if (!selected[j] && G[i][j]) { 
                        if (min > G[i][j]) { 
                            min = G[i][j]; 
                            x = i; 
                            y = j; 
                        } 
                    }
				}
            } 
        } 
        printf("%d - %d : %d\n", x, y, G[x][y]); 
        selected[y] = true; 
        no_edge++; 
    } 
 
    return 0; 
}
