#include <bits/stdc++.h>
using namespace std;

// Search the number in rotated sorted array(unique elements) - [4,5,6,1,2,3]
int searchRotated(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == arr[mid])
            return mid;
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
    return -1;
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
    int index = searchRotated(arr, n, k);
    if (index < 0)
        cout << "Element not found";
    else
        cout << "Element found at index:" << index;
    return 0;
}