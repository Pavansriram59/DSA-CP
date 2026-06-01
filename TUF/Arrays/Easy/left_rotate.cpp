#include <bits/stdc++.h>
using namespace std;
// Brute
// void leftRotateByK(int arr[], int n, int k)
// {
//     k = k % n;
//     vector<int> temp;

//     for (int i = 0; i < k; i++)
//         temp.push_back(arr[i]);

//     for (int i = k; i < n; i++)
//         arr[i - k] = arr[i];

//     for (int i = n - k; i < n; i++)
//         arr[i] = temp[i - (n - k)];

//     cout << "Array after rotating:";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// Optimal
void leftRotateByK(int arr[], int n, int k)
{
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
    cout << "Array after rotating:";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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
    cout << "Enter the k:";
    cin >> k;
    leftRotateByK(arr, n, k);
    return 0;
}