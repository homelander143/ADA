#include <stdio.h>

int main() {
    int choice, n, key, temp = 0;

    printf("1-Linear Search 2-Binary Search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int a[20], i;
            printf("Enter total elements:\n");
            scanf("%d", &n);

            printf("Enter array elements:\n");
            for (i = 0; i < n; i++)
                scanf("%d", &a[i]);

            printf("Enter the element to be searched:\n");
            scanf("%d", &key);

            for (i = 0; i < n; i++) {
                temp++;
                if (a[i] == key) {
                    printf("Element found at index %d\n", i);
                    break;
                }
            }

            if (temp > n)
                printf("Element not found\n");

            printf("Number of loops = %d\n", temp);
            break;
        }

        case 2: {
            int array[100], i;
            printf("Enter the number of elements:\n");
            scanf("%d", &n);

            printf("Enter %d integers in sorted order:\n", n);
            for (i = 0; i < n; i++)
                scanf("%d", &array[i]);

            printf("Enter the value to be found:\n");
            scanf("%d", &key);

            int low = 0, high = n - 1, mid;
            while (low <= high) {
                temp++;
                mid = low + (high - low) / 2;

                if (array[mid] == key) {
                    printf("%d found at index %d\n", key, mid);
                    break;
                } else if (array[mid] < key) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            if (low > high)
                printf("Not found! %d isn't present in the list\n", key);

            printf("Number of loops = %d\n", temp);
            break;
        }
        
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
