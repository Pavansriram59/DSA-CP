#include <bits/stdc++.h>
using namespace std;

// Find last duplicate element index in sorted array
// Optimal - 2 pointer
void lastDupIndex(int arr[], int n)
{
    int i = n - 2, j = n - 1;
    while (i >= 0)
    {
        if (arr[i] == arr[j])
            break;
        else
        {
            i--;
            j--;
        }
    }
    cout << "last duplicate element index is:" << j;
}

int main()
{
    // Your code goes here
    int n;
    cout << "Enter the size:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    lastDupIndex(arr, n);
    return 0;
}