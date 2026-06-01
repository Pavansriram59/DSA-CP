#include <bits/stdc++.h>
using namespace std;

// frequency of given numbers in an array
int main()
{
    // Your code goes here
    int n, f;
    cout << "Enter the size and no of elements to find freq:";
    cin >> n >> f;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // precompute
    int hash[10] = {0};
    for (int i = 0; i < n; i++)
        hash[arr[i]] += 1;

    cout << "Enter the elements to find freq in the array:";
    for (int i = 0; i < f; i++)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number]<< " ";
    }

    return 0;
}