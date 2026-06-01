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
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    // iterate in the map
    // for (auto it : mpp)
    //     cout << it.first << "->" << it.second << endl;

    cout << "Enter the elements to find freq in the array:";
    for (int i = 0; i < f; i++)
    {
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << " ";
    }

    return 0;
}