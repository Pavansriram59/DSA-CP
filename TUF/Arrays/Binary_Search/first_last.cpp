#include <bits/stdc++.h>
using namespace std;

// First & last occurrence of given number in sorted array
// Linear Search
// void firstLast(int arr[], int n, int x)
// {
//     int first = -1, last = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             if (first == -1)
//                 first = i;
//             last = i;
//         }
//     }
//     cout << "First and Last occurrence of given number are:" << first << " " << last;
// }

// using pre-defined functions
// void firstLast(int arr[], int n, int x)
// {
//     int first, last;
//     int lb = lower_bound(arr, arr + n, x) - arr;
//     cout << lb;
//     if (lb == n || arr[lb] != x)
//     {
//         first = -1;
//         last = -1;
//     }
//     else
//     {
//         int ub = upper_bound(arr, arr + n, x) - arr;
//         first = lb;
//         last = ub - 1;
//     }
//     cout << "First and Last occurrence of given number are:" << first << " " << last;
// }

// using plain binary search
int firstOccurrence(int arr[], int n, int x)
{
    int first = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return first;
}
int lastOccurrence(int arr[], int n, int x)
{
    int last = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return last;
}

int main()
{
    // Your code goes here
    int n, x;
    cout << "Enter the size:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the element to find:";
    cin >> x;
    // firstLast(arr, n, x);
    cout << "First Occurrence of given number is:" << firstOccurrence(arr, n, x);
    cout << "Last Occurrence of given number is:" << lastOccurrence(arr, n, x);
    return 0;
}