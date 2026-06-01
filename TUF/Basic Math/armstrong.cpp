#include <bits/stdc++.h>
using namespace std;

void armstrong_number(int n)
{
    int dup = n;
    int sum = 0;
    while (n > 0)
    {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }
    if (sum == dup)
        cout << "Given number is armstrong number";
    else
        cout << "Not a armstrong";
}

int main()
{
    // Your code goes here
    int n;
    cout << "Enter the number:";
    cin >> n;
    armstrong_number(n);
    return 0;
}