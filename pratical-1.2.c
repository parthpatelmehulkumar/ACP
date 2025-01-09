#include <stdio.h>

int main() {
    int n, i;
    
    // Ask user for the number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There should be at least two numbers to find the second largest.\n");
        return 1;
    }

    int arr[n];

    // Read the list of integers
    printf("Enter the integers: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second_largest = -1;

    // Loop to find the largest and second largest values
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == -1) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest number is: %d\n", second_largest);
    }

    return 0;
}
