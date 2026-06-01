#include <bits/stdc++.h>
using namespace std;

void reverse_array(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverse_array(i + 1, arr, n);
}
int main()
{
    // Your code goes here
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverse_array(0, arr, n);
    cout << "After reversing:";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}