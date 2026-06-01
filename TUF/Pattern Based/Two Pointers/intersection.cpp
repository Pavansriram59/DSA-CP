#include <bits/stdc++.h>
using namespace std;

// Intersection of two sorted arrays
// Brute
// void intersect_arrays(int a[], int b[], int n1, int n2)
// {
//     vector<int> res;
//     vector<int> vis(n2, 0);
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             if (a[i] == b[j] && vis[j] == 0)
//             {
//                 res.push_back(a[i]);
//                 vis[j] = 1;
//                 break;
//             }
//             if (b[j] > a[i])
//                 break;
//         }
//     }
//     cout << "After intersection:";
//     for (int i = 0; i < res.size(); i++)
//         cout << res[i] << " ";
// }

// Optimal - 2 pointer
void intersect_arrays(int a[], int b[], int n1, int n2)
{
    int i = 0, j = 0;
    vector<int> res;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            res.push_back(a[i]);
            i++;
            j++;
        }
    }
    cout << "After intersection:";
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
}

int main()
{
    // Your code goes here
    int n1, n2;
    cout << "Enter the sizes:";
    cin >> n1 >> n2;
    int arr1[n1], arr2[n2];
    cout << "Enter the elements of array 1:";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter the elements of array 2:";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    intersect_arrays(arr1, arr2, n1, n2);
    return 0;
}