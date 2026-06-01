#include <bits/stdc++.h>
using namespace std;

// Union of two sorted arrays
// Brute - using set
// void union_arrays(int arr1[], int arr2[], int n1, int n2)
// {
//     set<int> st;
//     for (int i = 0; i < n1; i++)
//         st.insert(arr1[i]);
//     for (int i = 0; i < n2; i++)
//         st.insert(arr2[i]);
//     int res[st.size()], i = 0;
//     for (auto it : st)
//         res[i++] = it;
//     cout << "After union:";
//     for (int i = 0; i < st.size(); i++)
//         cout << res[i] << " ";
// }

// Optimal - 2 pointer
void union_arrays(int arr1[], int arr2[], int n1, int n2)
{
    vector<int> res;
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (res.size() == 0 || res.back() != arr1[i])
                res.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (res.size() == 0 || res.back() != arr2[j])
                res.push_back(arr2[j]);
            j++;
        }
    }
    while (j < n2)
    {
        if (res.size() == 0 || res.back() != arr2[j])
            res.push_back(arr2[j]);
        j++;
    }
    while (i < n1)
    {
        if (res.size() == 0 || res.back() != arr1[i])
            res.push_back(arr1[i]);
        i++;
    }
    cout << "After union:";
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
    union_arrays(arr1, arr2, n1, n2);
    return 0;
}