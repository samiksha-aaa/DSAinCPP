#include <iostream>
using namespace std;

void takeInput(int arr[], int n)
{
    cout << "Enter the digits:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void plusOne(int arr[], int n)
{
    // Traverse from last digit
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] < 9)
        {
            arr[i]++;
            break;
        }
        else
        {
            arr[i] = 0;
        }
    }

    // If first digit became 0, then all digits were 9
    if (arr[0] == 0)
    {
        cout << "Result: 1 ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Result: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;

    cout << "Enter number of digits: ";
    cin >> n;

    int arr[n];

    takeInput(arr, n);

    plusOne(arr, n);

    return 0;
}