#include <bits/stdc++.h>
using namespace std;

// Brute
// int Equi_Point(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int leftSum = 0, rightSum = 0;
//         for (int j = 0; j < i; j++)
//             leftSum += arr[j];
//         for (int j = i + 1; j < n; j++)
//             rightSum += arr[j];
//         if (leftSum == rightSum)
//             return i;
//     }
// }

// Optimal
int Equi_Point(int arr[], int n)
{
    int rs = 0;
    for (int i = 0; i < n; i++)
        rs += arr[i];
    int ls = 0;
    for (int i = 0; i < n; i++)
    {
        rs -= arr[i];
        if (ls == rs)
            return i;
        ls += arr[i];
    }
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
    cout << "Equillibrium point index:" << Equi_Point(arr, n);
    return 0;
}