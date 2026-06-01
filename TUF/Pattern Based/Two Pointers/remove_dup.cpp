#include <bits/stdc++.h>
using namespace std;

// Remove duplicates from sorted array(inplace)
// Brute - using set
// Optimal - 2 pointer
int remove_dup(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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
    cout << "No of unique elements:" << remove_dup(arr, n);
    return 0;
}