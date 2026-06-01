#include <bits/stdc++.h>
using namespace std;

// sum of 1st n numbers
int sum = 0;
void sum_n(int i, int n)
{
    if (i > n)
    {
        cout << "Sum of first n numbers:" << sum;
        return;
    }
    sum += i;
    sum_n(i + 1, n);
}
// sum of 1st n numbers(functional recursion)
int f(int n)
{
    if (n == 0)
        return 0;
    return n + f(n - 1);
}
int main()
{
    // Your code goes here
    int n;
    cout << "Enter the number:";
    cin >> n;
    sum_n(1, n);
    return 0;
}