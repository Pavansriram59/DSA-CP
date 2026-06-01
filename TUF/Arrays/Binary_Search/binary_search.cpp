#include <bits/stdc++.h>
using namespace std;

// Iterative Code
// int binary_search(int arr[], int n, int target)
// {
//     int low = 0, high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (target == arr[mid])
//             return mid;
//         else if (target > arr[mid])
//             low = mid + 1;
//         else
//             high = mid - 1;
//     }
//     return -1;
// }

// Recursive
int binary_search(int arr[], int n, int low, int high, int target)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    // int mid = low + (high - low) / 2; // Overflow case where low=high=INT_MAX
    if (target == arr[mid])
        return mid;
    else if (target > arr[mid])
        return binary_search(arr, n, mid + 1, high, target);
    else
        return binary_search(arr, n, low, mid - 1, target);
}
int main()
{
    // Your code goes here
    int n, k;
    cout << "Enter the size:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the elemennt to find:";
    cin >> k;
    int low = 0, high = n - 1;
    int index = binary_search(arr, n, low, high, k);
    if (index < 0)
        cout << "Element not found";
    else
        cout << "Element found at index:" << index;
    return 0;
}