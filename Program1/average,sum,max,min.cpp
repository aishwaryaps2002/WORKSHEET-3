#include <stdio.h>

// Function prototypes
int findSum(int arr[], int n);
float findAverage(int arr[], int n);
int findMax(int arr[], int n);
int findMin(int arr[], int n);
int main() 
{
    int arr[5], n, i;
    printf("Enter number of integers (max 5): ");
    scanf("%d", &n);
    if(n < 1 || n > 5) 
    {
        printf("Invalid number! Please enter between 1 and 5.\n");
        return 0;
    }
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\nSum = %d", findSum(arr, n));
    printf("\nAverage = %.2f", findAverage(arr, n));
    printf("\nMaximum = %d", findMax(arr, n));
    printf("\nMinimum = %d\n", findMin(arr, n));
    return 0;
}

// Function to find sum
int findSum(int arr[], int n) 
{
    int sum = 0;
    for(int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

// Function to find average
float findAverage(int arr[], int n) 
{
    return (float)findSum(arr, n) / n;
}

// Function to find maximum
int findMax(int arr[], int n) 
{
    int max = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

// Function to find minimum
int findMin(int arr[], int n) 
{
    int min = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] < min) 
        {
            min = arr[i];
        }
    }
    return min;
}
