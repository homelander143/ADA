#include <stdio.h> 
#include <string.h> 

#define MAX 256 

// Function to create the shift table
void shiftTable(char pattern[], int table[]) { 
    int m = strlen(pattern); 
    // Initialize all elements of the table to the length of the pattern
    for(int i = 0; i < MAX; i++) 
        table[i] = m; 
    // Update the shift values for the characters in the pattern
    for(int i = 0; i < m - 1; i++) 
        table[(unsigned char)pattern[i]] = m - i - 1; 
} 

// Function to perform Horspool's search
int horspoolSearch(char text[], char pattern[]) { 
    int n = strlen(text); 
    int m = strlen(pattern); 
    int table[MAX]; 

    // Create the shift table for the given pattern
    shiftTable(pattern, table); 

    int i = m - 1; 
    while(i < n) { 
        int j = 0; 
        // Check for pattern match from right to left
        while(j < m && text[i - j] == pattern[m - 1 - j]) 
            j++; 
        if(j == m)  
            return i - m + 1; // Pattern found, return position 
        i += table[(unsigned char)text[i]]; // Shift the pattern using the table
    } 
    return -1; // Pattern not found
} 

int main() { 
    char text[MAX]; 
    char pattern[50]; 

    // Input the text (main string)
    printf("Enter the string (text): "); 
    gets(text); 

    // Input the pattern to be searched
    printf("Enter the pattern: "); 
    gets(pattern); 

    // Call the Horspool search function
    int result = horspoolSearch(text, pattern); 

    if(result != -1) 
        printf("Pattern found at position %d\n", result); 
    else 
        printf("Pattern not found\n"); 

    return 0; 
} 
