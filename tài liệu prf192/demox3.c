#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, choice;
    int arr[100];

    while (1) {
        // Display menu
        printf("\n---------------------------------------------\n");
        printf("Menu:\n");
        printf("1. Input N and array of integer numbers\n");
        printf("2. Find the largest even negative number\n");
        printf("3. Calculate Average total of ODD numbers\n");
        printf("4. Calculate Greatest common divisor of all array members\n");
        printf("5. Sort up ascending Display all elements\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Getting input value of N
                do {
                    printf("Enter the number of elements (2 < N < 100): ");
                    scanf("%d", &n);
                } while (n < 3 || n > 99);

                // Getting N integers and storing into the array
                addElement(arr, n);
                break;

            case 2:
                // Find the largest even negative number
                printf("The largest even negative number is %d\n", largestEvenNegative(arr, n));
                break;

            case 3:
                // Calculate average total of the odd numbers
                printf("The average total of odd numbers is %.2f\n", avgTotalOdd(arr, n));
                break;

            case 4:
                // Calculate Greatest common divisor
                printf("The greatest common divisor of all array members is %d\n", calculateGCD(arr, n));
                break;

            case 5:
                // Sorted all elements by ascending and then display them
                sortAscending(arr, n);
                printArray(arr, n);
                break;

            case 6:
                // Exit the program
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice, try again\n");
                break;
        }
    }
    return 0;
}

// Function to add element to the array
void addElement(int arr[], int limit) {
    for (int i = 0; i < limit; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

// Function to find the largest even negative number
int largestEvenNegative(int arr[], int n) {
    int largest = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 && arr[i] % 2 == 0 && arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// Function to calculate the average total of odd numbers
float avgTotalOdd(int arr[], int n) {
    float total = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            total += arr[i];
            count++;
        }
    }
    return count > 0 ? total / count : 0;
}

// Function to calculate the greatest common divisor of all array members
int calculateGCD(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        int a = result, b = arr[i];
        while (a != b) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        result = a;
    }
    return result;
}

// Function to sort the array in ascending order
void sortAscending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
