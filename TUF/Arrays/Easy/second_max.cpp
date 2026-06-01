#include <bits/stdc++.h>
using namespace std;

// Brute
// int second_max(int arr[], int n)
// {
//     sort(arr, arr + n);
//     int max = arr[n - 1];
//     int sec_max;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         if (arr[i] != max)
//         {
//             sec_max = arr[i];
//             break;
//         }
//     }
//     return sec_max;
// }
// Better
// int second_max(int arr[], int n)
// {
//     int max = arr[0];
//     int sec_max = INT64_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > sec_max && arr[i] != max)
//             sec_max = arr[i];
//     }
//     return sec_max;
// }
// Optimal
int second_max(int arr[], int n)
{
    int max = arr[0];
    int sec_max = INT32_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > sec_max)
            sec_max = arr[i];
    }
    return sec_max;
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
    cout << "second max number is:" << second_max(arr, n);
    return 0;
}