#include<stdio.h>   

// Function to partition the array
int partition(int a[],int start,int end)   
{   
    int key = a[end]; // Pivot element
    int i = (start - 1); // Index of the smaller element

    for (int j = start; j <= end - 1; j++)   
    {   
        // If current element is smaller than the pivot
        if (a[j] < key)   
        {   
            i++; // Increment the index of the smaller element

            // Swap a[i] and a[j]
            int t = a[i];   
            a[i] = a[j];   
            a[j] = t;   
        }   
    }   

    // Swap a[i+1] with pivot (a[end])
    int t = a[i + 1];   
    a[i + 1] = a[end];   
    a[end] = t;   

    return (i + 1); // Return the partition index
}   
   
// Function to perform quick sort
void quick(int a[], int start, int end)  
{   
    if (start < end) 
    { 
        // Partition the array
        int p = partition(a, start, end); 

        // Recursively sort elements before and after the partition
        quick(a, start, p - 1);   
        quick(a, p + 1, end);   
    }   
} 
   
int main()   
{  
    int num, i;

    printf("Enter the number of elements:"); 
    scanf("%d",&num); 

    // Declare an array of size 'num'
    int a[num]; 

    printf("Enter the elements:\n"); 
    for (i = 0; i < num; i++) 
    { 
        scanf("%d", &a[i]); 
    }   

    printf("\nBefore sorting, array elements are: \n");   
    for (i = 0; i < num; i++)  
    {  
        printf("%d ", a[i]);  
    } 
   
    // Call quicksort function
    quick(a, 0, num - 1);   
  
    printf("\n\nAfter sorting, array elements are: \n");     
    for (i = 0; i < num; i++)  
    {  
        printf("%d ", a[i]);  
    } 
          
    return 0;   
} 
