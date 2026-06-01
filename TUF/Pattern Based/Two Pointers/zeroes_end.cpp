#include <bits/stdc++.h>
using namespace std;

// Brute
// void moveZeroesEnd(int arr[], int n)
// {
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//             temp.push_back(arr[i]);
//     }
//     int k = temp.size();
//     for (int i = 0; i < k; i++)
//     {
//         arr[i] = temp[i];
//     }

//     for (int i = k; i < n; i++)
//         arr[i] = 0;

//     cout << "After moving:";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// Optimal - 2 pointer
void moveZeroesEnd(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout << "After moving:";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
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
    moveZeroesEnd(arr, n);
    return 0;
}