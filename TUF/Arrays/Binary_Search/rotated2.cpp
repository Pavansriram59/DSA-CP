#include <bits/stdc++.h>
using namespace std;

// Search the number in rotated sorted array(duplicates)
bool searchRotated(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == arr[mid])
            return true;
        // reduce the search space
        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++, high--;
            continue;
        }
        // check left sorted
        if (arr[low] <= arr[mid])
        {
            if (target >= arr[low] && target <= arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // check right sorted
        else
        {
            if (target >= arr[mid] && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
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
    cout << "Enter the elemennt to find in rotated sorted array:";
    cin >> k;
    bool ans = searchRotated(arr, n, k);
    if (!ans)
        cout << "Element not found";
    else
        cout << "Element found";
    return 0;
}