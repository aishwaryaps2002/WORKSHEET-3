#include <iostream>
using namespace std;

// Function to calculate sum
int findSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate average
float findAverage(int arr[], int n) {
    int sum = findSum(arr, n);
    return (float)sum / n;
}

// Function to find maximum
int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Function to find minimum
int findMin(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

// Main function
int main() {
    int arr[5], n;

    cout << "Enter number of integers (max 5): ";
    cin >> n;

    if(n <= 0 || n > 5) {
        cout << "Invalid number of integers. Please enter between 1 and 5." << endl;
        return 0;
    }

    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nSum: " << findSum(arr, n);
    cout << "\nAverage: " << findAverage(arr, n);
    cout << "\nMaximum: " << findMax(arr, n);
    cout << "\nMinimum: " << findMin(arr, n) << endl;

    return 0;
}
