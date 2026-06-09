#include <bits/stdc++.h>
using namespace std;

// Brute - Thetha(r-l+1), O(n)
// int getSum(int arr[], int start, int end)
// {
//     int sum = 0;
//     for (int i = start; i <= end; i++)
//         sum += arr[i];
//     return sum;
// }

// Optimal - Prefix Sum - O(1)
int getSum(int preSum[], int l, int r)
{
    if (l == 0)
        return preSum[r];
    else
        return preSum[r] - preSum[l - 1];
}

int main()
{
    // Your code goes here
    int n, l, r;
    cout << "Enter the size:";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the ranges:";
    cin >> l >> r;
    
    // Precompute prefix sum array
    int preSum[n];
    preSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        preSum[i] = preSum[i - 1] + arr[i];

    cout << "Sum of the given range is:" << getSum(preSum, l, r);
    return 0;
}