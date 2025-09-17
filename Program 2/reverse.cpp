#include <iostream>
using namespace std;
// Function using Call by Value
void reverseByValue(int num) 
{
    cout << "Reversed (Call by Value): ";
    while(num != 0) 
    {
        cout << num % 10;
        num /= 10;
    }
    cout << endl;
}

// Function using Call by Pointer
void reverseByPointer(int *num) 
{
    int n = *num;
    cout << "Reversed (Call by Pointer): ";
    while(n != 0) 
    {
        cout << n % 10;
        n /= 10;
    }
    cout << endl;
}

// Function using Call by Reference
void reverseByReference(int &num) 
{
    int n = num;
    cout << "Reversed (Call by Reference): ";
    while(n != 0) 
    {
       cout << n % 10;
        n /= 10;
    }
    cout << endl;
}

int main() 
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    reverseByValue(num);
    reverseByPointer(&num);
    reverseByReference(num);
    return 0;
}
