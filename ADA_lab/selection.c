#include <stdio.h> 
#include <stdlib.h> 

// Function to sort the array using Selection Sort
void sort(int a[], int n) 
{
    int small, j, i; 
    for(i = 0; i < n; i++) 
    { 
        small = i; 
        for(j = i + 1; j < n; j++) 
        { 
            if(a[small] > a[j]) 
            { 
                small = j; 
            } 
        } 
        if(small != i) 
        { 
            int temp = a[i]; 
            a[i] = a[small]; 
            a[small] = temp; 
        } 
    } 
} 

int main()
{ 
    int n, i; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
    
    int a[n]; 
    printf("Enter the array elements:\n"); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
    } 
       
    sort(a, n); 
      
    printf("Sorted elements are:\n"); 
    for(i = 0; i < n; i++) 
    { 
        printf("%d\n", a[i]); 
    } 
      
    return 0; 
}
