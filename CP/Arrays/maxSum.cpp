#include <bits/stdc++.h>
using namespace std;

// Sliding Window
int maxSum(int arr[], int n, int k)
{
    int currSum = 0;
    for (int i = 0; i < k; i++)
        currSum += arr[i];
    int res = currSum;
    for (int i = k; i < n; i++)
    {
        currSum += arr[i] - arr[i - k];
        res = max(res, currSum);
    }
    return res;
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
    cout << "Enter k:";
    cin >> k;
    cout << "Max sum of" << k << " consecutive elements:" << maxSum(arr, n, k);
    return 0;
}