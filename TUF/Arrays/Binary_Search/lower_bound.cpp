#include <bits/stdc++.h>
using namespace std;

// smallest index such that arr[ind]>=x(sorted array)
// smallest index such that arr[ind]>x - upper bound
int lowerBound(int arr[], int n, int x)
{
    int ans = n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
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
    // int lb = lower_bound(arr, arr + n, x) - arr;
    cout << "Lower bound of given number is:" << lowerBound(arr, n, x);
    return 0;
}