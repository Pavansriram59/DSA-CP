#include <bits/stdc++.h>
using namespace std;

// Brute
// int maxProfit(int price[], int start, int end)
// {
//     if (start >= end)
//         return 0;
//     int profit = 0;
//     for (int i = start; i < end; i++)
//     {
//         for (int j = i + 1; j <= end; j++)
//         {
//             if (price[j] > price[i])
//             {
//                 int curr_profit = (price[j] - price[i]) + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);
//                 profit = max(profit, curr_profit);
//             }
//         }
//     }
//     return profit;
// }

// Optimal
int maxProfit(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i - 1])
            profit += price[i] - price[i - 1];
    }
    return profit;
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
    cout << "Max Profit:" << maxProfit(arr, n);
    return 0;
}