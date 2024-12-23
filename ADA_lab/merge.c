#include<stdio.h> 

// Function to merge two halves of the array
void merge(int a[], int l, int m, int h) 
{ 
    int i, j, k = l; 
    int p = m - l + 1; 
    int q = h - m; 
    int b[p], c[q]; 

    // Copy data to temporary arrays b[] and c[]
    for (i = 0; i < p; i++) 
        b[i] = a[l + i]; 
    for (j = 0; j < q; j++) 
        c[j] = a[m + j + 1]; 

    i = 0, j = 0; 

    // Merge the temporary arrays back into a[l..h]
    while (i < p && j < q) 
    { 
        if (b[i] <= c[j]) 
        { 
            a[k] = b[i]; 
            i++; 
        } 
        else 
        { 
            a[k] = c[j]; 
            j++; 
        } 
        k++; 
    } 

    // Copy the remaining elements of b[], if any
    while (i < p) 
    { 
        a[k] = b[i]; 
        i++; 
        k++; 
    } 

    // Copy the remaining elements of c[], if any
    while (j < q) 
    { 
        a[k] = c[j]; 
        j++; 
        k++; 
    } 
} 

// Function to perform merge sort
void mergesort(int a[], int low, int high) 
{ 
    if (low < high) 
    { 
        int m = low + (high - low) / 2; 
        mergesort(a, low, m); 
        mergesort(a, m + 1, high); 
        merge(a, low, m, high); 
    } 
} 

int main() 
{ 
    int i, n; 

    // Input size of the array
    printf("Enter size of array:\n"); 
    scanf("%d", &n); 

    int a[n]; 

    // Input array elements
    printf("Enter array elements:\n"); 
    for (i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
    } 

    // Print original array
    printf("Original array:\n"); 
    for (i = 0; i < n; i++) 
    { 
        printf("%d\t", a[i]); 
    } 

    // Call merge sort on the entire array
    mergesort(a, 0, n - 1); 

    // Print sorted array
    printf("\nSorted array:\n"); 
    for (i = 0; i < n; i++) 
    { 
        printf("%d\t", a[i]); 
    } 

    return 0; 
}
